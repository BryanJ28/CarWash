#pragma once

namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOCarwashController;
	using namespace LPOOCarwashModel;

	/// <summary>
	/// Resumen de frmServiciosRegistrados
	/// </summary>
	public ref class frmServiciosRegistrados : public System::Windows::Forms::Form
	{
	public:
		frmServiciosRegistrados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmServiciosRegistrados(Cliente^ objCliente)
		{
			InitializeComponent();
			this->objCliente = objCliente;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmServiciosRegistrados(Cliente^ objCliente, int posicion)
		{
			InitializeComponent();
			this->objCliente = objCliente;
			this->posicion = posicion;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmServiciosRegistrados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Cliente^ objCliente;
	private: int posicion;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox5;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmServiciosRegistrados::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->pictureBox7);
			this->groupBox2->Controls->Add(this->pictureBox6);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->pictureBox5);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(638, 22);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(860, 752);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Servicios Disponibles";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(597, 679);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 40);
			this->label6->TabIndex = 12;
			this->label6->Text = L"(Exclusivo para clientes con \r\ncuenta registrada)";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(602, 446);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(204, 165);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(321, 448);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(204, 162);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(626, 638);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(152, 24);
			this->radioButton6->TabIndex = 9;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Lavado Premium";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(27, 446);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(204, 165);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(321, 49);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(204, 165);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(602, 49);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(204, 165);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(27, 49);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(204, 165);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(343, 638);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(176, 24);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Lavado de Tapiceria";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(57, 638);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(144, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Lavado y Pulido";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(626, 245);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(153, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Lavado de Motor";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(343, 245);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(160, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Lavado de Chasis";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(57, 245);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(138, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Lavado Basico";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(172, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(198, 726);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 49);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Pedir Servicio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmServiciosRegistrados::button2_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(10, 272);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(597, 322);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Usuario";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Hatchback", L"Sedan", L"Camioneta", L"SUV" });
			this->comboBox1->Location = System::Drawing::Point(188, 279);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(309, 28);
			this->comboBox1->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(188, 221);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(309, 26);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 169);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(309, 26);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(188, 118);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(309, 26);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 60);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(309, 26);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo de Carro:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 225);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Placa del Carro:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(14, 602);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox3->Size = System::Drawing::Size(594, 125);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Detalles de Lavado";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &frmServiciosRegistrados::groupBox3_Enter);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Policarbonato", L"Aleación de aluminio", L"Fibra de vidrio reforzada" });
			this->comboBox2->Location = System::Drawing::Point(89, 56);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 28);
			this->comboBox2->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(410, 54);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 26);
			this->textBox5->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(280, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 20);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Hora de Inicio";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Material";
			// 
			// frmServiciosRegistrados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1513, 799);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmServiciosRegistrados";
			this->Text = L"frmServiciosRegistrados";
			this->Load += gcnew System::EventHandler(this, &frmServiciosRegistrados::frmServiciosRegistrados_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}

	private: System::Void frmServiciosRegistrados_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objCliente->nombre;
		this->textBox2->Text = this->objCliente->apellido;
		this->textBox3->Text = Convert::ToString(this->objCliente->identificacion);
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellido = this->textBox2->Text;
		String^ identificacionStr = this->textBox3->Text;
		String^ placaCarro = this->textBox4->Text;
		String^ colorCarro = this->comboBox1->Text;
		String^ tipoServicio;
		int duracion;
		String^ material = this->comboBox2->Text;
		String^ horaInicio = this->textBox5->Text;

		if (this->radioButton1->Checked) {
			tipoServicio = "Lavado Basico";
			duracion = 15;
		}
		else if (this->radioButton2->Checked) {
			tipoServicio = "Lavado de chasis";
			duracion = 15;
		}
		else if (this->radioButton3->Checked) {
			tipoServicio = "Lavado de motor";
			duracion = 20;
		}
		else if (this->radioButton4->Checked) {
			tipoServicio = "Lavado y Pulido";
			duracion = 30;
		}
		else if (this->radioButton5->Checked) {
			tipoServicio = "Lavado de tapiceria ";
			duracion = 35;
		}
		else if (this->radioButton6->Checked) {
			tipoServicio = "Lavado Premium";
			duracion = 45;
		}
		else {
			MessageBox::Show("Debe seleccionar un tipo de servicio.");
			return;
		}

		// Verificar que los campos de texto no estén vacíos
		if (String::IsNullOrWhiteSpace(nombre) ||
			String::IsNullOrWhiteSpace(apellido) ||
			String::IsNullOrWhiteSpace(identificacionStr) ||
			String::IsNullOrWhiteSpace(placaCarro) ||
			String::IsNullOrWhiteSpace(colorCarro) ||
			String::IsNullOrWhiteSpace(material) ||
			String::IsNullOrWhiteSpace(horaInicio)) {
			MessageBox::Show("Todos los campos deben estar completos.");
			return;
		}

		// Verificar que los campos de texto contienen solo letras
		if (!System::Text::RegularExpressions::Regex::IsMatch(nombre, "^[a-zA-Z]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(colorCarro, "^[a-zA-Z]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(apellido, "^[a-zA-Z]+$")) {
			MessageBox::Show("Los campos de nombre, apellido y color solo deben contener letras.");
			return;
		}

		// Verificar que los campos de texto contienen solo números
		if (!System::Text::RegularExpressions::Regex::IsMatch(identificacionStr, "^[0-9]+$")) {
			MessageBox::Show("El campo de identificación solo debe contener números.");
			return;
		}


		// Convertir las cadenas de texto a números
		int identificacion = Convert::ToInt32(identificacionStr);

		// Pedir el servicio
		// Debemos crear el servicioController
		ServicioController^ objServicioController = gcnew ServicioController();
		objServicioController->pedirServicio(nombre, apellido, identificacion, placaCarro, colorCarro, tipoServicio);
		// cambiar el txt de lavado y actualizar la carpeta//
		
		objServicioController->eliminarLavado(posicion);
		objServicioController->agregarLavado(posicion, material, duracion, horaInicio, "Ocupado");
		
		
		
		MessageBox::Show("Se ha pedido el servicio de forma exitosa");
		this->Close();
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
