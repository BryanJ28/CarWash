#pragma once

namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOCarwashController;
	using namespace LPOOCarwashModel;

	/// <summary>
	/// Resumen de frmSucursalNuevo
	/// </summary>
	public ref class frmSucursalNuevo : public System::Windows::Forms::Form
	{
	public:
		frmSucursalNuevo(void)
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
		~frmSucursalNuevo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSucursalNuevo::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(430, 197);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 29);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(355, 197);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 29);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSucursalNuevo::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 142);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Aforo:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(133, 140);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(335, 20);
			this->textBox3->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 109);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Dirección:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 106);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(335, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 79);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Distrito:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 76);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(335, 20);
			this->textBox1->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(43, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 138);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese los datos de la sucursal";
			// 
			// frmSucursalNuevo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 259);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmSucursalNuevo";
			this->Text = L"frmSucursalNuevo";
			this->Load += gcnew System::EventHandler(this, &frmSucursalNuevo::frmSucursalNuevo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ distrito = this->textBox1->Text;
		String^ direccion = this->textBox2->Text;
		String^ aforo = this->textBox3->Text;
		String^ ingresos = "0";


		// Verificar que los campos de texto no estén vacíos
		if (String::IsNullOrWhiteSpace(distrito) ||
			String::IsNullOrWhiteSpace(direccion) ||
			String::IsNullOrWhiteSpace(aforo)) {
			MessageBox::Show("Todos los campos deben estar completos.");
			return;
		}

		// Verificar que los campos de texto contienen solo letras
		if (!System::Text::RegularExpressions::Regex::IsMatch(distrito, "^[a-zA-Z]+$") ||
			!System::Text::RegularExpressions::Regex::IsMatch(direccion, "^[a-zA-Z]+$")) {
			MessageBox::Show("Los campos de distrito y direccion solo deben contener letras.");
			return;
		}

		// Verificar que los campos de texto contienen solo números
		if (!System::Text::RegularExpressions::Regex::IsMatch(aforo, "^[0-9]*\\.?[0-9]+$")) {
			MessageBox::Show("Los campos de aforo solo debe contener números.");
			return;
		}

		// Convertir las cadenas de texto a números

		int aforoint = Convert::ToInt32(aforo);
		int ingresosint = Convert::ToInt32(ingresos);

		// Agregar el personal
		SucursalController^ objSucursalController = gcnew SucursalController();
		objSucursalController->agregarSucursal(distrito, direccion, aforoint, ingresosint);
		MessageBox::Show("Se ha agregado al Sucursal de forma exitosa");
		this->Close();
	}
	private: System::Void frmSucursalNuevo_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
