#pragma once

namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de leccionesAvanzadas
	/// </summary>
	public ref class leccionesAvanzadas : public System::Windows::Forms::Form
	{
	private: int num;
	
	private: Form^ form;
	public:
		leccionesAvanzadas(int n, Form^ obj)
		{
			num = n;
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
		~leccionesAvanzadas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer4;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(leccionesAvanzadas::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->axWindowsMediaPlayer2 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->axWindowsMediaPlayer3 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->axWindowsMediaPlayer4 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(134, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 11;
			this->button1->Text = L"<-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &leccionesAvanzadas::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(152, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(565, 397);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->tabPage1->Controls->Add(this->axWindowsMediaPlayer1);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(557, 367);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Leccion 1";
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(40, 31);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(482, 296);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->tabPage2->Controls->Add(this->axWindowsMediaPlayer2);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(557, 367);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Leccion 2";
			// 
			// axWindowsMediaPlayer2
			// 
			this->axWindowsMediaPlayer2->Enabled = true;
			this->axWindowsMediaPlayer2->Location = System::Drawing::Point(40, 38);
			this->axWindowsMediaPlayer2->Name = L"axWindowsMediaPlayer2";
			this->axWindowsMediaPlayer2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer2.OcxState")));
			this->axWindowsMediaPlayer2->Size = System::Drawing::Size(482, 296);
			this->axWindowsMediaPlayer2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->tabPage3->Controls->Add(this->axWindowsMediaPlayer3);
			this->tabPage3->Location = System::Drawing::Point(4, 26);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(557, 367);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Leccion 3";
			// 
			// axWindowsMediaPlayer3
			// 
			this->axWindowsMediaPlayer3->Enabled = true;
			this->axWindowsMediaPlayer3->Location = System::Drawing::Point(40, 38);
			this->axWindowsMediaPlayer3->Name = L"axWindowsMediaPlayer3";
			this->axWindowsMediaPlayer3->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer3.OcxState")));
			this->axWindowsMediaPlayer3->Size = System::Drawing::Size(482, 296);
			this->axWindowsMediaPlayer3->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->tabPage4->Controls->Add(this->axWindowsMediaPlayer4);
			this->tabPage4->Location = System::Drawing::Point(4, 26);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(557, 367);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Leccion 4";
			// 
			// axWindowsMediaPlayer4
			// 
			this->axWindowsMediaPlayer4->Enabled = true;
			this->axWindowsMediaPlayer4->Location = System::Drawing::Point(40, 38);
			this->axWindowsMediaPlayer4->Name = L"axWindowsMediaPlayer4";
			this->axWindowsMediaPlayer4->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer4.OcxState")));
			this->axWindowsMediaPlayer4->Size = System::Drawing::Size(482, 296);
			this->axWindowsMediaPlayer4->TabIndex = 0;
			// 
			// leccionesAvanzadas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(744, 433);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"leccionesAvanzadas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lecciones Avanzadas";
			this->Load += gcnew System::EventHandler(this, &leccionesAvanzadas::leccionesAvanzadas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void leccionesAvanzadas_Load(System::Object^  sender, System::EventArgs^  e) {

		if (num == 1){
			/*this->tabPage2->Enabled = false;
			this->tabPage2->Visible = false;
			this->richTextBox1->Visible = false;
			this->label1->Visible = false;*/
			this->tabPage2->Parent = nullptr;
			this->tabPage3->Parent = nullptr;
			this->tabPage4->Parent = nullptr;
			

			this->axWindowsMediaPlayer1->Ctlcontrols->stop();

			this->tabPage2->Enabled = false;
			this->tabPage3->Enabled = false;
			this->tabPage4->Enabled = false;
			
		}
		if (num == 2){
			this->tabPage1->Parent = nullptr;
			this->tabPage3->Parent = nullptr;
			this->tabPage4->Parent = nullptr;
			

			this->axWindowsMediaPlayer1->Ctlcontrols->stop();

			this->tabPage1->Enabled = false;
			this->tabPage3->Enabled = false;
			this->tabPage4->Enabled = false;
			
			/*this->tabPage2->Enabled = false;
			this->tabPage2->Visible = false;
			this->richTextBox1->Visible = false;
			this->label1->Visible = false;*/
		}
		if (num == 3){
			this->tabPage2->Parent = nullptr;
			this->tabPage1->Parent = nullptr;
			this->tabPage4->Parent = nullptr;
			
			/*this->tabPage2->Enabled = false;
			this->tabPage2->Visible = false;
			this->richTextBox1->Visible = false;
			this->label1->Visible = false;*/
			this->axWindowsMediaPlayer1->Ctlcontrols->stop();
		}
		if (num == 4){
			this->tabPage2->Parent = nullptr;
			this->tabPage3->Parent = nullptr;
			this->tabPage1->Parent = nullptr;
			
			/*this->tabPage2->Enabled = false;
			this->tabPage2->Visible = false;
			this->richTextBox1->Visible = false;
			this->label1->Visible = false;*/
			this->axWindowsMediaPlayer1->Ctlcontrols->stop();
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	form->Show();
	this->Hide();
}
};
}
