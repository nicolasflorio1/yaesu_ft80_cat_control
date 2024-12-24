#pragma once

#ifndef __CAT_H
#define __CAT_H

using namespace System;
using namespace System::IO::Ports;

enum VFO {
	VFOA,
	VFOB
};

enum MODE {
	LSB,
	USB,
	CW,
	CW_NARROW,
	AM,
	AM_NARROW,
	FM
};

public ref class cat 
{
public:
	int  cat_init(void);
	void set_vfo(VFO vfo);
	int  set_freq(double freq);
	void set_mode(MODE mode);
	void set_COMPort(String^ COM);
	String^ get_COMPort(void);
	double get_freq(void);

	//Destructor
	~cat();

private:
	static SerialPort^ port;
	static String^ COMPort = "";
	static array<Byte>^ status = gcnew array<Byte>(344);
	static double current_freq;
	void get_status(void);
	void get_status_freq(void);
	int send_cmd(String^ fun_name, Byte parm1, Byte parm2, Byte parm3, Byte parm4, Byte cmd);
};

#endif