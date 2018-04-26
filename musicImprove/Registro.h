#pragma once
using namespace MySql::Data::MySqlClient;
#include "home.h"

namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	private: Form^ form;
	public:
		Registro(Form^ obj)
		{
			form = obj;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblPaterno;
	private: System::Windows::Forms::Label^  lblMaterno;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblUs;
	private: System::Windows::Forms::Label^  lblContra;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  btnRegistro;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Registro::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblPaterno = (gcnew System::Windows::Forms::Label());
			this->lblMaterno = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblUs = (gcnew System::Windows::Forms::Label());
			this->lblContra = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(228, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->BackColor = System::Drawing::Color::Transparent;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(44, 182);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(95, 24);
			this->lblNombre->TabIndex = 1;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblPaterno
			// 
			this->lblPaterno->AutoSize = true;
			this->lblPaterno->BackColor = System::Drawing::Color::Transparent;
			this->lblPaterno->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPaterno->Location = System::Drawing::Point(44, 221);
			this->lblPaterno->Name = L"lblPaterno";
			this->lblPaterno->Size = System::Drawing::Size(116, 24);
			this->lblPaterno->TabIndex = 2;
			this->lblPaterno->Text = L"A. Paterno";
			// 
			// lblMaterno
			// 
			this->lblMaterno->AutoSize = true;
			this->lblMaterno->BackColor = System::Drawing::Color::Transparent;
			this->lblMaterno->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMaterno->Location = System::Drawing::Point(44, 265);
			this->lblMaterno->Name = L"lblMaterno";
			this->lblMaterno->Size = System::Drawing::Size(123, 24);
			this->lblMaterno->TabIndex = 3;
			this->lblMaterno->Text = L"A. Materno";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->BackColor = System::Drawing::Color::Transparent;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(44, 310);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(202, 24);
			this->lblCorreo->TabIndex = 4;
			this->lblCorreo->Text = L"Correo Electrónico";
			// 
			// lblUs
			// 
			this->lblUs->AutoSize = true;
			this->lblUs->BackColor = System::Drawing::Color::Transparent;
			this->lblUs->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUs->Location = System::Drawing::Point(44, 346);
			this->lblUs->Name = L"lblUs";
			this->lblUs->Size = System::Drawing::Size(81, 24);
			this->lblUs->TabIndex = 5;
			this->lblUs->Text = L"Usuario";
			// 
			// lblContra
			// 
			this->lblContra->AutoSize = true;
			this->lblContra->BackColor = System::Drawing::Color::Transparent;
			this->lblContra->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContra->Location = System::Drawing::Point(44, 388);
			this->lblContra->Name = L"lblContra";
			this->lblContra->Size = System::Drawing::Size(130, 24);
			this->lblContra->TabIndex = 6;
			this->lblContra->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(291, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 21);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 21);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(291, 270);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 21);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(291, 315);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 21);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(291, 351);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(288, 21);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(291, 393);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(288, 21);
			this->textBox6->TabIndex = 12;
			// 
			// btnRegistro
			// 
			this->btnRegistro->Location = System::Drawing::Point(267, 511);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(109, 38);
			this->btnRegistro->TabIndex = 13;
			this->btnRegistro->Text = L"Enviar";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &Registro::btnRegistro_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(507, 26);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(72, 22);
			this->linkLabel1->TabIndex = 14;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"LOGIN";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Registro::linkLabel1_LinkClicked);
			this->linkLabel1->MouseLeave += gcnew System::EventHandler(this, &Registro::linkLabel1_MouseLeave);
			this->linkLabel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Registro::linkLabel1_MouseMove);
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(622, 617);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnRegistro);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblContra);
			this->Controls->Add(this->lblUs);
			this->Controls->Add(this->lblCorreo);
			this->Controls->Add(this->lblMaterno);
			this->Controls->Add(this->lblPaterno);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Registro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nombre = textBox1->Text;
		String^ paterno = textBox2->Text;
		String^ materno = textBox3->Text;
		String^ correo = textBox4->Text;
		String^ usuario = textBox5->Text;
		String^ password = textBox6->Text;

		//---------------------- Conexion con la BD ---------------------------------------
		String^ conn = L"datasource=localhost;port=3306;username=root;password=; database=musicimprove";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(conn);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into musicimprove.usuario (nombre, paterno, materno, correo, usuario, password) values ('" + nombre + "','" + paterno + "','" + materno + "','" + correo + "','" + usuario + "','" + password + "');", conDataBase);
		MySqlDataReader^ myReader;

		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			
				home^ obj = gcnew home(this);
				obj->Show();
				this->Hide();
				MessageBox::Show("Registro dado de alta\n¡Bienvenido(a) " + nombre + "!");
				
			
			/*if (myReader->Read())
			{
				home^ obj = gcnew home(this);
				obj->Show();
				this->Hide();
				MessageBox::Show("Registro dado de alta");
			}
			else
			{
				MessageBox::Show("Error de conexion con la BD");
			}*/
		}
		catch (Exception^ ex){
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void linkLabel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void linkLabel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	form->Show();
	this->Hide();
}
};
}
