#pragma once

#include "frmServiciosRegistrados.h"
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
	/// Resumen de frmNuevoServicio
	/// </summary>
	public ref class frmNuevoServicio : public System::Windows::Forms::Form
	{
	public:
		frmNuevoServicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevoServicio(Cliente^ objCliente)
		{
			InitializeComponent();
			this->objCliente = objCliente;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoServicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: Cliente^ objCliente;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNuevoServicio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(15, 24);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(63, 24);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(113, 24);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(161, 24);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(208, 24);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Lime;
			this->button6->Location = System::Drawing::Point(15, 86);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 36);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Lime;
			this->button7->Location = System::Drawing::Point(63, 86);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 36);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Lime;
			this->button8->Location = System::Drawing::Point(113, 86);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 36);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Lime;
			this->button9->Location = System::Drawing::Point(161, 86);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 36);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Lime;
			this->button10->Location = System::Drawing::Point(208, 86);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(35, 36);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Lime;
			this->button11->Location = System::Drawing::Point(15, 146);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 36);
			this->button11->TabIndex = 10;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Lime;
			this->button12->Location = System::Drawing::Point(63, 146);
			this->button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 36);
			this->button12->TabIndex = 11;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Lime;
			this->button13->Location = System::Drawing::Point(113, 146);
			this->button13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 36);
			this->button13->TabIndex = 12;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Lime;
			this->button14->Location = System::Drawing::Point(161, 146);
			this->button14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 36);
			this->button14->TabIndex = 13;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Lime;
			this->button15->Location = System::Drawing::Point(208, 146);
			this->button15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 36);
			this->button15->TabIndex = 14;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Lime;
			this->button16->Location = System::Drawing::Point(15, 204);
			this->button16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 36);
			this->button16->TabIndex = 15;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Lime;
			this->button17->Location = System::Drawing::Point(63, 204);
			this->button17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 36);
			this->button17->TabIndex = 16;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Lime;
			this->button18->Location = System::Drawing::Point(113, 204);
			this->button18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 36);
			this->button18->TabIndex = 17;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Lime;
			this->button19->Location = System::Drawing::Point(161, 204);
			this->button19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(35, 36);
			this->button19->TabIndex = 18;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Lime;
			this->button20->Location = System::Drawing::Point(208, 204);
			this->button20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 36);
			this->button20->TabIndex = 19;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &frmNuevoServicio::button20_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Location = System::Drawing::Point(15, 57);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(259, 257);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lugares disponibles:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoServicio::groupBox1_Enter);
			// 
			// frmNuevoServicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(291, 329);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmNuevoServicio";
			this->Text = L"Nuevo Servicio";
			this->Load += gcnew System::EventHandler(this, &frmNuevoServicio::frmNuevoServicio_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmNuevoServicio_Load(System::Object^ sender, System::EventArgs^ e) {


		ServicioController^ objServicioController = gcnew ServicioController();
		if (objServicioController->VerificarEstado(1)) {
			this->button1->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(2)) {
			this->button2->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(3)) {
			this->button3->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(4)) {
			this->button4->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(5)) {
			this->button5->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(6)) {
			this->button6->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(7)) {
			this->button7->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(8)) {
			this->button8->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(9)) {
			this->button9->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(10)) {
			this->button10->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(11)) {
			this->button11->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(12)) {
			this->button12->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(13)) {
			this->button13->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(14)) {
			this->button14->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(15)) {
			this->button15->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(16)) {
			this->button16->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(17)) {
			this->button17->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(18)) {
			this->button18->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(19)) {
			this->button19->BackColor = Color::Red;
		}
		if (objServicioController->VerificarEstado(20)) {
			this->button20->BackColor = Color::Red;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button1->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,1);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button2->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,2);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button3->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,3);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button4->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,4);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button5->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,5);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button6->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,6);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button7->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,7);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (button8->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,8);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button9->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,9);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button10->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,10);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button11->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,11);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button12->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,12);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button13->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,13);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button14->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,14);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button15->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,15);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button16->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,16);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button17->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,17);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button18->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,18);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button19->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,19);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button20->BackColor == Color::Red) {
			MessageBox::Show("Este lugar no está disponible.");
		}
		else {
			frmServiciosRegistrados^ ventanaIngresarServicio = gcnew frmServiciosRegistrados(objCliente,20);
			ventanaIngresarServicio->ShowDialog();
			this->Close();
		}
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
		ServicioController^ objServicioController = gcnew ServicioController();
		if (objServicioController->VerificarEstado(1)) {
			this->button1->BackColor = Color::Red;
		}
		else {
			this->button1->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(2)) {
			this->button2->BackColor = Color::Red;
		}
		else {
			this->button2->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(3)) {
			this->button3->BackColor = Color::Red;
		}
		else {
			this->button3->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(4)) {
			this->button4->BackColor = Color::Red;
		}
		else {
			this->button4->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(5)) {
			this->button5->BackColor = Color::Red;
		}
		else {
			this->button5->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(6)) {
			this->button6->BackColor = Color::Red;
		}
		else {
			this->button6->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(7)) {
			this->button7->BackColor = Color::Red;
		}
		else {
			this->button7->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(8)) {
			this->button8->BackColor = Color::Red;
		}
		else {
			this->button8->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(9)) {
			this->button9->BackColor = Color::Red;
		}
		else {
			this->button9->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(10)) {
			this->button10->BackColor = Color::Red;
		}
		else {
			this->button10->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(11)) {
			this->button11->BackColor = Color::Red;
		}
		else {
			this->button11->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(12)) {
			this->button12->BackColor = Color::Red;
		}
		else {
			this->button12->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(13)) {
			this->button13->BackColor = Color::Red;
		}
		else {
			this->button13->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(14)) {
			this->button14->BackColor = Color::Red;
		}
		else {
			this->button14->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(15)) {
			this->button15->BackColor = Color::Red;
		}
		else {
			this->button15->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(16)) {
			this->button16->BackColor = Color::Red;
		}
		else {
			this->button16->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(17)) {
			this->button17->BackColor = Color::Red;
		}
		else {
			this->button17->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(18)) {
			this->button18->BackColor = Color::Red;
		}
		else {
			this->button18->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(19)) {
			this->button19->BackColor = Color::Red;
		}
		else {
			this->button19->BackColor = Color::Lime;
		}
		if (objServicioController->VerificarEstado(20)) {
			this->button20->BackColor = Color::Red;
		}
		else {
			this->button20->BackColor = Color::Lime;
		}
	}
	};
}