#include "cat.h"
using namespace System;
using namespace System::IO::Ports;
using namespace System::Diagnostics;
using namespace System::Threading;
using namespace System::Windows::Forms;
using namespace System::Globalization;

#define A_BVFO 0x05
#define FREQ_SET 0x0a
#define MODE_SET 0x0c
#define STATUS 0x10

int cat::cat_init(void)
{
    CultureInfo::CurrentCulture = gcnew CultureInfo("en-US");

    if (port != nullptr && port->IsOpen)
        port->Close();

    port = gcnew SerialPort(COMPort, 4800, Parity::None, 8, StopBits::Two);

    try {
        port->Open();
        port->ReadTimeout = 5000; // Set read timeout to 5000 ms

        get_status();
    }
    catch (Exception^ e) {
        String^ mensaje = "cat_init: " + e->Message;
        MessageBox::Show(mensaje, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return 0;
    }

    return 1;
}

int cat::send_cmd(String^ fun_name, Byte parm1, Byte parm2, Byte parm3, Byte parm4, Byte instruction)
{
    array<Byte>^ cmd = gcnew array<Byte>(5);

    cmd[0] = parm1;
    cmd[1] = parm2;
    cmd[2] = parm3;
    cmd[3] = parm4;
    cmd[4] = instruction;

    try {
        port->Write(cmd, 0, cmd->Length);
        Thread::Sleep(50);
        return 1;
    }

    catch (Exception^ e) {
        String^ mensaje = fun_name + ": " + e->Message;
        MessageBox::Show(mensaje, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return 0;
    }
}

void cat::set_COMPort(String^ COM)
{
    COMPort = COM;
}

String^ cat::get_COMPort(void)
{
    return COMPort;
}

void cat::set_vfo(VFO vfo)
{
    send_cmd("set_vfo", 0x00, 0x00, 0x00, vfo, A_BVFO);
    get_status();
}

int cat::set_freq(double freq)
{
    if ((freq < 600.00) || (freq > 299999.75))
    //if ((freq < 1000.00) || (freq > 299999.75))
        return 0;

    String^ freq_string = String::Format("{0:F2}", freq);
    freq_string = freq_string->PadLeft(9, '0');

    //Debug::WriteLine("freq_string: " + freq_string);

    Byte f2  = Convert::ToByte(freq_string[0].ToString(), 16);
    Byte f34 = Convert::ToByte(freq_string[1].ToString() + freq_string[2].ToString(), 16);
    Byte f56 = Convert::ToByte(freq_string[3].ToString() + freq_string[4].ToString(), 16);
    Byte f78 = Convert::ToByte(freq_string[5].ToString() + freq_string[7].ToString(), 16);

    //Debug::WriteLine("parm1: " + f78 + " parm2: " + f56 + " parm3: " + f34 + " parm4: " + f2);

    int rc = send_cmd("set_freq", f78, f56, f34, f2, FREQ_SET);
    if (rc == 1)
        current_freq = freq;

    return rc;
}

double cat::get_freq(void)
{
    return current_freq;
}

void cat::get_status_freq(void)
{
    // f23 = status[2]
    // f45 = status[3]
    // f67 = status[4]
    // f89 = status[5]
    String^ integerPart = String::Format("{0:X2}", status[2]) + String::Format("{0:X2}", status[3]) + String::Format("{0:X2}", status[4]);
    String^ fractionalPart = String::Format("{0:X2}", status[5]);
    String^ freq_string = integerPart + "." + fractionalPart;

    double freq = Convert::ToSingle(freq_string);
    current_freq = freq;
}

void cat::set_mode(MODE mode)
{
    send_cmd("set_mode", 0x00, 0x00, 0x00, mode, MODE_SET);
}

void cat::get_status(void)
{
    send_cmd("get_status", 0x00, 0x00, 0x00, 0x00, STATUS);

    int bytesRead = 0;
    int totalBytes = 0;
    for (int i = 0; i < 344; i++)
    {
        bytesRead = port->Read(status, i, 1);
        totalBytes += bytesRead;
    }
    get_status_freq();

    Thread::Sleep(100);
}

cat::~cat()
{
    if (port != nullptr && port->IsOpen) {
        port->Close();
        //Debug::WriteLine("COM Port closed!");
    }
}

