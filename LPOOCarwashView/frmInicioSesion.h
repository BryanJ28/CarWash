#pragma once
#include "frmventanaNuevoUsuario.h"
#include "frmServicios.h"
#include "frmPrincipalCliente.h"
#include "frmPrincipalPersonal.h"
#include "frmPrincipal.h"

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
	/// Resumen de frmInicioSesion
	/// </summary>
	public ref class frmInicioSesion : public System::Windows::Forms::Form
	{
	public:
		frmInicioSesion(void)
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
		~frmInicioSesion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInicioSesion::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(74, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 441);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(230, 579);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmInicioSesion::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 366);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 26);
			this->textBox1->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(50, 476);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(65, 61);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(50, 346);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(50, 56);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(404, 152);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(186, 680);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(178, 20);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Pedir servicio sin cuenta";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmInicioSesion::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(107, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"No tienes una cuenta\?";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(321, 252);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(91, 20);
			this->linkLabel2->TabIndex = 11;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Registrarse";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmInicioSesion::linkLabel2_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(536, 56);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(597, 561);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(130, 494);
			this->maskedTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(324, 26);
			this->maskedTextBox1->TabIndex = 13;
			// 
			// frmInicioSesion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1182, 758);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmInicioSesion";
			this->Text = L"Inicio de Sesion";
			this->Load += gcnew System::EventHandler(this, &frmInicioSesion::frmInicioSesion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Enlace para que el usuario permita registrarse a la aplicacion*/
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		frmventanaNuevoUsuario^ ventanaNuevoUsuario = gcnew frmventanaNuevoUsuario();
		ventanaNuevoUsuario->ShowDialog();
	}

		   /*Enlace para que el usario permita ingresar a servicios sin necesidad de registrarse*/
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		frmServicios^ ventanaServicios = gcnew frmServicios();
		ventanaServicios->ShowDialog();
	}

		   /*Boton para ingresar el ingreso de sesion del usuario*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellidos = this->textBox1->Text;
		String^ identificacion = this->maskedTextBox1->Text;

		//Verificamos que los campos no se encuentren vacios
		if (String::IsNullOrWhiteSpace(nombre) || 
			String::IsNullOrWhiteSpace(identificacion)) {

			//Le solicitamos al usuario que llene todos los campos
			MessageBox::Show("Todos los campos deben estar completos.");
			return;
		}

		int identificacionInt = Convert::ToInt32(identificacion);

		clienteController^ objClienteController = gcnew clienteController();
		personalController^ objPersonalController = gcnew personalController();
		gerenteController^ objGerenteController = gcnew gerenteController();

		int clase = objClienteController->buscarUsuarioEnCliente(nombre, apellidos, identificacion);

		//Verificamos el tipo de usuario que se logea
		if (clase == 1) {
			Cliente^ objCliente = objClienteController->buscarClientexIdentificacion(identificacionInt);
			frmPrincipalCliente^ ventanaPrincipalCliente = gcnew frmPrincipalCliente(objCliente);
			ventanaPrincipalCliente->ShowDialog();
		}
		else {
			//Igualar la clase al buscador de personal
			clase = objPersonalController->buscarUsuarioEnPersonal(nombre, apellidos, identificacion);

			if (clase == 2) {
				frmPrincipalPersonal^ ventanaPrincipalPersonal = gcnew frmPrincipalPersonal();
				ventanaPrincipalPersonal->ShowDialog();

			}
			else {
				//Igualar la clase al buscador de gerente
				clase = objGerenteController->buscarUsuarioEnGerente(nombre, apellidos, identificacion);
				
				if (clase == 3) {
					frmPrincipal^ ventanaPrincipal = gcnew frmPrincipal();
					ventanaPrincipal->ShowDialog();
				}
				else {
					MessageBox::Show("Nombre o Contraseña incorrectos, intente de nuevo.");
				}
			}
		}

	}

private: System::Void frmInicioSesion_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
