#pragma once
#include "frmSucursalNuevo.h"

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
	/// Resumen de frmSucursales
	/// </summary>
	public ref class frmSucursales : public System::Windows::Forms::Form
	{
	public:
		frmSucursales(void)
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
		~frmSucursales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Aforo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ingresos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSucursales::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Aforo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ingresos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(560, 353);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 25);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmSucursales::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(53, 181);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(581, 154);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Base de datos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Distrito,
					this->Direccion, this->Aforo, this->Ingresos
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(569, 129);
			this->dataGridView1->TabIndex = 0;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->MinimumWidth = 6;
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 125;
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Dirección";
			this->Direccion->MinimumWidth = 6;
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 125;
			// 
			// Aforo
			// 
			this->Aforo->HeaderText = L"Aforo";
			this->Aforo->MinimumWidth = 6;
			this->Aforo->Name = L"Aforo";
			this->Aforo->Width = 125;
			// 
			// Ingresos
			// 
			this->Ingresos->HeaderText = L"Ingresos";
			this->Ingresos->MinimumWidth = 6;
			this->Ingresos->Name = L"Ingresos";
			this->Ingresos->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(53, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 119);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmSucursales::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 52);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Distrito:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(466, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSucursales::button2_Click);
			// 
			// frmSucursales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 418);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmSucursales";
			this->Text = L"frmSucursales";
			this->Load += gcnew System::EventHandler(this, &frmSucursales::frmSucursales_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void mostrarGrillaSucursal(List<Sucursal^>^ listaSucursal) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaSucursal->Count; i++) {
			Sucursal^ objSucursal = listaSucursal[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = objSucursal->distrito;
			fila[1] = objSucursal->direccion;
			fila[2] = Convert::ToString(objSucursal->aforo);
			fila[3] = Convert::ToString(objSucursal->ingresos);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmSucursalNuevo^ ventanaSucursalNuevo = gcnew frmSucursalNuevo;
		ventanaSucursalNuevo->ShowDialog();
		SucursalController^ objSucursalController = gcnew SucursalController();
		List<Sucursal^>^ listaSucursal = objSucursalController->buscarAll();
		mostrarGrillaSucursal(listaSucursal);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ distrito = this->textBox1->Text;
		SucursalController^ objSucursalController = gcnew SucursalController();
		List<Sucursal^>^ listaSucursal = objSucursalController->buscarSucursal(distrito);
		mostrarGrillaSucursal(listaSucursal);
	}
	private: System::Void frmSucursales_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ distrito = this->textBox1->Text;
		SucursalController^ objSucursalController = gcnew SucursalController();
		List<Sucursal^>^ listaSucursal = objSucursalController->buscarSucursal(distrito);
		mostrarGrillaSucursal(listaSucursal);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedCells[0]->RowIndex;
			String^ distritoEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			SucursalController^ objSucursalController = gcnew SucursalController();
			objSucursalController->eliminarSucursal(distritoEliminar);
			MessageBox::Show("Se ha eliminado correctamente al Sucursal Seleccionado");
			List<Sucursal^>^ listaSucursal = objSucursalController->buscarAll();
			mostrarGrillaSucursal(listaSucursal);
		}
		else {
			// Mostrar mensaje de acción inválida si no hay celdas seleccionadas
			MessageBox::Show("Debe presionar el cuadro izquierdo para seleccionar el Sucursal Deseado");
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ distrito = this->textBox1->Text;
		SucursalController^ objSucursalController = gcnew SucursalController();
		List<Sucursal^>^ listaSucursal = objSucursalController->buscarSucursal(distrito);
		mostrarGrillaSucursal(listaSucursal);
	}
	};
}
