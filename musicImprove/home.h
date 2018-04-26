#pragma once
#include "Guitarras.h"
#include "Guitarras2.h"
#include "Novedades.h"
#include "Afinador.h"
#include "Lecciones.h"
#include "leccionesAvanzadas.h"
#include "Principiante.h"



namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de home
	/// </summary>
	public ref class home : public System::Windows::Forms::Form
	{
	
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;

	private: Form^ FormRegistro;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: Form^ FormLogin;
	
	public:
		home(Form^ obj)
		{
			FormLogin = obj;
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	public:
		home(Form^ a, Form^ b)
		{
			FormLogin = a;
			FormRegistro = b;

			
		}
	public:
		home(void)
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
		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::ListBox^  NOVEDADES;







	private: System::Windows::Forms::TabPage^  tabPage1;







	private: System::Windows::Forms::Timer^  timer1;


	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;


	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->NOVEDADES = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(762, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &home::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(195, 42);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(625, 455);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(617, 426);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"HOME";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label2->Location = System::Drawing::Point(173, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 41);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Music Improve";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(16, 99);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(584, 249);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(617, 426);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"¿QUE GUITARRA COMPRAR\?";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(232, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 38);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Avanzado";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &home::button4_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(232, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Principiante";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &home::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(178, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Primero elige tu nivel:";
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(617, 426);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"LECCIONES";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(122, 477);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(249, 43);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Leccion 6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &home::button9_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button8->Enabled = false;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(122, 399);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(249, 43);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Leccion 5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &home::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(122, 308);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(249, 46);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Leccion 4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &home::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(122, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(249, 48);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Leccion 3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &home::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(122, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(249, 47);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Leccion 2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &home::button5_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(122, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 47);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Leccion 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &home::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->AutoScroll = true;
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(617, 426);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"LECCIONES AVANZADAS";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &home::tabPage4_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button14->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button14->Enabled = false;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(128, 419);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(249, 47);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Leccion 5";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button13->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button13->Enabled = false;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(128, 336);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(249, 47);
			this->button13->TabIndex = 4;
			this->button13->Text = L"Leccion 4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &home::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button12->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button12->Enabled = false;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(128, 240);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(249, 47);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Leccion 3";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &home::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button11->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button11->Enabled = false;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(128, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(249, 47);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Leccion 2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &home::button11_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button10->Enabled = false;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(128, 66);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(249, 47);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Leccion 1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &home::button10_Click);
			// 
			// NOVEDADES
			// 
			this->NOVEDADES->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->NOVEDADES->BackColor = System::Drawing::Color::White;
			this->NOVEDADES->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOVEDADES->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->NOVEDADES->FormattingEnabled = true;
			this->NOVEDADES->ItemHeight = 15;
			this->NOVEDADES->Location = System::Drawing::Point(12, 133);
			this->NOVEDADES->Name = L"NOVEDADES";
			this->NOVEDADES->ScrollAlwaysVisible = true;
			this->NOVEDADES->Size = System::Drawing::Size(177, 364);
			this->NOVEDADES->TabIndex = 3;
			this->NOVEDADES->SelectedIndexChanged += gcnew System::EventHandler(this, &home::NOVEDADES_SelectedIndexChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::White;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel1->Location = System::Drawing::Point(23, 179);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(142, 16);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿POR DONDE EMPEZAR\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &home::linkLabel1_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::Color::White;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel4->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel4->Location = System::Drawing::Point(23, 234);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(63, 16);
			this->linkLabel4->TabIndex = 7;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"AFINADOR";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &home::linkLabel4_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::White;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel2->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->linkLabel2->Location = System::Drawing::Point(23, 291);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(145, 13);
			this->linkLabel2->TabIndex = 8;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"LECCIONES PARA PRINCIPIANTE";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &home::linkLabel2_LinkClicked);
			// 
			// home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(832, 511);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->NOVEDADES);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Music Improve";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		FormLogin->Show();
		
		this->Hide();
	}
	
private: System::Void label1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}


private: System::Void label1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Guitarras^ obj = gcnew Guitarras(this);
	obj->Show();
	this->Hide();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Guitarras2^ obj = gcnew Guitarras2(this);
	obj->Show();
	this->Hide();
	
	
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Novedades^ obj = gcnew Novedades(1, this);
	obj->Show();
	this->Hide();

	
}

private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Afinador^ obj = gcnew Afinador(this);
	obj->Show();
	this->Hide();
}


//-------------------------------------------------------------------------

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(1, this);
	obj->Show();
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(2, this);
	obj->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(3, this);
	obj->Show();
	this->Hide();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(4, this);
	obj->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(5, this);
	obj->Show();
	this->Hide();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Lecciones^ obj = gcnew Lecciones(6, this);
	obj->Show();
	this->Hide();
}
//-----------------------------------------------------------

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	leccionesAvanzadas^ obj = gcnew leccionesAvanzadas(1, this);
	obj->Show();
	this->Hide();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	leccionesAvanzadas^ obj = gcnew leccionesAvanzadas(2, this);
	obj->Show();
	this->Hide();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	leccionesAvanzadas^ obj = gcnew leccionesAvanzadas(3, this);
	obj->Show();
	this->Hide();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	leccionesAvanzadas^ obj = gcnew leccionesAvanzadas(4, this);
	obj->Show();
	this->Hide();
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Principiante^ obj = gcnew Principiante(this);
	obj->Show();
	this->Hide();
}
private: System::Void NOVEDADES_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Afinador^ obj = gcnew Afinador(this);
	obj->Show();
	this->Hide();
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
