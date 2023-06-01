#pragma once

namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBoleta
	/// </summary>
	public ref class frmBoleta : public System::Windows::Forms::Form
	{
	public:
		frmBoleta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBoleta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ textBox7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBoleta::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(277, 187);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(30, 208);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(555, 214);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Comprador";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmBoleta::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 862);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Documentos de Pago";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(297, 164);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(288, 20);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"IMPRIMIR COMPROBANTE DE PAGO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"DNI:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(309, 26);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(309, 26);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(133, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(309, 26);
			this->textBox3->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->dateTimePicker2);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(33, 440);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(552, 387);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de la Compra";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Hora:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(38, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Producto:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Forma de Pago:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 269);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Monto a Pagar (S/):";
			this->label9->Click += gcnew System::EventHandler(this, &frmBoleta::label9_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(213, 35);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(151, 26);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Enabled = false;
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(213, 92);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(151, 26);
			this->dateTimePicker2->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(213, 152);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(265, 26);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(213, 205);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(265, 26);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(213, 266);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(265, 26);
			this->textBox6->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 333);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 20);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Monto a Pagar:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(213, 330);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(265, 26);
			this->textBox7->TabIndex = 12;
			// 
			// frmBoleta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 931);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmBoleta";
			this->Text = L"Boleta de Pago";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
