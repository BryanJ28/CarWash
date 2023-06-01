#pragma once

#include "frmPersonal.h"
#include "frmCliente.h"
#include "frmServicios.h"
#include "frmSucursales.h"
#include "frmPrincipalPersonal.h"
#include "frmPedidosServicios.h"


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
	/// Resumen de frmPrincipalPersonal
	/// </summary>
	public ref class frmPrincipalPersonal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalPersonal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalPersonal(Personal^ objPersonal)
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
		~frmPrincipalPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ serviciosToolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	protected:













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipalPersonal::typeid));
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serviciosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			this->almacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipalPersonal::almacenToolStripMenuItem_Click);
			// 
			// serviciosToolStripMenuItem1
			// 
			this->serviciosToolStripMenuItem1->Name = L"serviciosToolStripMenuItem1";
			this->serviciosToolStripMenuItem1->Size = System::Drawing::Size(65, 20);
			this->serviciosToolStripMenuItem1->Text = L"Servicios";
			this->serviciosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmPrincipalPersonal::serviciosToolStripMenuItem1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->almacenToolStripMenuItem,
					this->serviciosToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(720, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmPrincipalPersonal::menuStrip1_ItemClicked);
			// 
			// frmPrincipalPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 393);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipalPersonal";
			this->Text = L"Lavado de Autos";
			this->Load += gcnew System::EventHandler(this, &frmPrincipalPersonal::frmPrincipalPersonal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void serviciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ ventanaCliente = gcnew frmCliente;
		ventanaCliente->Show();


	}
	private: System::Void sucursalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void frmPrincipalPersonal_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void almacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void serviciosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPedidosServicios^ ventanaPedidosServicios = gcnew frmPedidosServicios;
		ventanaPedidosServicios->Show();

	}
	};
}