#pragma once
#include "frmPersonalDetalle.h"
#include "frmEditarPersonal.h"

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
	/// Resumen de frmPersonal
	/// </summary>
	public ref class frmPersonal : public System::Windows::Forms::Form
	{
	public:
		frmPersonal(void)
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
		~frmPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sueldo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Identificación;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPersonal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sueldo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Identificación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(66, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 119);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmPersonal::groupBox1_Enter);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(469, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPersonal::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(226, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmPersonal::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			this->label2->Click += gcnew System::EventHandler(this, &frmPersonal::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmPersonal::textBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(66, 177);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(581, 154);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Base de datos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nombre,
					this->Apellido, this->Sueldo, this->Identificación
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(569, 129);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPersonal::dataGridView1_CellContentClick);
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
			// Sueldo
			// 
			this->Sueldo->HeaderText = L"Sueldo";
			this->Sueldo->MinimumWidth = 6;
			this->Sueldo->Name = L"Sueldo";
			this->Sueldo->Width = 125;
			// 
			// Identificación
			// 
			this->Identificación->HeaderText = L"Identificación";
			this->Identificación->MinimumWidth = 6;
			this->Identificación->Name = L"Identificación";
			this->Identificación->Width = 125;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(541, 349);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPersonal::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(438, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPersonal::button4_Click);
			// 
			// frmPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 384);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmPersonal";
			this->Text = L"frmPersonal";
			this->Load += gcnew System::EventHandler(this, &frmPersonal::frmPersonal_Load_1);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void frmPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersonalDetalle^ ventanaNuevoPersonal = gcnew frmPersonalDetalle;
		ventanaNuevoPersonal->ShowDialog();
		personalController^ objPersonalController = gcnew personalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarAll();
		mostrarGrilla(listaPersonal);
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombrePersonal = this->textBox1->Text;
		String^ apellidoPersonal = this->textBox2->Text;
		personalController^ objPersonalController = gcnew personalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarPersonal(nombrePersonal, apellidoPersonal);
		mostrarGrilla(listaPersonal);
	}
	private: void mostrarGrilla(List<Personal^>^ listaPersonal) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPersonal->Count; i++) {
			Personal^ objPersonal = listaPersonal[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = objPersonal->nombre;
			fila[1] = objPersonal->apellido;
			fila[2] = Convert::ToString(objPersonal->sueldo);
			fila[3] = Convert::ToString(objPersonal->identificacion);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedCells[0]->RowIndex;
			int identificacionPersonalEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
			personalController^ objPersonalController = gcnew personalController();
			objPersonalController->eliminarPersonal(identificacionPersonalEliminar);
			MessageBox::Show("Se ha eliminado correctamente al Personal Seleccionado");
			List<Personal^>^ listaPersonal = objPersonalController->buscarAll();
			mostrarGrilla(listaPersonal);
		}
		else {
			// Mostrar mensaje de acción inválida si no hay celdas seleccionadas
			MessageBox::Show("Debe presionar el cuadro izquierdo para seleccionar el Personal Deseado");
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
			int identificacionPersonalEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
			personalController^ objPersonalController = gcnew personalController();
			Personal^ objPersonal = objPersonalController->buscarPersonalxIdentificacion(identificacionPersonalEditar);
			frmEditarPersonal^ ventanaEditar = gcnew frmEditarPersonal(objPersonal);
			ventanaEditar->ShowDialog();
			List<Personal^>^ listaPersonal = objPersonalController->buscarAll();
			mostrarGrilla(listaPersonal);

		}
		else {
			MessageBox::Show("Debe presionar el cuadro izquierdo para seleccionar el Personal Deseado");
		}

	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombrePersonal = this->textBox1->Text;
		String^ apellidoPersonal = this->textBox2->Text;
		personalController^ objPersonalController = gcnew personalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarPersonal(nombrePersonal, apellidoPersonal);
		mostrarGrilla(listaPersonal);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombrePersonal = this->textBox1->Text;
		String^ apellidoPersonal = this->textBox2->Text;
		personalController^ objPersonalController = gcnew personalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarPersonal(nombrePersonal, apellidoPersonal);
		mostrarGrilla(listaPersonal);
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void frmPersonal_Load_1(System::Object^ sender, System::EventArgs^ e) {//LOAD
		personalController^ objPersonalController = gcnew personalController();
		List<Personal^>^ listaPersonal = objPersonalController->buscarAll();
		mostrarGrilla(listaPersonal);
	}
	};
}
