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
	/// Resumen de frmventanaNuevoUsuario
	/// </summary>
	public ref class frmventanaNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmventanaNuevoUsuario(void)
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
		~frmventanaNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmventanaNuevoUsuario::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(79, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(413, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 327);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 444);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 556);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Edad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 619);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Celular:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(75, 686);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Sexo:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 324);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 26);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 382);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(297, 26);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 441);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(297, 26);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 553);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(297, 26);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(161, 616);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(297, 26);
			this->textBox5->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->comboBox1->Location = System::Drawing::Point(161, 683);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(297, 28);
			this->comboBox1->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(161, 783);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmventanaNuevoUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(305, 783);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmventanaNuevoUsuario::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(34, 282);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(504, 467);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Campo de Datos";
			// 
			// frmventanaNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 850);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmventanaNuevoUsuario";
			this->Text = L"Nuevo Registro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Boton para cancelar la accion*/
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   /*Boton para que el usuario se registre al sistema*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellido = this->textBox2->Text;
		String^ identificacionStr = this->textBox3->Text;
		String^ edadStr = this->textBox4->Text;
		String^ celularStr = this->textBox5->Text;
		String^ sexo = this->comboBox1->Text;

		//Verificamos que los campos no se encuentren vacios
		if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido) ||
			String::IsNullOrWhiteSpace(identificacionStr) || String::IsNullOrWhiteSpace(edadStr) ||
			String::IsNullOrWhiteSpace(celularStr) || String::IsNullOrWhiteSpace(sexo)) {

			//Le solicitamos al usuario que llene todos los campos
			MessageBox::Show("Todos los campos deben estar completos.");
			return;
		}

		//Verificamos que los campos de texto contienen solo letras
		if (!System::Text::RegularExpressions::Regex::IsMatch(nombre, "[a-zA-z]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(apellido, "[a-zA-z]+$")) {
			
			MessageBox::Show("Los campos de nombre y apellido solo deben contener letras.");
			return;
		}

		//Verificamos que los campos de texto contiene solo numeros
		if(!System::Text::RegularExpressions::Regex::IsMatch(identificacionStr, "[0-9]+$") || 
			!System::Text::RegularExpressions::Regex::IsMatch(edadStr, "[0-9]+$") || 
			!System::Text::RegularExpressions::Regex::IsMatch(celularStr, "[0-9]+$")) {

			MessageBox::Show("Los campos de identificacion, edad y celular solo deben contener numeros.");
			return;
		}

		//Convertimos las cadenas de texto a numeros
		int identificacion = Convert::ToInt32(identificacionStr);
		int edad = Convert::ToInt32(edadStr);
		int celular = Convert::ToInt32(celularStr);

		//Agregamos el cliente a la lista
		clienteController^ objClienteController = gcnew clienteController();
		objClienteController->agregarCliente(nombre, apellido, identificacion, edad, celular, sexo);

		MessageBox::Show("Se ha agregado al cliente de forma exitosa.");
		this->Close();
	}
};
}
