#pragma once
#include "cat.h"

using namespace System;
using namespace System::IO;
using namespace System::IO::Ports;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace Microsoft::VisualBasic;


namespace YaesuFT80CCATControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de YaesuFT80C_CAT_main
	/// </summary>
	public ref class YaesuFT80C_CAT_main : public System::Windows::Forms::Form
	{
	public:
		YaesuFT80C_CAT_main(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			/* Lo agregue yo */
			this->backgroundWorker = gcnew System::ComponentModel::BackgroundWorker();
			this->backgroundWorker->WorkerSupportsCancellation = true; // Habilitar cancelación
			this->backgroundWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &YaesuFT80C_CAT_main::backgroundWorker_DoWork);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~YaesuFT80C_CAT_main()
		{
			if (components)
			{
				delete components;
			}
		}

	/* Lo agregue yo */
	private: bool isWorking = false; // Variable de estado

	private: System::Windows::Forms::GroupBox^ grpDisplay;
	protected:


	private: System::Windows::Forms::Label^ lbl1M;
	private: System::Windows::Forms::Label^ lbl25;




	private: System::Windows::Forms::Label^ lbl100;

	private: System::Windows::Forms::Label^ lbl1k;

	private: System::Windows::Forms::Label^ lbl10k;

	private: System::Windows::Forms::Label^ lbl100k;
	private: System::Windows::Forms::GroupBox^ grpHAMBands;


	private: System::Windows::Forms::Button^ btn80m;
	private: System::Windows::Forms::Button^ btn160m_high;

	private: System::Windows::Forms::Button^ bnt160m_low;
	private: System::Windows::Forms::Button^ btn40m;
	private: System::Windows::Forms::Button^ btn10m;

	private: System::Windows::Forms::Button^ btn11m_norm;
	private: System::Windows::Forms::Button^ btn12m;
	private: System::Windows::Forms::Button^ btn15m;
	private: System::Windows::Forms::Button^ btn17m;
	private: System::Windows::Forms::Button^ btn20m;
	private: System::Windows::Forms::Button^ btn30m;
	private: System::Windows::Forms::Button^ btn11m_high;
	private: System::Windows::Forms::GroupBox^ grpVFOs;


	private: System::Windows::Forms::Button^ btnVFOB;
	private: System::Windows::Forms::Button^ btnVFOA;
	private: System::Windows::Forms::GroupBox^ grpModes;
	private: System::Windows::Forms::Button^ btnAM;

	private: System::Windows::Forms::Button^ btnUSB;
	private: System::Windows::Forms::Button^ btnLSB;
	private: System::Windows::Forms::Button^ btnFM;
	private: System::Windows::Forms::Button^ btnCW;
	private: System::Windows::Forms::Button^ btnInitialize;

	private: System::Windows::Forms::Label^ lblHz;
	private: System::Windows::Forms::Label^ lbl10M;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ grpShortwaveBands;
	private: System::Windows::Forms::Button^ btn16m;
	private: System::Windows::Forms::Button^ btn13m;


	private: System::Windows::Forms::Button^ btn19m;

	private: System::Windows::Forms::Button^ btn22m;

	private: System::Windows::Forms::Button^ btn25m;

	private: System::Windows::Forms::Button^ btn31m;

	private: System::Windows::Forms::Button^ btn35m;

	private: System::Windows::Forms::Button^ btn41m;

	private: System::Windows::Forms::Button^ btn49m;

	private: System::Windows::Forms::Button^ btn60m;

	private: System::Windows::Forms::Button^ btn75m;

	private: System::Windows::Forms::Button^ btn90m;
	private: System::Windows::Forms::GroupBox^ grpBookmarks;
	private: System::Windows::Forms::Button^ btnSaveBookmarks;


	private: System::Windows::Forms::DataGridView^ dGVFrequencies;




private: System::Windows::Forms::ToolTip^ toolTipFreqs;
private: System::Windows::Forms::Button^ btnScan;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker; /* Lo agregue yo */
private: System::ComponentModel::IContainer^ components;
private: System::Windows::Forms::ComboBox^ cmbCOMPorts;
private: System::Windows::Forms::ComboBox^ cmbBand;
private: System::Windows::Forms::ComboBox^ cmbChannel;




private: cat^ ft80 = gcnew cat(); /* Lo agregue yo */










	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(YaesuFT80C_CAT_main::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->grpDisplay = (gcnew System::Windows::Forms::GroupBox());
			this->lbl10M = (gcnew System::Windows::Forms::Label());
			this->lbl25 = (gcnew System::Windows::Forms::Label());
			this->lbl100 = (gcnew System::Windows::Forms::Label());
			this->lbl1k = (gcnew System::Windows::Forms::Label());
			this->lbl10k = (gcnew System::Windows::Forms::Label());
			this->lbl100k = (gcnew System::Windows::Forms::Label());
			this->lbl1M = (gcnew System::Windows::Forms::Label());
			this->lblHz = (gcnew System::Windows::Forms::Label());
			this->grpHAMBands = (gcnew System::Windows::Forms::GroupBox());
			this->btn11m_high = (gcnew System::Windows::Forms::Button());
			this->btn10m = (gcnew System::Windows::Forms::Button());
			this->btn11m_norm = (gcnew System::Windows::Forms::Button());
			this->btn12m = (gcnew System::Windows::Forms::Button());
			this->btn15m = (gcnew System::Windows::Forms::Button());
			this->btn17m = (gcnew System::Windows::Forms::Button());
			this->btn20m = (gcnew System::Windows::Forms::Button());
			this->btn30m = (gcnew System::Windows::Forms::Button());
			this->btn40m = (gcnew System::Windows::Forms::Button());
			this->btn80m = (gcnew System::Windows::Forms::Button());
			this->btn160m_high = (gcnew System::Windows::Forms::Button());
			this->bnt160m_low = (gcnew System::Windows::Forms::Button());
			this->grpVFOs = (gcnew System::Windows::Forms::GroupBox());
			this->btnVFOB = (gcnew System::Windows::Forms::Button());
			this->btnVFOA = (gcnew System::Windows::Forms::Button());
			this->grpModes = (gcnew System::Windows::Forms::GroupBox());
			this->btnFM = (gcnew System::Windows::Forms::Button());
			this->btnCW = (gcnew System::Windows::Forms::Button());
			this->btnAM = (gcnew System::Windows::Forms::Button());
			this->btnUSB = (gcnew System::Windows::Forms::Button());
			this->btnLSB = (gcnew System::Windows::Forms::Button());
			this->btnInitialize = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grpShortwaveBands = (gcnew System::Windows::Forms::GroupBox());
			this->btn16m = (gcnew System::Windows::Forms::Button());
			this->btn13m = (gcnew System::Windows::Forms::Button());
			this->btn19m = (gcnew System::Windows::Forms::Button());
			this->btn22m = (gcnew System::Windows::Forms::Button());
			this->btn25m = (gcnew System::Windows::Forms::Button());
			this->btn31m = (gcnew System::Windows::Forms::Button());
			this->btn35m = (gcnew System::Windows::Forms::Button());
			this->btn41m = (gcnew System::Windows::Forms::Button());
			this->btn49m = (gcnew System::Windows::Forms::Button());
			this->btn60m = (gcnew System::Windows::Forms::Button());
			this->btn75m = (gcnew System::Windows::Forms::Button());
			this->btn90m = (gcnew System::Windows::Forms::Button());
			this->grpBookmarks = (gcnew System::Windows::Forms::GroupBox());
			this->btnSaveBookmarks = (gcnew System::Windows::Forms::Button());
			this->dGVFrequencies = (gcnew System::Windows::Forms::DataGridView());
			this->toolTipFreqs = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnScan = (gcnew System::Windows::Forms::Button());
			this->cmbCOMPorts = (gcnew System::Windows::Forms::ComboBox());
			this->cmbBand = (gcnew System::Windows::Forms::ComboBox());
			this->cmbChannel = (gcnew System::Windows::Forms::ComboBox());
			this->grpDisplay->SuspendLayout();
			this->grpHAMBands->SuspendLayout();
			this->grpVFOs->SuspendLayout();
			this->grpModes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->grpShortwaveBands->SuspendLayout();
			this->grpBookmarks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVFrequencies))->BeginInit();
			this->SuspendLayout();
			// 
			// grpDisplay
			// 
			this->grpDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->grpDisplay->Controls->Add(this->lbl10M);
			this->grpDisplay->Controls->Add(this->lbl25);
			this->grpDisplay->Controls->Add(this->lbl100);
			this->grpDisplay->Controls->Add(this->lbl1k);
			this->grpDisplay->Controls->Add(this->lbl10k);
			this->grpDisplay->Controls->Add(this->lbl100k);
			this->grpDisplay->Controls->Add(this->lbl1M);
			this->grpDisplay->Controls->Add(this->lblHz);
			this->grpDisplay->Enabled = false;
			this->grpDisplay->Location = System::Drawing::Point(12, 12);
			this->grpDisplay->Name = L"grpDisplay";
			this->grpDisplay->Size = System::Drawing::Size(653, 144);
			this->grpDisplay->TabIndex = 0;
			this->grpDisplay->TabStop = false;
			// 
			// lbl10M
			// 
			this->lbl10M->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl10M->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl10M->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl10M->Location = System::Drawing::Point(17, 19);
			this->lbl10M->Name = L"lbl10M";
			this->lbl10M->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl10M->Size = System::Drawing::Size(65, 107);
			this->lbl10M->TabIndex = 7;
			this->lbl10M->Text = L"0";
			this->lbl10M->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl10M_Mouse_Wheel);
			// 
			// lbl25
			// 
			this->lbl25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl25->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl25->Location = System::Drawing::Point(465, 19);
			this->lbl25->Name = L"lbl25";
			this->lbl25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl25->Size = System::Drawing::Size(149, 107);
			this->lbl25->TabIndex = 6;
			this->lbl25->Text = L"00";
			this->lbl25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl25_Mouse_Wheel);
			// 
			// lbl100
			// 
			this->lbl100->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl100->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl100->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl100->Location = System::Drawing::Point(394, 19);
			this->lbl100->Name = L"lbl100";
			this->lbl100->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl100->Size = System::Drawing::Size(65, 107);
			this->lbl100->TabIndex = 5;
			this->lbl100->Text = L"0";
			this->lbl100->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl100_Mouse_Wheel);
			// 
			// lbl1k
			// 
			this->lbl1k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl1k->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl1k->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl1k->Location = System::Drawing::Point(312, 19);
			this->lbl1k->Name = L"lbl1k";
			this->lbl1k->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl1k->Size = System::Drawing::Size(65, 107);
			this->lbl1k->TabIndex = 4;
			this->lbl1k->Text = L"0";
			this->lbl1k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl1k_Mouse_Wheel);
			// 
			// lbl10k
			// 
			this->lbl10k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl10k->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl10k->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl10k->Location = System::Drawing::Point(241, 19);
			this->lbl10k->Name = L"lbl10k";
			this->lbl10k->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl10k->Size = System::Drawing::Size(65, 107);
			this->lbl10k->TabIndex = 3;
			this->lbl10k->Text = L"0";
			this->lbl10k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl10k_Mouse_Wheel);
			// 
			// lbl100k
			// 
			this->lbl100k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl100k->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl100k->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl100k->Location = System::Drawing::Point(170, 19);
			this->lbl100k->Name = L"lbl100k";
			this->lbl100k->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl100k->Size = System::Drawing::Size(65, 107);
			this->lbl100k->TabIndex = 2;
			this->lbl100k->Text = L"0";
			this->lbl100k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl100k_Mouse_Wheel);
			// 
			// lbl1M
			// 
			this->lbl1M->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl1M->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl1M->Font = (gcnew System::Drawing::Font(L"7-Segment", 72));
			this->lbl1M->Location = System::Drawing::Point(88, 19);
			this->lbl1M->Name = L"lbl1M";
			this->lbl1M->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbl1M->Size = System::Drawing::Size(65, 107);
			this->lbl1M->TabIndex = 1;
			this->lbl1M->Text = L"0";
			this->lbl1M->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl1M_Mouse_Wheel);
			// 
			// lblHz
			// 
			this->lblHz->AutoSize = true;
			this->lblHz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHz->Location = System::Drawing::Point(614, 102);
			this->lblHz->Name = L"lblHz";
			this->lblHz->Size = System::Drawing::Size(33, 24);
			this->lblHz->TabIndex = 0;
			this->lblHz->Text = L"Hz";
			// 
			// grpHAMBands
			// 
			this->grpHAMBands->Controls->Add(this->btn11m_high);
			this->grpHAMBands->Controls->Add(this->btn10m);
			this->grpHAMBands->Controls->Add(this->btn11m_norm);
			this->grpHAMBands->Controls->Add(this->btn12m);
			this->grpHAMBands->Controls->Add(this->btn15m);
			this->grpHAMBands->Controls->Add(this->btn17m);
			this->grpHAMBands->Controls->Add(this->btn20m);
			this->grpHAMBands->Controls->Add(this->btn30m);
			this->grpHAMBands->Controls->Add(this->btn40m);
			this->grpHAMBands->Controls->Add(this->btn80m);
			this->grpHAMBands->Controls->Add(this->btn160m_high);
			this->grpHAMBands->Controls->Add(this->bnt160m_low);
			this->grpHAMBands->Enabled = false;
			this->grpHAMBands->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->grpHAMBands->Location = System::Drawing::Point(12, 227);
			this->grpHAMBands->Name = L"grpHAMBands";
			this->grpHAMBands->Size = System::Drawing::Size(319, 144);
			this->grpHAMBands->TabIndex = 3;
			this->grpHAMBands->TabStop = false;
			this->grpHAMBands->Text = L"HAM Bands";
			// 
			// btn11m_high
			// 
			this->btn11m_high->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn11m_high->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn11m_high->Location = System::Drawing::Point(215, 77);
			this->btn11m_high->Name = L"btn11m_high";
			this->btn11m_high->Size = System::Drawing::Size(98, 23);
			this->btn11m_high->TabIndex = 10;
			this->btn11m_high->Text = L"11m (High)";
			this->toolTipFreqs->SetToolTip(this->btn11m_high, L"27.415-47.855MHz");
			this->btn11m_high->UseVisualStyleBackColor = true;
			this->btn11m_high->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn11m_high_Click);
			// 
			// btn10m
			// 
			this->btn10m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn10m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn10m->Location = System::Drawing::Point(215, 106);
			this->btn10m->Name = L"btn10m";
			this->btn10m->Size = System::Drawing::Size(98, 23);
			this->btn10m->TabIndex = 9;
			this->btn10m->Text = L"10m";
			this->toolTipFreqs->SetToolTip(this->btn10m, L"28-29.7MHz");
			this->btn10m->UseVisualStyleBackColor = true;
			this->btn10m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn10m_Click);
			// 
			// btn11m_norm
			// 
			this->btn11m_norm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn11m_norm->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn11m_norm->Location = System::Drawing::Point(215, 48);
			this->btn11m_norm->Name = L"btn11m_norm";
			this->btn11m_norm->Size = System::Drawing::Size(98, 23);
			this->btn11m_norm->TabIndex = 9;
			this->btn11m_norm->Text = L"11m (Norm)";
			this->toolTipFreqs->SetToolTip(this->btn11m_norm, L"26.965-27.405MHz");
			this->btn11m_norm->UseVisualStyleBackColor = true;
			this->btn11m_norm->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn11m_norm_Click);
			// 
			// btn12m
			// 
			this->btn12m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn12m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn12m->Location = System::Drawing::Point(215, 19);
			this->btn12m->Name = L"btn12m";
			this->btn12m->Size = System::Drawing::Size(98, 23);
			this->btn12m->TabIndex = 8;
			this->btn12m->Text = L"12m";
			this->toolTipFreqs->SetToolTip(this->btn12m, L"24.89-24.93MHz");
			this->btn12m->UseVisualStyleBackColor = true;
			this->btn12m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn12m_Click);
			// 
			// btn15m
			// 
			this->btn15m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn15m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn15m->Location = System::Drawing::Point(110, 106);
			this->btn15m->Name = L"btn15m";
			this->btn15m->Size = System::Drawing::Size(98, 23);
			this->btn15m->TabIndex = 7;
			this->btn15m->Text = L"15m";
			this->toolTipFreqs->SetToolTip(this->btn15m, L"21-21.45MHz");
			this->btn15m->UseVisualStyleBackColor = true;
			this->btn15m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn15m_Click);
			// 
			// btn17m
			// 
			this->btn17m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn17m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn17m->Location = System::Drawing::Point(110, 77);
			this->btn17m->Name = L"btn17m";
			this->btn17m->Size = System::Drawing::Size(99, 23);
			this->btn17m->TabIndex = 6;
			this->btn17m->Text = L"17m";
			this->toolTipFreqs->SetToolTip(this->btn17m, L"18.068-18.168MHz");
			this->btn17m->UseVisualStyleBackColor = true;
			this->btn17m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn17m_Click);
			// 
			// btn20m
			// 
			this->btn20m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn20m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn20m->Location = System::Drawing::Point(110, 48);
			this->btn20m->Name = L"btn20m";
			this->btn20m->Size = System::Drawing::Size(98, 23);
			this->btn20m->TabIndex = 5;
			this->btn20m->Text = L"20m";
			this->toolTipFreqs->SetToolTip(this->btn20m, L"14-14.35MHz");
			this->btn20m->UseVisualStyleBackColor = true;
			this->btn20m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn20m_Click);
			// 
			// btn30m
			// 
			this->btn30m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn30m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn30m->Location = System::Drawing::Point(110, 19);
			this->btn30m->Name = L"btn30m";
			this->btn30m->Size = System::Drawing::Size(98, 23);
			this->btn30m->TabIndex = 4;
			this->btn30m->Text = L"30m";
			this->toolTipFreqs->SetToolTip(this->btn30m, L"10.1-10.15MHz");
			this->btn30m->UseVisualStyleBackColor = true;
			this->btn30m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn30m_Click);
			// 
			// btn40m
			// 
			this->btn40m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn40m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn40m->Location = System::Drawing::Point(6, 106);
			this->btn40m->Name = L"btn40m";
			this->btn40m->Size = System::Drawing::Size(98, 23);
			this->btn40m->TabIndex = 3;
			this->btn40m->Text = L"40m";
			this->toolTipFreqs->SetToolTip(this->btn40m, L"7-7.3MHz");
			this->btn40m->UseVisualStyleBackColor = true;
			this->btn40m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn40m_Click);
			// 
			// btn80m
			// 
			this->btn80m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn80m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn80m->Location = System::Drawing::Point(6, 77);
			this->btn80m->Name = L"btn80m";
			this->btn80m->Size = System::Drawing::Size(98, 23);
			this->btn80m->TabIndex = 2;
			this->btn80m->Text = L"80m";
			this->toolTipFreqs->SetToolTip(this->btn80m, L"3.5-4MHz");
			this->btn80m->UseVisualStyleBackColor = true;
			this->btn80m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn80m_Click);
			// 
			// btn160m_high
			// 
			this->btn160m_high->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn160m_high->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn160m_high->Location = System::Drawing::Point(6, 48);
			this->btn160m_high->Name = L"btn160m_high";
			this->btn160m_high->Size = System::Drawing::Size(98, 23);
			this->btn160m_high->TabIndex = 1;
			this->btn160m_high->Text = L"160 m (High)";
			this->toolTipFreqs->SetToolTip(this->btn160m_high, L"1.9-2MHz");
			this->btn160m_high->UseVisualStyleBackColor = true;
			this->btn160m_high->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn160m_high_Click);
			// 
			// bnt160m_low
			// 
			this->bnt160m_low->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bnt160m_low->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bnt160m_low->Location = System::Drawing::Point(6, 19);
			this->bnt160m_low->Name = L"bnt160m_low";
			this->bnt160m_low->Size = System::Drawing::Size(98, 23);
			this->bnt160m_low->TabIndex = 0;
			this->bnt160m_low->Text = L"160 m (Low)";
			this->toolTipFreqs->SetToolTip(this->bnt160m_low, L"1.8-1.9MHz");
			this->bnt160m_low->UseVisualStyleBackColor = true;
			this->bnt160m_low->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::bnt160m_low_Click);
			// 
			// grpVFOs
			// 
			this->grpVFOs->Controls->Add(this->btnVFOB);
			this->grpVFOs->Controls->Add(this->btnVFOA);
			this->grpVFOs->Enabled = false;
			this->grpVFOs->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->grpVFOs->Location = System::Drawing::Point(12, 162);
			this->grpVFOs->Name = L"grpVFOs";
			this->grpVFOs->Size = System::Drawing::Size(174, 59);
			this->grpVFOs->TabIndex = 1;
			this->grpVFOs->TabStop = false;
			this->grpVFOs->Text = L"VFOs";
			// 
			// btnVFOB
			// 
			this->btnVFOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVFOB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnVFOB->Location = System::Drawing::Point(88, 19);
			this->btnVFOB->Name = L"btnVFOB";
			this->btnVFOB->Size = System::Drawing::Size(75, 23);
			this->btnVFOB->TabIndex = 2;
			this->btnVFOB->Text = L"VFO B";
			this->btnVFOB->UseVisualStyleBackColor = true;
			this->btnVFOB->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnVFOB_Click);
			// 
			// btnVFOA
			// 
			this->btnVFOA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVFOA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnVFOA->Location = System::Drawing::Point(7, 19);
			this->btnVFOA->Name = L"btnVFOA";
			this->btnVFOA->Size = System::Drawing::Size(75, 23);
			this->btnVFOA->TabIndex = 1;
			this->btnVFOA->Text = L"VFO A";
			this->btnVFOA->UseVisualStyleBackColor = true;
			this->btnVFOA->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnVFOA_Click);
			// 
			// grpModes
			// 
			this->grpModes->Controls->Add(this->btnFM);
			this->grpModes->Controls->Add(this->btnCW);
			this->grpModes->Controls->Add(this->btnAM);
			this->grpModes->Controls->Add(this->btnUSB);
			this->grpModes->Controls->Add(this->btnLSB);
			this->grpModes->Enabled = false;
			this->grpModes->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->grpModes->Location = System::Drawing::Point(199, 162);
			this->grpModes->Name = L"grpModes";
			this->grpModes->Size = System::Drawing::Size(466, 59);
			this->grpModes->TabIndex = 2;
			this->grpModes->TabStop = false;
			this->grpModes->Text = L"Modes";
			// 
			// btnFM
			// 
			this->btnFM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFM->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFM->Location = System::Drawing::Point(374, 19);
			this->btnFM->Name = L"btnFM";
			this->btnFM->Size = System::Drawing::Size(86, 23);
			this->btnFM->TabIndex = 5;
			this->btnFM->Text = L"FM";
			this->btnFM->UseVisualStyleBackColor = true;
			this->btnFM->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnFM_Click);
			// 
			// btnCW
			// 
			this->btnCW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCW->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCW->Location = System::Drawing::Point(282, 19);
			this->btnCW->Name = L"btnCW";
			this->btnCW->Size = System::Drawing::Size(86, 23);
			this->btnCW->TabIndex = 4;
			this->btnCW->Text = L"CW";
			this->btnCW->UseVisualStyleBackColor = true;
			this->btnCW->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnCW_Click);
			// 
			// btnAM
			// 
			this->btnAM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAM->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAM->Location = System::Drawing::Point(190, 19);
			this->btnAM->Name = L"btnAM";
			this->btnAM->Size = System::Drawing::Size(86, 23);
			this->btnAM->TabIndex = 3;
			this->btnAM->Text = L"AM";
			this->btnAM->UseVisualStyleBackColor = true;
			this->btnAM->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnAM_Click);
			// 
			// btnUSB
			// 
			this->btnUSB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUSB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnUSB->Location = System::Drawing::Point(98, 19);
			this->btnUSB->Name = L"btnUSB";
			this->btnUSB->Size = System::Drawing::Size(86, 23);
			this->btnUSB->TabIndex = 2;
			this->btnUSB->Text = L"USB";
			this->btnUSB->UseVisualStyleBackColor = true;
			this->btnUSB->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnUSB_Click);
			// 
			// btnLSB
			// 
			this->btnLSB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLSB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnLSB->Location = System::Drawing::Point(6, 19);
			this->btnLSB->Name = L"btnLSB";
			this->btnLSB->Size = System::Drawing::Size(86, 23);
			this->btnLSB->TabIndex = 1;
			this->btnLSB->Text = L"LSB";
			this->btnLSB->UseVisualStyleBackColor = true;
			this->btnLSB->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnLSB_Click);
			// 
			// btnInitialize
			// 
			this->btnInitialize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInitialize->Location = System::Drawing::Point(874, 377);
			this->btnInitialize->Name = L"btnInitialize";
			this->btnInitialize->Size = System::Drawing::Size(84, 23);
			this->btnInitialize->TabIndex = 1;
			this->btnInitialize->Text = L"Initialize";
			this->btnInitialize->UseVisualStyleBackColor = true;
			this->btnInitialize->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnInitialize_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 380);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(357, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// grpShortwaveBands
			// 
			this->grpShortwaveBands->Controls->Add(this->btn16m);
			this->grpShortwaveBands->Controls->Add(this->btn13m);
			this->grpShortwaveBands->Controls->Add(this->btn19m);
			this->grpShortwaveBands->Controls->Add(this->btn22m);
			this->grpShortwaveBands->Controls->Add(this->btn25m);
			this->grpShortwaveBands->Controls->Add(this->btn31m);
			this->grpShortwaveBands->Controls->Add(this->btn35m);
			this->grpShortwaveBands->Controls->Add(this->btn41m);
			this->grpShortwaveBands->Controls->Add(this->btn49m);
			this->grpShortwaveBands->Controls->Add(this->btn60m);
			this->grpShortwaveBands->Controls->Add(this->btn75m);
			this->grpShortwaveBands->Controls->Add(this->btn90m);
			this->grpShortwaveBands->Enabled = false;
			this->grpShortwaveBands->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->grpShortwaveBands->Location = System::Drawing::Point(346, 227);
			this->grpShortwaveBands->Name = L"grpShortwaveBands";
			this->grpShortwaveBands->Size = System::Drawing::Size(319, 144);
			this->grpShortwaveBands->TabIndex = 17;
			this->grpShortwaveBands->TabStop = false;
			this->grpShortwaveBands->Text = L"Shortwave Bands";
			// 
			// btn16m
			// 
			this->btn16m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn16m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn16m->Location = System::Drawing::Point(215, 77);
			this->btn16m->Name = L"btn16m";
			this->btn16m->Size = System::Drawing::Size(98, 23);
			this->btn16m->TabIndex = 10;
			this->btn16m->Text = L"16m";
			this->toolTipFreqs->SetToolTip(this->btn16m, L"17.48-17.9MHz");
			this->btn16m->UseVisualStyleBackColor = true;
			this->btn16m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn16m_Click);
			// 
			// btn13m
			// 
			this->btn13m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn13m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn13m->Location = System::Drawing::Point(215, 106);
			this->btn13m->Name = L"btn13m";
			this->btn13m->Size = System::Drawing::Size(98, 23);
			this->btn13m->TabIndex = 9;
			this->btn13m->Text = L"13m";
			this->toolTipFreqs->SetToolTip(this->btn13m, L"21.45-21.85MHz");
			this->btn13m->UseVisualStyleBackColor = true;
			this->btn13m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn13m_Click);
			// 
			// btn19m
			// 
			this->btn19m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn19m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn19m->Location = System::Drawing::Point(215, 48);
			this->btn19m->Name = L"btn19m";
			this->btn19m->Size = System::Drawing::Size(98, 23);
			this->btn19m->TabIndex = 9;
			this->btn19m->Text = L"19m";
			this->toolTipFreqs->SetToolTip(this->btn19m, L"15.1-15.8MHz");
			this->btn19m->UseVisualStyleBackColor = true;
			this->btn19m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn19m_Click);
			// 
			// btn22m
			// 
			this->btn22m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn22m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn22m->Location = System::Drawing::Point(215, 19);
			this->btn22m->Name = L"btn22m";
			this->btn22m->Size = System::Drawing::Size(98, 23);
			this->btn22m->TabIndex = 8;
			this->btn22m->Text = L"22m";
			this->toolTipFreqs->SetToolTip(this->btn22m, L"13.57-13.87MHz");
			this->btn22m->UseVisualStyleBackColor = true;
			this->btn22m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn22m_Click);
			// 
			// btn25m
			// 
			this->btn25m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn25m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn25m->Location = System::Drawing::Point(110, 106);
			this->btn25m->Name = L"btn25m";
			this->btn25m->Size = System::Drawing::Size(98, 23);
			this->btn25m->TabIndex = 7;
			this->btn25m->Text = L"25m";
			this->toolTipFreqs->SetToolTip(this->btn25m, L"11.6-12.2MHz");
			this->btn25m->UseVisualStyleBackColor = true;
			this->btn25m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn25m_Click);
			// 
			// btn31m
			// 
			this->btn31m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn31m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn31m->Location = System::Drawing::Point(110, 77);
			this->btn31m->Name = L"btn31m";
			this->btn31m->Size = System::Drawing::Size(99, 23);
			this->btn31m->TabIndex = 6;
			this->btn31m->Text = L"31m";
			this->toolTipFreqs->SetToolTip(this->btn31m, L"9.2-9.9MHz");
			this->btn31m->UseVisualStyleBackColor = true;
			this->btn31m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn31m_Click);
			// 
			// btn35m
			// 
			this->btn35m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn35m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn35m->Location = System::Drawing::Point(110, 48);
			this->btn35m->Name = L"btn35m";
			this->btn35m->Size = System::Drawing::Size(98, 23);
			this->btn35m->TabIndex = 5;
			this->btn35m->Text = L"35m";
			this->toolTipFreqs->SetToolTip(this->btn35m, L"8-8.5MHz");
			this->btn35m->UseVisualStyleBackColor = true;
			this->btn35m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn35m_Click);
			// 
			// btn41m
			// 
			this->btn41m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn41m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn41m->Location = System::Drawing::Point(110, 19);
			this->btn41m->Name = L"btn41m";
			this->btn41m->Size = System::Drawing::Size(98, 23);
			this->btn41m->TabIndex = 4;
			this->btn41m->Text = L"41m";
			this->toolTipFreqs->SetToolTip(this->btn41m, L"7.1-7.6MHz");
			this->btn41m->UseVisualStyleBackColor = true;
			this->btn41m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn41m_Click);
			// 
			// btn49m
			// 
			this->btn49m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn49m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn49m->Location = System::Drawing::Point(6, 106);
			this->btn49m->Name = L"btn49m";
			this->btn49m->Size = System::Drawing::Size(98, 23);
			this->btn49m->TabIndex = 3;
			this->btn49m->Text = L"49m";
			this->toolTipFreqs->SetToolTip(this->btn49m, L"5.95-6.2MHz");
			this->btn49m->UseVisualStyleBackColor = true;
			this->btn49m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn49m_Click);
			// 
			// btn60m
			// 
			this->btn60m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn60m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn60m->Location = System::Drawing::Point(6, 77);
			this->btn60m->Name = L"btn60m";
			this->btn60m->Size = System::Drawing::Size(98, 23);
			this->btn60m->TabIndex = 2;
			this->btn60m->Text = L"60m";
			this->toolTipFreqs->SetToolTip(this->btn60m, L"4.75-5.06MHz");
			this->btn60m->UseVisualStyleBackColor = true;
			this->btn60m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn60m_Click);
			// 
			// btn75m
			// 
			this->btn75m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn75m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn75m->Location = System::Drawing::Point(6, 48);
			this->btn75m->Name = L"btn75m";
			this->btn75m->Size = System::Drawing::Size(98, 23);
			this->btn75m->TabIndex = 1;
			this->btn75m->Text = L"75m";
			this->toolTipFreqs->SetToolTip(this->btn75m, L"3.9-4MHz");
			this->btn75m->UseVisualStyleBackColor = true;
			this->btn75m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn75m_Click);
			// 
			// btn90m
			// 
			this->btn90m->AccessibleName = L"";
			this->btn90m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn90m->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn90m->Location = System::Drawing::Point(6, 19);
			this->btn90m->Name = L"btn90m";
			this->btn90m->Size = System::Drawing::Size(98, 23);
			this->btn90m->TabIndex = 0;
			this->btn90m->Text = L"90m";
			this->toolTipFreqs->SetToolTip(this->btn90m, L"3.2-3.4MHz");
			this->btn90m->UseVisualStyleBackColor = true;
			this->btn90m->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btn90m_Click);
			// 
			// grpBookmarks
			// 
			this->grpBookmarks->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->grpBookmarks->Controls->Add(this->btnSaveBookmarks);
			this->grpBookmarks->Controls->Add(this->dGVFrequencies);
			this->grpBookmarks->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->grpBookmarks->Location = System::Drawing::Point(671, 12);
			this->grpBookmarks->Name = L"grpBookmarks";
			this->grpBookmarks->Size = System::Drawing::Size(361, 359);
			this->grpBookmarks->TabIndex = 11;
			this->grpBookmarks->TabStop = false;
			this->grpBookmarks->Text = L"Bookmarks";
			// 
			// btnSaveBookmarks
			// 
			this->btnSaveBookmarks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveBookmarks->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSaveBookmarks->Location = System::Drawing::Point(6, 321);
			this->btnSaveBookmarks->Name = L"btnSaveBookmarks";
			this->btnSaveBookmarks->Size = System::Drawing::Size(84, 23);
			this->btnSaveBookmarks->TabIndex = 13;
			this->btnSaveBookmarks->Text = L"Save";
			this->btnSaveBookmarks->UseVisualStyleBackColor = true;
			this->btnSaveBookmarks->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnSaveBookmarks_Click);
			// 
			// dGVFrequencies
			// 
			this->dGVFrequencies->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dGVFrequencies->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dGVFrequencies->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVFrequencies->GridColor = System::Drawing::SystemColors::ControlText;
			this->dGVFrequencies->Location = System::Drawing::Point(6, 19);
			this->dGVFrequencies->Name = L"dGVFrequencies";
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->dGVFrequencies->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dGVFrequencies->Size = System::Drawing::Size(349, 296);
			this->dGVFrequencies->TabIndex = 12;
			this->dGVFrequencies->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &YaesuFT80C_CAT_main::dGVFrequencies_CellDoubleClick);
			// 
			// btnScan
			// 
			this->btnScan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnScan->Location = System::Drawing::Point(784, 377);
			this->btnScan->Name = L"btnScan";
			this->btnScan->Size = System::Drawing::Size(84, 23);
			this->btnScan->TabIndex = 18;
			this->btnScan->Text = L"Scan";
			this->btnScan->UseVisualStyleBackColor = true;
			this->btnScan->Click += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::btnScan_Click);
			// 
			// cmbCOMPorts
			// 
			this->cmbCOMPorts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCOMPorts->FormattingEnabled = true;
			this->cmbCOMPorts->Location = System::Drawing::Point(964, 377);
			this->cmbCOMPorts->Name = L"cmbCOMPorts";
			this->cmbCOMPorts->Size = System::Drawing::Size(62, 21);
			this->cmbCOMPorts->TabIndex = 19;
			// 
			// cmbBand
			// 
			this->cmbBand->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbBand->FormattingEnabled = true;
			this->cmbBand->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"SUBMARINOS", L"SUPERBAJOS", L"BAJOS", L"NORMALES",
					L"ALTOS", L"SUPERALTOS"
			});
			this->cmbBand->Location = System::Drawing::Point(592, 377);
			this->cmbBand->Name = L"cmbBand";
			this->cmbBand->Size = System::Drawing::Size(99, 21);
			this->cmbBand->TabIndex = 20;
			this->cmbBand->SelectedIndexChanged += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::cmbBand_SelectedIndexChanged);
			// 
			// cmbChannel
			// 
			this->cmbChannel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbChannel->FormattingEnabled = true;
			this->cmbChannel->Location = System::Drawing::Point(697, 377);
			this->cmbChannel->Name = L"cmbChannel";
			this->cmbChannel->Size = System::Drawing::Size(81, 21);
			this->cmbChannel->TabIndex = 21;
			this->cmbChannel->SelectedIndexChanged += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::cmbChannel_SelectedIndexChanged);
			// 
			// YaesuFT80C_CAT_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1043, 408);
			this->Controls->Add(this->cmbChannel);
			this->Controls->Add(this->cmbBand);
			this->Controls->Add(this->cmbCOMPorts);
			this->Controls->Add(this->btnScan);
			this->Controls->Add(this->grpBookmarks);
			this->Controls->Add(this->grpShortwaveBands);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnInitialize);
			this->Controls->Add(this->grpModes);
			this->Controls->Add(this->grpVFOs);
			this->Controls->Add(this->grpHAMBands);
			this->Controls->Add(this->grpDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"YaesuFT80C_CAT_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Yaesu FT-80C CAT Control";
			this->Load += gcnew System::EventHandler(this, &YaesuFT80C_CAT_main::YaesuFT80C_CAT_main_Load);
			this->grpDisplay->ResumeLayout(false);
			this->grpDisplay->PerformLayout();
			this->grpHAMBands->ResumeLayout(false);
			this->grpVFOs->ResumeLayout(false);
			this->grpModes->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->grpShortwaveBands->ResumeLayout(false);
			this->grpBookmarks->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVFrequencies))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

/* Esto se pone para activar el evento MouseEventHandler */
/* this->MouseWheel += gcnew MouseEventHandler(this, &YaesuFT80C_CAT_main::lbl1M_Mouse_Wheel); */

private: String^ filePath = "frequencies.csv";

private: Void enable_disable(Byte state)
{
	grpHAMBands->Enabled = state;
	grpShortwaveBands->Enabled = state;
	grpModes->Enabled = state;
	grpVFOs->Enabled = state;
	grpDisplay->Enabled = state;
	grpBookmarks->Enabled = state;
	btnInitialize->Enabled = state;
	cmbBand->Enabled = state;
	cmbChannel->Enabled = state;
}

private: System::Void init(void) {
	int rc;
	
	cmbBand->SelectedIndex = 0;

	/* Cargo el combobox con todos los puertos COM */
	cmbCOMPorts->Items->Clear();
	array<String^>^ comPorts = SerialPort::GetPortNames();

	// Agregar cada puerto COM al ComboBox
	for (int i = 0; i < comPorts->Length; i++)
	{
		cmbCOMPorts->Items->Add(comPorts[i]);
	}

	// Si no se encuentran puertos, agregar un mensaje indicando que no se encontraron puertos
	if (cmbCOMPorts->Items->Count == 0)
	{
		cmbCOMPorts->Items->Add("ERROR");
	}

	// Seleccionar el primer puerto automáticamente si existe
	if (cmbCOMPorts->Items->Count > 0)
	{
		cmbCOMPorts->SelectedIndex = 0;
		ft80->set_COMPort(cmbCOMPorts->Text);
	}

	rc = ft80->cat_init();

	if (rc == 1)
	{
		enable_disable(1);
		btnScan->Enabled = 1;
		display_freq(ft80->get_freq());
	}
	else
	{
		enable_disable(0);
		btnInitialize->Enabled = 1;
		btnScan->Enabled = 0;
	}
}

private: System::Void btnInitialize_Click(System::Object^ sender, System::EventArgs^ e) {
	init();
}

private: System::Void YaesuFT80C_CAT_main_Load(System::Object^ sender, System::EventArgs^ e) {
	init();
	LoadDataGrid(dGVFrequencies, filePath);
}

private: System::Void display_freq(double freq) {
	String^ freq_string = String::Format("{0:0.00}", freq);
	freq_string = freq_string->PadLeft(9, '0');

	lbl10M->Text = freq_string[0].ToString();
	lbl1M->Text = freq_string[1].ToString();
	lbl100k->Text = freq_string[2].ToString();
	lbl10k->Text = freq_string[3].ToString();
	lbl1k->Text = freq_string[4].ToString();
	lbl100->Text = freq_string[5].ToString();
	array<String^>^ parts = freq_string->Split('.');
	lbl25->Text = parts[1];
}

private: System::Void change_freq(double freq)
{
	int rc = ft80->set_freq(freq);
	if (rc)
		display_freq(ft80->get_freq());
}

private: System::Void change_lbl(System::Windows::Forms::MouseEventArgs^ e, Label^ lbl, double step) {
	// Verificar si el puntero está sobre el label
	if (lbl->Bounds.Contains(PointToClient(Cursor->Position))) {
		if (e->Delta > 0) {
			// Scroll hacia arriba
			change_freq(ft80->get_freq() + step);
		}
		else {
			// Scroll hacia abajo
			change_freq(ft80->get_freq() - step);
		}
	}
}

private: System::Void lbl10M_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl10M, 100000);
}

private: System::Void lbl1M_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl1M, 10000);
}

private: System::Void lbl100k_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl100k, 1000);
}

private: System::Void lbl10k_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl10k, 100);
}

private: System::Void lbl1k_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl1k, 10);
}

private: System::Void lbl100_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl100, 1);
}

private: System::Void lbl25_Mouse_Wheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	change_lbl(e, lbl25, 0.25);
}

private: System::Void btnVFOA_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_vfo(VFOA);
	display_freq(ft80->get_freq());
}

private: System::Void btnVFOB_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_vfo(VFOB);
	display_freq(ft80->get_freq());
}

private: System::Void btnLSB_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_mode(LSB);
}

private: System::Void btnUSB_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_mode(USB);
}

private: System::Void btnCW_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_mode(CW);
}

private: System::Void btnAM_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_mode(AM);
}

private: System::Void btnFM_Click(System::Object^ sender, System::EventArgs^ e) {
	ft80->set_mode(FM);
}

private: System::Void btn40m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(70000.00);
}

private: System::Void btn80m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(35000.00);
}

private: System::Void btn30m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(101000.00);
}

private: System::Void btn20m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(140000.00);
}

private: System::Void btn17m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(180680.00);
}

private: System::Void btn12m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(248900.00);
}

private: System::Void btn11m_norm_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(269650.00);
}

private: System::Void btn11m_high_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(274150.00);
}

private: System::Void btn10m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(280000.00);
}

private: System::Void bnt160m_low_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(18000.00);
}

private: System::Void btn160m_high_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(19000.00);
}

private: System::Void btn90m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(32000.00);
}

private: System::Void btn75m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(39000.00);
}

private: System::Void btn60m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(47500.00);
}

private: System::Void btn49m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(59500.00);
}

private: System::Void btn41m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(71000.00);
}

private: System::Void btn35m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(80000.00);
}

private: System::Void btn31m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(92000.00);
}

private: System::Void btn25m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(116000.00);
}

private: System::Void btn22m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(135700.00);
}

private: System::Void btn19m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(151000.00);
}

private: System::Void btn16m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(174800.00);
}

private: System::Void btn13m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(214500.00);
}

private: System::Void btn15m_Click(System::Object^ sender, System::EventArgs^ e) {
	change_freq(210000.00);
}

private: DataTable^ LoadDataFromFile(String^ filePath) {
	DataTable^ dataTable = gcnew DataTable();

	// Abre el archivo para lectura
	StreamReader^ reader = gcnew StreamReader(filePath);
	String^ headerLine = reader->ReadLine();

	// Crea las columnas del DataTable
	array<String^>^ headers = headerLine->Split(',');
	for each (String ^ header in headers) {
		dataTable->Columns->Add(header);
	}

	// Lee cada línea del archivo
	String^ line;
	while ((line = reader->ReadLine()) != nullptr) {
		array<String^>^ values = line->Split(',');
		dataTable->Rows->Add(values);
	}

	reader->Close();
	return dataTable;
}

private: void LoadDataGrid(DataGridView^ dataGrid, String^ filePath) {
	DataTable^ dataTable = LoadDataFromFile(filePath);
	dataGrid->DataSource = dataTable;
	dataGrid->Sort(dataGrid->Columns["Frecuencias [Hz]"], ListSortDirection::Ascending);
	dataGrid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
}

private: System::Void dGVFrequencies_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Verifica que el índice de la fila sea válido
	if (e->RowIndex >= 0) {
		// Obtiene el valor de la columna deseada
		String^ freq_string = dGVFrequencies->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		String^ modo = dGVFrequencies->Rows[e->RowIndex]->Cells[1]->Value->ToString();

		double freq = Convert::ToSingle(freq_string);

		change_freq(freq);

		if (modo == "LSB")
			ft80->set_mode(LSB);
		else if (modo == "USB")
			ft80->set_mode(USB);
		else if (modo == "CW")
			ft80->set_mode(CW);
		else if (modo == "AM")
			ft80->set_mode(AM);
		else if (modo == "FM")
			ft80->set_mode(FM);
	}
}

private: System::Void btnSaveBookmarks_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ writer = gcnew StreamWriter(filePath);

	// Escribir encabezados
	for (int i = 0; i < dGVFrequencies->Columns->Count; i++) {
		if (i > 0) {
			writer->Write(",");
		}
		writer->Write(dGVFrequencies->Columns[i]->HeaderText);
	}

	writer->WriteLine();

	// Escribir filas
	for (int i = 0; i < dGVFrequencies->Rows->Count; i++) {
		if (!dGVFrequencies->Rows[i]->IsNewRow) { // Ignorar la fila nueva
			for (int j = 0; j < dGVFrequencies->Columns->Count; j++) {
				if (j > 0) {
					writer->Write(",");
				}
				writer->Write(dGVFrequencies->Rows[i]->Cells[j]->Value != nullptr ? dGVFrequencies->Rows[i]->Cells[j]->Value->ToString() : "");
			}
			writer->WriteLine();
		}
	}

	writer->Close();
	MessageBox::Show("Datos guardados correctamente en: " + filePath, "Save Bookmarks", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void btnScan_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!isWorking) {
		// Si no está trabajando, inicia el BackgroundWorker
		isWorking = true;
		this->backgroundWorker->RunWorkerAsync();
		this->btnScan->Text = "Scanning"; // Cambia el texto del botón
		enable_disable(0);
	}
	else {
		// Si está trabajando, cancela el BackgroundWorker
		isWorking = false;
		this->backgroundWorker->CancelAsync(); // Cancela la operación
		this->btnScan->Text = "Scan"; // Cambia el texto del botón
		enable_disable(1);
	}
}

private: void backgroundWorker_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	while (!this->backgroundWorker->CancellationPending) {
		int newFreq = ft80->get_freq() + 10;
		this->Invoke(gcnew Action<double>(this, &YaesuFT80C_CAT_main::change_freq), newFreq);
		System::Threading::Thread::Sleep(200);
	}
}

private: System::Void cmbBand_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cmbBand->SelectedItem->ToString() == "SUBMARINOS")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 25.615");
		cmbChannel->Items->Add(" 2 - 25.625");
		cmbChannel->Items->Add(" 3 - 25.635");
		cmbChannel->Items->Add(" 4 - 25.655");
		cmbChannel->Items->Add(" 5 - 25.665");
		cmbChannel->Items->Add(" 6 - 25.675");
		cmbChannel->Items->Add(" 7 - 25.685");
		cmbChannel->Items->Add(" 8 - 25.705");
		cmbChannel->Items->Add(" 9 - 25.715");
		cmbChannel->Items->Add("10 - 25.725");
		cmbChannel->Items->Add("11 - 25.735");
		cmbChannel->Items->Add("12 - 25.755");
		cmbChannel->Items->Add("13 - 25.765");
		cmbChannel->Items->Add("14 - 25.775");
		cmbChannel->Items->Add("15 - 25.785");
		cmbChannel->Items->Add("16 - 25.805");
		cmbChannel->Items->Add("17 - 25.815");
		cmbChannel->Items->Add("18 - 25.825");
		cmbChannel->Items->Add("19 - 25.835");
		cmbChannel->Items->Add("20 - 25.855");
		cmbChannel->Items->Add("21 - 25.865");
		cmbChannel->Items->Add("22 - 25.875");
		cmbChannel->Items->Add("23 - 25.905");
		cmbChannel->Items->Add("24 - 25.885");
		cmbChannel->Items->Add("25 - 25.895");
		cmbChannel->Items->Add("26 - 25.915");
		cmbChannel->Items->Add("27 - 25.925");
		cmbChannel->Items->Add("28 - 25.935");
		cmbChannel->Items->Add("29 - 25.945");
		cmbChannel->Items->Add("30 - 25.955");
		cmbChannel->Items->Add("31 - 25.965");
		cmbChannel->Items->Add("32 - 25.975");
		cmbChannel->Items->Add("33 - 25.985");
		cmbChannel->Items->Add("34 - 25.995");
		cmbChannel->Items->Add("35 - 26.005");
		cmbChannel->Items->Add("36 - 26.015");
		cmbChannel->Items->Add("37 - 26.025");
		cmbChannel->Items->Add("38 - 26.035");
		cmbChannel->Items->Add("39 - 26.045");
		cmbChannel->Items->Add("40 - 26.055");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
	else if (cmbBand->SelectedItem->ToString() == "SUPERBAJOS")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 26.065");
		cmbChannel->Items->Add(" 2 - 26.075");
		cmbChannel->Items->Add(" 3 - 26.085");
		cmbChannel->Items->Add(" 4 - 26.095");
		cmbChannel->Items->Add(" 5 - 26.115");
		cmbChannel->Items->Add(" 6 - 26.125");
		cmbChannel->Items->Add(" 7 - 26.135");
		cmbChannel->Items->Add(" 8 - 26.155");
		cmbChannel->Items->Add(" 9 - 26.165");
		cmbChannel->Items->Add("10 - 26.175");
		cmbChannel->Items->Add("11 - 26.185");
		cmbChannel->Items->Add("12 - 26.205");
		cmbChannel->Items->Add("13 - 26.215");
		cmbChannel->Items->Add("14 - 26.225");
		cmbChannel->Items->Add("15 - 26.235");
		cmbChannel->Items->Add("16 - 26.255");
		cmbChannel->Items->Add("17 - 26.265");
		cmbChannel->Items->Add("18 - 26.275");
		cmbChannel->Items->Add("19 - 26.285");
		cmbChannel->Items->Add("20 - 26.305");
		cmbChannel->Items->Add("21 - 26.315");
		cmbChannel->Items->Add("22 - 26.325");
		cmbChannel->Items->Add("23 - 26.355");
		cmbChannel->Items->Add("24 - 26.335");
		cmbChannel->Items->Add("25 - 26.345");
		cmbChannel->Items->Add("26 - 26.365");
		cmbChannel->Items->Add("27 - 26.375");
		cmbChannel->Items->Add("28 - 26.385");
		cmbChannel->Items->Add("29 - 26.395");
		cmbChannel->Items->Add("30 - 26.405");
		cmbChannel->Items->Add("31 - 26.415");
		cmbChannel->Items->Add("32 - 26.425");
		cmbChannel->Items->Add("33 - 26.435");
		cmbChannel->Items->Add("34 - 26.445");
		cmbChannel->Items->Add("35 - 26.455");
		cmbChannel->Items->Add("36 - 26.465");
		cmbChannel->Items->Add("37 - 26.475");
		cmbChannel->Items->Add("38 - 26.485");
		cmbChannel->Items->Add("39 - 26.495");
		cmbChannel->Items->Add("40 - 26.505");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
	else if (cmbBand->SelectedItem->ToString() == "BAJOS")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 26.515");
		cmbChannel->Items->Add(" 2 - 26.525");
		cmbChannel->Items->Add(" 3 - 26.535");
		cmbChannel->Items->Add(" 4 - 26.555");
		cmbChannel->Items->Add(" 5 - 26.565");
		cmbChannel->Items->Add(" 6 - 26.575");
		cmbChannel->Items->Add(" 7 - 26.585");
		cmbChannel->Items->Add(" 8 - 26.605");
		cmbChannel->Items->Add(" 9 - 26.615");
		cmbChannel->Items->Add("10 - 26.625");
		cmbChannel->Items->Add("11 - 26.635");
		cmbChannel->Items->Add("12 - 26.655");
		cmbChannel->Items->Add("13 - 26.665");
		cmbChannel->Items->Add("14 - 26.675");
		cmbChannel->Items->Add("15 - 26.685");
		cmbChannel->Items->Add("16 - 26.705");
		cmbChannel->Items->Add("17 - 26.715");
		cmbChannel->Items->Add("18 - 26.725");
		cmbChannel->Items->Add("19 - 26.735");
		cmbChannel->Items->Add("20 - 26.755");
		cmbChannel->Items->Add("21 - 26.765");
		cmbChannel->Items->Add("22 - 26.775");
		cmbChannel->Items->Add("23 - 26.805");
		cmbChannel->Items->Add("24 - 26.785");
		cmbChannel->Items->Add("25 - 26.795");
		cmbChannel->Items->Add("26 - 26.815");
		cmbChannel->Items->Add("27 - 26.825");
		cmbChannel->Items->Add("28 - 26.835");
		cmbChannel->Items->Add("29 - 26.845");
		cmbChannel->Items->Add("30 - 26.855");
		cmbChannel->Items->Add("31 - 26.865");
		cmbChannel->Items->Add("32 - 26.875");
		cmbChannel->Items->Add("33 - 26.885");
		cmbChannel->Items->Add("34 - 26.895");
		cmbChannel->Items->Add("35 - 26.905");
		cmbChannel->Items->Add("36 - 26.915");
		cmbChannel->Items->Add("37 - 26.925");
		cmbChannel->Items->Add("38 - 26.935");
		cmbChannel->Items->Add("39 - 26.945");
		cmbChannel->Items->Add("40 - 26.955");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
	else if (cmbBand->SelectedItem->ToString() == "NORMALES")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 26.965");
		cmbChannel->Items->Add(" 2 - 26.975");
		cmbChannel->Items->Add(" 3 - 26.985");
		cmbChannel->Items->Add(" 4 - 27.005");
		cmbChannel->Items->Add(" 5 - 27.015");
		cmbChannel->Items->Add(" 6 - 27.025");
		cmbChannel->Items->Add(" 7 - 27.035");
		cmbChannel->Items->Add(" 8 - 27.055");
		cmbChannel->Items->Add(" 9 - 27.065");
		cmbChannel->Items->Add("10 - 27.075");
		cmbChannel->Items->Add("11 - 27.085");
		cmbChannel->Items->Add("12 - 27.105");
		cmbChannel->Items->Add("13 - 27.115");
		cmbChannel->Items->Add("14 - 27.125");
		cmbChannel->Items->Add("15 - 27.135");
		cmbChannel->Items->Add("16 - 27.155");
		cmbChannel->Items->Add("17 - 27.165");
		cmbChannel->Items->Add("18 - 27.175");
		cmbChannel->Items->Add("19 - 27.185");
		cmbChannel->Items->Add("20 - 27.205");
		cmbChannel->Items->Add("21 - 27.215");
		cmbChannel->Items->Add("22 - 27.225");
		cmbChannel->Items->Add("23 - 27.255");
		cmbChannel->Items->Add("24 - 27.235");
		cmbChannel->Items->Add("25 - 27.245");
		cmbChannel->Items->Add("26 - 27.265");
		cmbChannel->Items->Add("27 - 27.275");
		cmbChannel->Items->Add("28 - 27.285");
		cmbChannel->Items->Add("29 - 27.275");
		cmbChannel->Items->Add("30 - 27.305");
		cmbChannel->Items->Add("31 - 27.315");
		cmbChannel->Items->Add("32 - 27.325");
		cmbChannel->Items->Add("33 - 27.335");
		cmbChannel->Items->Add("34 - 27.345");
		cmbChannel->Items->Add("35 - 27.355");
		cmbChannel->Items->Add("36 - 27.365");
		cmbChannel->Items->Add("37 - 27.375");
		cmbChannel->Items->Add("38 - 27.385");
		cmbChannel->Items->Add("39 - 27.395");
		cmbChannel->Items->Add("40 - 27.405");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
	else if (cmbBand->SelectedItem->ToString() == "ALTOS")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 27.415");
		cmbChannel->Items->Add(" 2 - 27.425");
		cmbChannel->Items->Add(" 3 - 27.435");
		cmbChannel->Items->Add(" 4 - 27.455");
		cmbChannel->Items->Add(" 5 - 27.465");
		cmbChannel->Items->Add(" 6 - 27.475");
		cmbChannel->Items->Add(" 7 - 27.485");
		cmbChannel->Items->Add(" 8 - 27.505");
		cmbChannel->Items->Add(" 9 - 27.515");
		cmbChannel->Items->Add("10 - 27.525");
		cmbChannel->Items->Add("11 - 27.535");
		cmbChannel->Items->Add("12 - 27.555");
		cmbChannel->Items->Add("13 - 27.565");
		cmbChannel->Items->Add("14 - 27.575");
		cmbChannel->Items->Add("15 - 27.585");
		cmbChannel->Items->Add("16 - 27.605");
		cmbChannel->Items->Add("17 - 27.615");
		cmbChannel->Items->Add("18 - 27.625");
		cmbChannel->Items->Add("19 - 27.635");
		cmbChannel->Items->Add("20 - 27.655");
		cmbChannel->Items->Add("21 - 27.665");
		cmbChannel->Items->Add("22 - 27.675");
		cmbChannel->Items->Add("23 - 27.705");
		cmbChannel->Items->Add("24 - 27.685");
		cmbChannel->Items->Add("25 - 27.695");
		cmbChannel->Items->Add("26 - 27.715");
		cmbChannel->Items->Add("27 - 27.725");
		cmbChannel->Items->Add("28 - 27.735");
		cmbChannel->Items->Add("29 - 27.745");
		cmbChannel->Items->Add("30 - 27.755");
		cmbChannel->Items->Add("31 - 27.765");
		cmbChannel->Items->Add("32 - 27.775");
		cmbChannel->Items->Add("33 - 27.785");
		cmbChannel->Items->Add("34 - 27.795");
		cmbChannel->Items->Add("35 - 27.805");
		cmbChannel->Items->Add("36 - 27.815");
		cmbChannel->Items->Add("37 - 27.825");
		cmbChannel->Items->Add("38 - 27.835");
		cmbChannel->Items->Add("39 - 27.845");
		cmbChannel->Items->Add("40 - 27.855");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
	else if (cmbBand->SelectedItem->ToString() == "SUPERALTOS")
	{
		cmbChannel->Items->Clear();
		cmbChannel->Items->Add(" 1 - 27.865");
		cmbChannel->Items->Add(" 2 - 27.875");
		cmbChannel->Items->Add(" 3 - 27.885");
		cmbChannel->Items->Add(" 4 - 27.905");
		cmbChannel->Items->Add(" 5 - 27.915");
		cmbChannel->Items->Add(" 6 - 27.925");
		cmbChannel->Items->Add(" 7 - 27.935");
		cmbChannel->Items->Add(" 8 - 27.955");
		cmbChannel->Items->Add(" 9 - 27.965");
		cmbChannel->Items->Add("10 - 27.975");
		cmbChannel->Items->Add("11 - 27.985");
		cmbChannel->Items->Add("12 - 28.005");
		cmbChannel->Items->Add("13 - 28.015");
		cmbChannel->Items->Add("14 - 28.025");
		cmbChannel->Items->Add("15 - 28.035");
		cmbChannel->Items->Add("16 - 28.055");
		cmbChannel->Items->Add("17 - 28.065");
		cmbChannel->Items->Add("18 - 28.075");
		cmbChannel->Items->Add("19 - 28.085");
		cmbChannel->Items->Add("20 - 28.105");
		cmbChannel->Items->Add("21 - 28.115");
		cmbChannel->Items->Add("22 - 28.125");
		cmbChannel->Items->Add("23 - 28.155");
		cmbChannel->Items->Add("24 - 28.135");
		cmbChannel->Items->Add("25 - 28.145");
		cmbChannel->Items->Add("26 - 28.165");
		cmbChannel->Items->Add("27 - 28.175");
		cmbChannel->Items->Add("28 - 28.185");
		cmbChannel->Items->Add("29 - 28.195");
		cmbChannel->Items->Add("30 - 28.205");
		cmbChannel->Items->Add("31 - 28.215");
		cmbChannel->Items->Add("32 - 28.225");
		cmbChannel->Items->Add("33 - 28.235");
		cmbChannel->Items->Add("34 - 28.245");
		cmbChannel->Items->Add("35 - 28.255");
		cmbChannel->Items->Add("36 - 28.265");
		cmbChannel->Items->Add("37 - 28.275");
		cmbChannel->Items->Add("38 - 28.285");
		cmbChannel->Items->Add("39 - 28.295");
		cmbChannel->Items->Add("40 - 28.305");
		cmbChannel->SelectedIndex = 0;
		cmbChannel->Focus();
	}
}
private: System::Void cmbChannel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ freq = cmbChannel->SelectedItem->ToString();

	freq = freq->Trim();
	int pos = freq->IndexOf("-") + 2;
	freq = freq->Substring(pos);
	freq = freq->Replace(".", "");
	freq = freq + "0.00";

	change_freq(Convert::ToDouble(freq));
}
};
}