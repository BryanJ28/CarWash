#pragma once
#include "frmPedidosServicios.h"
namespace LPOOCarwashView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOCarwashController;
	using namespace LPOOCarwashModel;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmPedidosServicios
	/// </summary>
	public ref class frmPedidosServicios : public System::Windows::Forms::Form
	{
	public:
		frmPedidosServicios(void)
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
		~frmPedidosServicios()
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


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Identificación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantServ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPedidosServicios::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Identificación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantServ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(556, 354);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 25);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPedidosServicios::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(50, 183);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(727, 159);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Base de datos";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmPedidosServicios::groupBox2_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Nombre,
					this->Apellido, this->Identificación, this->CantServ, this->Column1, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(718, 129);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPedidosServicios::dataGridView1_CellContentClick);
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->MinimumWidth = 6;
			this->Apellido->Name = L"Apellido";
			this->Apellido->Width = 125;
			// 
			// Identificación
			// 
			this->Identificación->HeaderText = L"Identificación";
			this->Identificación->MinimumWidth = 6;
			this->Identificación->Name = L"Identificación";
			this->Identificación->Width = 125;
			// 
			// CantServ
			// 
			this->CantServ->HeaderText = L"Placa";
			this->CantServ->MinimumWidth = 6;
			this->CantServ->Name = L"CantServ";
			this->CantServ->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Color";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo de Servicio";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(52, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 134);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(137, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmPedidosServicios::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Identificación:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmPedidosServicios::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmPedidosServicios::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre: ";
			// 
			// frmPedidosServicios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 401);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPedidosServicios";
			this->Text = L"frmPedidosServicios";
			this->Load += gcnew System::EventHandler(this, &frmPedidosServicios::frmPedidosServicios_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void mostrarGrillaServicio(List<Servicio^>^ listaServicio) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la información del datagrid*/
		for (int i = 0; i < listaServicio->Count; i++) {
			Servicio^ objServicio = listaServicio[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = objServicio->nombre;
			fila[1] = objServicio->apellido;
			fila[2] = Convert::ToString(objServicio->identificacion);
			fila[3] = objServicio->placaCarro;
			fila[4] = objServicio->colorCarro;
			fila[5] = objServicio->tipoServicio;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreServicio = this->textBox1->Text;
		String^ apellidoServicio = this->textBox2->Text;
		int identificacionServicio = Int32::Parse(this->textBox3->Text);
		ServicioController^ objServicioController = gcnew ServicioController();
		List<Servicio^>^ listaServicio = objServicioController->buscarServicio(nombreServicio, apellidoServicio);
		mostrarGrillaServicio(listaServicio);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedCells[0]->RowIndex;
			int identificacionServicioEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString());
			ServicioController^ objServicioController = gcnew ServicioController();
			objServicioController->eliminarServicio(identificacionServicioEliminar);
			MessageBox::Show("Se ha eliminado correctamente el Servicio Seleccionado");
			List<Servicio^>^ listaServicio = objServicioController->buscarAll();
			mostrarGrillaServicio(listaServicio);
		}
		else {
			// Mostrar mensaje de acción inválida si no hay celdas seleccionadas
			MessageBox::Show("Seleccione la celda correctamente para poder eliminar el servicio deseado");
		}
	}

	private: System::Void frmPedidosServicios_Load(System::Object^ sender, System::EventArgs^ e) {
		ServicioController^ objServicioController = gcnew ServicioController();
		List<Servicio^>^ listaServicio = objServicioController->buscarAll();
		mostrarGrillaServicio(listaServicio);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreServicio = this->textBox1->Text;
		String^ apellidoServicio = this->textBox2->Text;
		int identificacionServicio = Int32::Parse(this->textBox3->Text);
		ServicioController^ objServicioController = gcnew ServicioController();
		List<Servicio^>^ listaServicio = objServicioController->buscarServicio(nombreServicio, apellidoServicio);
		mostrarGrillaServicio(listaServicio);
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreServicio = this->textBox1->Text;
		String^ apellidoServicio = this->textBox2->Text;
		int identificacionServicio = Int32::Parse(this->textBox3->Text);
		ServicioController^ objServicioController = gcnew ServicioController();
		List<Servicio^>^ listaServicio = objServicioController->buscarServicio(nombreServicio, apellidoServicio);
		mostrarGrillaServicio(listaServicio);
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreServicio = this->textBox1->Text;
		String^ apellidoServicio = this->textBox2->Text;
		int identificacionServicio = Int32::Parse(this->textBox3->Text);
		ServicioController^ objServicioController = gcnew ServicioController();
		List<Servicio^>^ listaServicio = objServicioController->buscarServicio(nombreServicio, apellidoServicio);
		mostrarGrillaServicio(listaServicio);
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}