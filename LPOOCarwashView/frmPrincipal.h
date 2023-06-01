#pragma once
#include "frmPersonal.h"
#include "frmCliente.h"
#include "frmServicios.h"
#include "frmSucursales.h"


namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ sucursalesToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sucursalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->personalToolStripMenuItem,
					this->clienteToolStripMenuItem, this->sucursalesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(823, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(64, 22);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::personalToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(56, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::clienteToolStripMenuItem_Click);
			// 
			// sucursalesToolStripMenuItem
			// 
			this->sucursalesToolStripMenuItem->Name = L"sucursalesToolStripMenuItem";
			this->sucursalesToolStripMenuItem->Size = System::Drawing::Size(74, 22);
			this->sucursalesToolStripMenuItem->Text = L"Sucursales";
			this->sucursalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::sucursalesToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(823, 465);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersonal^ ventanaPersonal = gcnew frmPersonal();
		ventanaPersonal->ShowDialog();
	}


	private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ ventanaCliente = gcnew frmCliente();
		ventanaCliente->ShowDialog();
	}

	private: System::Void serviciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmServicios^ ventanaServicios = gcnew frmServicios();
		ventanaServicios->ShowDialog();
	}


	private: System::Void sucursalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmSucursales^ ventanaSucursales = gcnew frmSucursales();
		ventanaSucursales->ShowDialog();
	}
};
}
