#pragma once

namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOCarwashController;

	/// <summary>
	/// Resumen de frmPersonalDetalle
	/// </summary>
	public ref class frmPersonalDetalle : public System::Windows::Forms::Form
	{
	public:
		frmPersonalDetalle(void)
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
		~frmPersonalDetalle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPersonalDetalle::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 43);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(335, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmPersonalDetalle::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 76);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Apellido:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 74);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(335, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 110);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Sueldo:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(116, 107);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(335, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 143);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Identificación:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(116, 141);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(335, 20);
			this->textBox4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(312, 180);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPersonalDetalle::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(387, 180);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPersonalDetalle::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(26, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 163);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese los datos del personal";
			// 
			// frmPersonalDetalle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 232);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmPersonalDetalle";
			this->Text = L"Nuevo Personal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellido = this->textBox2->Text;
		String^ sueldoStr = this->textBox3->Text;
		String^ identificacionStr = this->textBox4->Text;

		// Verificar que los campos de texto no estén vacíos
		if (String::IsNullOrWhiteSpace(nombre) ||
			String::IsNullOrWhiteSpace(apellido) ||
			String::IsNullOrWhiteSpace(sueldoStr) ||
			String::IsNullOrWhiteSpace(identificacionStr)) {
			MessageBox::Show("Todos los campos deben estar completos.");
			return;
		}

		// Verificar que los campos de texto contienen solo letras
		if (!System::Text::RegularExpressions::Regex::IsMatch(nombre, "^[a-zA-Z]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(apellido, "^[a-zA-Z]+$")) {
			MessageBox::Show("Los campos de nombre y apellido solo deben contener letras.");
			return;
		}

		// Verificar que los campos de texto contienen solo números
		if (!System::Text::RegularExpressions::Regex::IsMatch(sueldoStr, "^[0-9]*\\.?[0-9]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(identificacionStr, "^[0-9]+$")) {
			MessageBox::Show("Los campos de sueldo e identificación solo deben contener números.");
			return;
		}

		// Convertir las cadenas de texto a números
		Double sueldo = Convert::ToDouble(sueldoStr);
		int identificacion = Convert::ToInt32(identificacionStr);

		// Agregar el personal
		personalController^ objPersonalController = gcnew personalController();
		objPersonalController->agregarPersonal(nombre, apellido, sueldo, identificacion);
		MessageBox::Show("Se ha agregado al personal de forma exitosa");
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
