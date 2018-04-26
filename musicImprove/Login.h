#pragma once
using namespace MySql::Data::MySqlClient;
#include "home.h"
#include "Registro.h"

namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn;
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblPassword;


	private: System::Windows::Forms::Label^  lblUser;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->btn = (gcnew System::Windows::Forms::Button());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn
			// 
			this->btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn->ForeColor = System::Drawing::Color::Black;
			this->btn->Location = System::Drawing::Point(39, 404);
			this->btn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(257, 41);
			this->btn->TabIndex = 0;
			this->btn->Text = L"ENTRAR";
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(40, 223);
			this->txtUser->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(256, 21);
			this->txtUser->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(41, 320);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(256, 21);
			this->txtPassword->TabIndex = 2;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->lblPassword->Location = System::Drawing::Point(36, 298);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(93, 18);
			this->lblPassword->TabIndex = 4;
			this->lblPassword->Text = L"Contraseña";
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->BackColor = System::Drawing::Color::Transparent;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->lblUser->Location = System::Drawing::Point(36, 201);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(62, 18);
			this->lblUser->TabIndex = 5;
			this->lblUser->Text = L"Usuario";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btn);
			this->panel1->Controls->Add(this->txtPassword);
			this->panel1->Controls->Add(this->lblPassword);
			this->panel1->Controls->Add(this->lblUser);
			this->panel1->Controls->Add(this->txtUser);
			this->panel1->Location = System::Drawing::Point(69, 47);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(334, 534);
			this->panel1->TabIndex = 7;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(79, 472);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(176, 17);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click aqui para registrarte";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			this->linkLabel1->MouseLeave += gcnew System::EventHandler(this, &Login::linkLabel1_MouseLeave);
			this->linkLabel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::linkLabel1_MouseMove);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(470, 636);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ usuario = txtUser->Text;
		String^ password = txtPassword->Text;

		//--------------------------- Conexion con la BD ------------------------------------------------

		String^ conn = L"datasource=localhost;port=3306;username=root;password=; database=musicimprove";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(conn);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select password from musicimprove.usuario where usuario='" + usuario + "';", conDataBase);

		MySqlDataReader^ myReader;

		try{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				if (myReader->GetString("password") == password)
				{
					home^ obj = gcnew home(this);
					obj->Show();

					this->Hide();
					MessageBox::Show("¡Bienvedido!");
					break;
				}
				else
				{
					MessageBox::Show("¡Contraseña incorrecta!");
					break;
				}
			}
		}
		catch (Exception^ ex){
			MessageBox::Show(ex->Message);
		}
	}
			 
	
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Registro^ obj = gcnew Registro(this);
	obj->Show();
	this->Hide();
}


private: System::Void linkLabel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));

}
private: System::Void linkLabel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));

}
}; //end class
}
