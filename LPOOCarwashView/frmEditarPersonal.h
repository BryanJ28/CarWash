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
	/// Resumen de EditarPersonal
	/// </summary>
	public ref class frmEditarPersonal : public System::Windows::Forms::Form
	{
	public:
		frmEditarPersonal(void)
		{
			InitializeComponent();
			this->objPersonal = gcnew Personal();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarPersonal(Personal^ objPersonal)
		{
			InitializeComponent();
			this->objPersonal = objPersonal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Personal^ objPersonal;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmEditarPersonal::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(193, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarPersonal::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(91, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarPersonal::button1_Click_1);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(148, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &frmEditarPersonal::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmEditarPersonal::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Identificación: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Sueldo: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Apellidos: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre: ";
			// 
			// frmEditarPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 268);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmEditarPersonal";
			this->Text = L"EditarPersonal";
			this->Load += gcnew System::EventHandler(this, &frmEditarPersonal::EditarPersonal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void EditarPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objPersonal->nombre;
		this->textBox2->Text = this->objPersonal->apellido;
		this->textBox3->Text = Convert::ToString(this->objPersonal->sueldo);
		this->textBox4->Text = Convert::ToString(this->objPersonal->identificacion);
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//rescato los valores de las cajas de texto
		String^ nombre = this->textBox1->Text;
		String^ apellidos = this->textBox2->Text;
		Double sueldo = Convert::ToDouble(this->textBox3->Text);
		Int32^ identificacion = Convert::ToInt32(this->textBox4->Text);
		//Actualizo datos de los atributos
		this->objPersonal->nombre = nombre;
		this->objPersonal->apellido = apellidos;
		this->objPersonal->sueldo = sueldo;
		this->objPersonal->identificacion = (int)identificacion;
		personalController^ objPersonalController = gcnew personalController();
		objPersonalController->actualizarPersonal(this->objPersonal);
		MessageBox::Show("El Personal fue editado con éxito");
		this->Close();
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
