#pragma once
#include "Graficas.h"
#include "iostream"

namespace practica_graficador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		double xi,xf,yii,yff;
	private: System::Windows::Forms::TextBox^  tByf;
	public:

	private: System::Windows::Forms::TextBox^  tByi;
	public:

			 Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tBxf;
	protected: 

	private: System::Windows::Forms::TextBox^  tBxi;

	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  rBBorrar;
	private: System::Windows::Forms::RadioButton^  rBGraficar;
	private: System::Windows::Forms::RadioButton^  rBLeer;
	private: System::Windows::Forms::PictureBox^  pB1;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tByf = (gcnew System::Windows::Forms::TextBox());
			this->tByi = (gcnew System::Windows::Forms::TextBox());
			this->tBxf = (gcnew System::Windows::Forms::TextBox());
			this->tBxi = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rBBorrar = (gcnew System::Windows::Forms::RadioButton());
			this->rBGraficar = (gcnew System::Windows::Forms::RadioButton());
			this->rBLeer = (gcnew System::Windows::Forms::RadioButton());
			this->pB1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Controls->Add(this->tByf);
			this->groupBox1->Controls->Add(this->tByi);
			this->groupBox1->Controls->Add(this->tBxf);
			this->groupBox1->Controls->Add(this->tBxi);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(35, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(172, 162);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// tByf
			// 
			this->tByf->BackColor = System::Drawing::SystemColors::ControlText;
			this->tByf->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->tByf->Location = System::Drawing::Point(21, 97);
			this->tByf->Name = L"tByf";
			this->tByf->Size = System::Drawing::Size(100, 20);
			this->tByf->TabIndex = 3;
			// 
			// tByi
			// 
			this->tByi->BackColor = System::Drawing::SystemColors::ControlText;
			this->tByi->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->tByi->Location = System::Drawing::Point(21, 71);
			this->tByi->Name = L"tByi";
			this->tByi->Size = System::Drawing::Size(100, 20);
			this->tByi->TabIndex = 2;
			// 
			// tBxf
			// 
			this->tBxf->BackColor = System::Drawing::SystemColors::ControlText;
			this->tBxf->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->tBxf->Location = System::Drawing::Point(21, 45);
			this->tBxf->Name = L"tBxf";
			this->tBxf->Size = System::Drawing::Size(100, 20);
			this->tBxf->TabIndex = 1;
			// 
			// tBxi
			// 
			this->tBxi->BackColor = System::Drawing::SystemColors::ControlText;
			this->tBxi->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->tBxi->Location = System::Drawing::Point(21, 19);
			this->tBxi->Name = L"tBxi";
			this->tBxi->Size = System::Drawing::Size(100, 20);
			this->tBxi->TabIndex = 0;
			this->tBxi->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->rBBorrar);
			this->groupBox2->Controls->Add(this->rBGraficar);
			this->groupBox2->Controls->Add(this->rBLeer);
			this->groupBox2->Location = System::Drawing::Point(35, 209);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(172, 125);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(21, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Operación";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// rBBorrar
			// 
			this->rBBorrar->AutoSize = true;
			this->rBBorrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rBBorrar->Location = System::Drawing::Point(21, 65);
			this->rBBorrar->Name = L"rBBorrar";
			this->rBBorrar->Size = System::Drawing::Size(53, 17);
			this->rBBorrar->TabIndex = 2;
			this->rBBorrar->TabStop = true;
			this->rBBorrar->Text = L"Borrar";
			this->rBBorrar->UseVisualStyleBackColor = true;
			// 
			// rBGraficar
			// 
			this->rBGraficar->AutoSize = true;
			this->rBGraficar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rBGraficar->Location = System::Drawing::Point(21, 42);
			this->rBGraficar->Name = L"rBGraficar";
			this->rBGraficar->Size = System::Drawing::Size(62, 17);
			this->rBGraficar->TabIndex = 1;
			this->rBGraficar->TabStop = true;
			this->rBGraficar->Text = L"Graficar";
			this->rBGraficar->UseVisualStyleBackColor = true;
			// 
			// rBLeer
			// 
			this->rBLeer->AutoSize = true;
			this->rBLeer->BackColor = System::Drawing::SystemColors::ControlText;
			this->rBLeer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rBLeer->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rBLeer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rBLeer->Location = System::Drawing::Point(21, 19);
			this->rBLeer->Name = L"rBLeer";
			this->rBLeer->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->rBLeer->Size = System::Drawing::Size(46, 17);
			this->rBLeer->TabIndex = 0;
			this->rBLeer->TabStop = true;
			this->rBLeer->Text = L"Leer";
			this->rBLeer->UseVisualStyleBackColor = false;
			// 
			// pB1
			// 
			this->pB1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pB1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pB1->Location = System::Drawing::Point(233, 33);
			this->pB1->Name = L"pB1";
			this->pB1->Size = System::Drawing::Size(1016, 599);
			this->pB1->TabIndex = 1;
			this->pB1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1285, 668);
			this->Controls->Add(this->pB1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Orange Plotter!";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Graphics ^g=pB1->CreateGraphics();
				 
				 if(rBLeer->Checked)
				 {
					 xi=Convert::ToDouble(tBxi->Text);
					 xf=Convert::ToDouble(tBxf->Text);
					 yii = Convert::ToDouble(tByi->Text);
					 yff = Convert::ToDouble(tByf->Text);
				 }
				 if(rBGraficar->Checked)
				 {
					 Graficador gra(xi, xf, yii, yff, g);
				 }
				 if(rBBorrar->Checked)
				 {
					 pB1->Refresh();
				 }
			 }
		 private: System::Void lB1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
					  if(rBLeer->Checked)
						  cout<<"hola";
				  }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}


