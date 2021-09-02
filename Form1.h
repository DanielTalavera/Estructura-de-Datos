#pragma once
#include "Triangulo.h"
#include <msclr\marshal_sppstd.h>

using namespace std;
using namespace msclr::interop;

namespace clase020921 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Base;
	protected: 

	private: System::Windows::Forms::Button^  Mensaje;
	private: System::Windows::Forms::TextBox^  txtBase;
	private: System::Windows::Forms::TextBox^  txtAltura;
	private: System::Windows::Forms::TextBox^  txtArea;



	private: System::Windows::Forms::Label^  Altura;
	private: System::Windows::Forms::Label^  Area;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Base = (gcnew System::Windows::Forms::Label());
			this->Mensaje = (gcnew System::Windows::Forms::Button());
			this->txtBase = (gcnew System::Windows::Forms::TextBox());
			this->txtAltura = (gcnew System::Windows::Forms::TextBox());
			this->txtArea = (gcnew System::Windows::Forms::TextBox());
			this->Altura = (gcnew System::Windows::Forms::Label());
			this->Area = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Base
			// 
			this->Base->AutoSize = true;
			this->Base->Location = System::Drawing::Point(12, 38);
			this->Base->Name = L"Base";
			this->Base->Size = System::Drawing::Size(31, 13);
			this->Base->TabIndex = 0;
			this->Base->Text = L"Base";
			// 
			// Mensaje
			// 
			this->Mensaje->Location = System::Drawing::Point(96, 202);
			this->Mensaje->Name = L"Mensaje";
			this->Mensaje->Size = System::Drawing::Size(90, 32);
			this->Mensaje->TabIndex = 1;
			this->Mensaje->Text = L"Mensaje";
			this->Mensaje->UseVisualStyleBackColor = true;
			this->Mensaje->Click += gcnew System::EventHandler(this, &Form1::Mensaje_Click);
			// 
			// txtBase
			// 
			this->txtBase->Location = System::Drawing::Point(96, 35);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(122, 20);
			this->txtBase->TabIndex = 2;
			// 
			// txtAltura
			// 
			this->txtAltura->Location = System::Drawing::Point(96, 94);
			this->txtAltura->Name = L"txtAltura";
			this->txtAltura->Size = System::Drawing::Size(122, 20);
			this->txtAltura->TabIndex = 3;
			// 
			// txtArea
			// 
			this->txtArea->Location = System::Drawing::Point(96, 149);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(122, 20);
			this->txtArea->TabIndex = 4;
			// 
			// Altura
			// 
			this->Altura->AutoSize = true;
			this->Altura->Location = System::Drawing::Point(12, 97);
			this->Altura->Name = L"Altura";
			this->Altura->Size = System::Drawing::Size(34, 13);
			this->Altura->TabIndex = 5;
			this->Altura->Text = L"Altura";
			this->Altura->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Area
			// 
			this->Area->AutoSize = true;
			this->Area->Location = System::Drawing::Point(12, 156);
			this->Area->Name = L"Area";
			this->Area->Size = System::Drawing::Size(29, 13);
			this->Area->TabIndex = 6;
			this->Area->Text = L"Area";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Area);
			this->Controls->Add(this->Altura);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->txtAltura);
			this->Controls->Add(this->txtBase);
			this->Controls->Add(this->Mensaje);
			this->Controls->Add(this->Base);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Mensaje_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Mensaje_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Triangulo triangulito;
			 triangulito.set_base(System::Convert::ToDouble(txtBase->Text));
			 triangulito.set_altura(System::Convert::ToDouble(txtAltura->Text));
			 areaux=triangulito.calcularArea();
			 txtArea->Text=System::Convert::ToString(areaux);
			 }
}
}
