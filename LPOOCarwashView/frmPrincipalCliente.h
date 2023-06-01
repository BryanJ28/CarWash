#pragma once
#include "frmNuevoServicio.h"

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
	/// Resumen de frmPrincipalCliente
	/// </summary>
	public ref class frmPrincipalCliente : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmPrincipalCliente(Cliente^ objCliente)
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
		~frmPrincipalCliente()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Cliente^ objCliente;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ serviciosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipalCliente::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->serviciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->serviciosToolStripMenuItem,
					this->descuentosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(981, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// serviciosToolStripMenuItem
			// 
			this->serviciosToolStripMenuItem->Name = L"serviciosToolStripMenuItem";
			this->serviciosToolStripMenuItem->Size = System::Drawing::Size(65, 22);
			this->serviciosToolStripMenuItem->Text = L"Servicios";
			this->serviciosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipalCliente::serviciosToolStripMenuItem_Click);
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(80, 22);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// frmPrincipalCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 532);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPrincipalCliente";
			this->Text = L"frmPrincipalCliente";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void serviciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoServicio^ ventanaNuevoServicio = gcnew frmNuevoServicio(objCliente);
		ventanaNuevoServicio->ShowDialog();
	}
	};
}
