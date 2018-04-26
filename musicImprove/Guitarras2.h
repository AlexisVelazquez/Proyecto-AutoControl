#pragma once
//#include "home.h";

namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Guitarras2
	/// </summary>
	public ref class Guitarras2 : public System::Windows::Forms::Form
	{
	private: Form^ form;
	public:
		Guitarras2(Form^ obj)
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
		~Guitarras2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
















































































































private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TabPage^  tabPage2;















private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::Label^  label11;





private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::PictureBox^  pictureBox49;
private: System::Windows::Forms::PictureBox^  pictureBox48;
private: System::Windows::Forms::PictureBox^  pictureBox47;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::PictureBox^  pictureBox26;
private: System::Windows::Forms::PictureBox^  pictureBox25;
private: System::Windows::Forms::PictureBox^  pictureBox24;
private: System::Windows::Forms::PictureBox^  pictureBox23;
private: System::Windows::Forms::PictureBox^  pictureBox22;
private: System::Windows::Forms::PictureBox^  pictureBox21;
private: System::Windows::Forms::PictureBox^  pictureBox20;
private: System::Windows::Forms::PictureBox^  pictureBox19;
private: System::Windows::Forms::PictureBox^  pictureBox18;
private: System::Windows::Forms::PictureBox^  pictureBox17;
private: System::Windows::Forms::PictureBox^  pictureBox16;
private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::TabPage^  tabPage1;















private: System::Windows::Forms::PictureBox^  pictureBox30;
private: System::Windows::Forms::PictureBox^  pictureBox31;
private: System::Windows::Forms::PictureBox^  pictureBox32;
private: System::Windows::Forms::PictureBox^  pictureBox33;
private: System::Windows::Forms::Label^  label14;





private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::PictureBox^  pictureBox38;
private: System::Windows::Forms::PictureBox^  pictureBox39;
private: System::Windows::Forms::PictureBox^  pictureBox40;
private: System::Windows::Forms::PictureBox^  pictureBox41;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::PictureBox^  pictureBox42;
private: System::Windows::Forms::PictureBox^  pictureBox43;
private: System::Windows::Forms::PictureBox^  pictureBox44;
private: System::Windows::Forms::PictureBox^  pictureBox45;
private: System::Windows::Forms::PictureBox^  pictureBox46;
private: System::Windows::Forms::PictureBox^  pictureBox67;
private: System::Windows::Forms::PictureBox^  pictureBox68;
private: System::Windows::Forms::PictureBox^  pictureBox69;
private: System::Windows::Forms::PictureBox^  pictureBox70;
private: System::Windows::Forms::PictureBox^  pictureBox71;
private: System::Windows::Forms::PictureBox^  pictureBox72;
private: System::Windows::Forms::PictureBox^  pictureBox73;
private: System::Windows::Forms::PictureBox^  pictureBox74;
private: System::Windows::Forms::PictureBox^  pictureBox75;
private: System::Windows::Forms::PictureBox^  pictureBox76;
private: System::Windows::Forms::PictureBox^  pictureBox77;
private: System::Windows::Forms::Timer^  timer1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Guitarras2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 122);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(164, 394);
			this->listBox1->TabIndex = 5;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(182, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(631, 474);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->pictureBox58);
			this->tabPage2->Controls->Add(this->pictureBox57);
			this->tabPage2->Controls->Add(this->pictureBox56);
			this->tabPage2->Controls->Add(this->pictureBox55);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->pictureBox50);
			this->tabPage2->Controls->Add(this->pictureBox49);
			this->tabPage2->Controls->Add(this->pictureBox48);
			this->tabPage2->Controls->Add(this->pictureBox47);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->pictureBox26);
			this->tabPage2->Controls->Add(this->pictureBox25);
			this->tabPage2->Controls->Add(this->pictureBox24);
			this->tabPage2->Controls->Add(this->pictureBox23);
			this->tabPage2->Controls->Add(this->pictureBox22);
			this->tabPage2->Controls->Add(this->pictureBox21);
			this->tabPage2->Controls->Add(this->pictureBox20);
			this->tabPage2->Controls->Add(this->pictureBox19);
			this->tabPage2->Controls->Add(this->pictureBox18);
			this->tabPage2->Controls->Add(this->pictureBox17);
			this->tabPage2->Controls->Add(this->pictureBox16);
			this->tabPage2->Controls->Add(this->pictureBox15);
			this->tabPage2->Controls->Add(this->pictureBox14);
			this->tabPage2->Controls->Add(this->pictureBox13);
			this->tabPage2->Controls->Add(this->pictureBox12);
			this->tabPage2->Controls->Add(this->pictureBox11);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(623, 445);
			this->tabPage2->TabIndex = 4;
			this->tabPage2->Text = L"Guitarras Electricas";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(494, 879);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(51, 47);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 42;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(412, 879);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(51, 47);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 41;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(334, 879);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(51, 47);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 40;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox55->Location = System::Drawing::Point(334, 693);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(211, 180);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox55->TabIndex = 39;
			this->pictureBox55->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(331, 674);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(146, 16);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Jackson JS32TQ Dinky TRD";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 674);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 16);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Jackson Pro Soloist SL2M";
			// 
			// pictureBox50
			// 
			this->pictureBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(127, 879);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(51, 47);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 31;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(208, 879);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(51, 47);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 30;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(48, 879);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(51, 47);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 29;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox47->Location = System::Drawing::Point(48, 693);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(211, 180);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox47->TabIndex = 28;
			this->pictureBox47->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label7->Location = System::Drawing::Point(43, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(350, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Guitarras de Gama Media y Baja";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(331, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Guitarra eléctrica Les Paul 2016";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Guitarra eléctrico EVH ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Explorer 2016";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(331, 374);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Eric Clapton Stratocaster";
			// 
			// pictureBox26
			// 
			this->pictureBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(491, 579);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(54, 47);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 22;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(412, 579);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(55, 47);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 21;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(334, 579);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(51, 47);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 20;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox23->Location = System::Drawing::Point(334, 393);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(211, 180);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 19;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(205, 579);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(54, 47);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 18;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(123, 579);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(55, 47);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 17;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(48, 579);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(51, 47);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 16;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox19->Location = System::Drawing::Point(48, 393);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(211, 180);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 15;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(491, 283);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(54, 47);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 14;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(412, 283);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(55, 47);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 13;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(334, 283);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(51, 47);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 12;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(205, 283);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(54, 47);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 11;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(123, 283);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(55, 47);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 10;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(48, 283);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(51, 47);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 9;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox12->Location = System::Drawing::Point(334, 97);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(211, 180);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 8;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox11->Location = System::Drawing::Point(48, 97);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(211, 180);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 7;
			this->pictureBox11->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->pictureBox30);
			this->tabPage1->Controls->Add(this->pictureBox31);
			this->tabPage1->Controls->Add(this->pictureBox32);
			this->tabPage1->Controls->Add(this->pictureBox33);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->pictureBox38);
			this->tabPage1->Controls->Add(this->pictureBox39);
			this->tabPage1->Controls->Add(this->pictureBox40);
			this->tabPage1->Controls->Add(this->pictureBox41);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->pictureBox42);
			this->tabPage1->Controls->Add(this->pictureBox43);
			this->tabPage1->Controls->Add(this->pictureBox44);
			this->tabPage1->Controls->Add(this->pictureBox45);
			this->tabPage1->Controls->Add(this->pictureBox46);
			this->tabPage1->Controls->Add(this->pictureBox67);
			this->tabPage1->Controls->Add(this->pictureBox68);
			this->tabPage1->Controls->Add(this->pictureBox69);
			this->tabPage1->Controls->Add(this->pictureBox70);
			this->tabPage1->Controls->Add(this->pictureBox71);
			this->tabPage1->Controls->Add(this->pictureBox72);
			this->tabPage1->Controls->Add(this->pictureBox73);
			this->tabPage1->Controls->Add(this->pictureBox74);
			this->tabPage1->Controls->Add(this->pictureBox75);
			this->tabPage1->Controls->Add(this->pictureBox76);
			this->tabPage1->Controls->Add(this->pictureBox77);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(623, 445);
			this->tabPage1->TabIndex = 5;
			this->tabPage1->Text = L"Guitarras Acústicas";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(494, 879);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(51, 47);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 42;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(412, 879);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(51, 47);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 41;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(334, 879);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(51, 47);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 40;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox33->Location = System::Drawing::Point(334, 693);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(211, 180);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 39;
			this->pictureBox33->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(331, 674);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(152, 16);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Guild F-150CE Nat Westerly";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(45, 674);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 16);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Harley Benton HB";
			// 
			// pictureBox38
			// 
			this->pictureBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(127, 879);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(51, 47);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 31;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(208, 879);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(51, 47);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 30;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(48, 879);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(51, 47);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 29;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox41->Location = System::Drawing::Point(48, 693);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(211, 180);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 28;
			this->pictureBox41->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label17->Location = System::Drawing::Point(43, 25);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(350, 25);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Guitarras de Gama Media y Baja";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(331, 78);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(140, 16);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Gibson SJ-200 Bob Dylan";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(45, 78);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(127, 16);
			this->label19->TabIndex = 25;
			this->label19->Text = L"Epiphone EJ-200CE BK";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(45, 374);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(184, 16);
			this->label21->TabIndex = 24;
			this->label21->Text = L"Epiphone EJ-200 Artist Limited Ed.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(331, 374);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(156, 16);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Gibson Claro Walnut SJ-200";
			// 
			// pictureBox42
			// 
			this->pictureBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(491, 579);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(54, 47);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 22;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(412, 579);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(55, 47);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox43->TabIndex = 21;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(334, 579);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(51, 47);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 20;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox45->Location = System::Drawing::Point(334, 393);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(211, 180);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox45->TabIndex = 19;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(205, 579);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(54, 47);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox46->TabIndex = 18;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(123, 579);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(55, 47);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox67->TabIndex = 17;
			this->pictureBox67->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(48, 579);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(51, 47);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 16;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox69->Location = System::Drawing::Point(48, 393);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(211, 180);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox69->TabIndex = 15;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(491, 283);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(54, 47);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox70->TabIndex = 14;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(412, 283);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(55, 47);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox71->TabIndex = 13;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(334, 283);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(51, 47);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox72->TabIndex = 12;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(205, 283);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(54, 47);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox73->TabIndex = 11;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(123, 283);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(55, 47);
			this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox74->TabIndex = 10;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(48, 283);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(51, 47);
			this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox75->TabIndex = 9;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox76->Location = System::Drawing::Point(334, 97);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(211, 180);
			this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox76->TabIndex = 8;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox77->Location = System::Drawing::Point(48, 97);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(211, 180);
			this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox77->TabIndex = 7;
			this->pictureBox77->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(733, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"<-";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Guitarras2::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1750;
			this->timer1->Tick += gcnew System::EventHandler(this, &Guitarras2::timer1_Tick);
			// 
			// Guitarras2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(825, 529);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Guitarras2";
			this->Text = L"Guitarras2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//home^ obj = gcnew home(this);
		form->Show();
		this->Hide();
	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	Random^ randObj = gcnew Random;
	int var = randObj->Next(1, 4);

	if (var == 1){
		pictureBox11->Image = pictureBox13->Image;
		pictureBox12->Image = pictureBox16->Image;
		pictureBox19->Image = pictureBox20->Image;
		pictureBox23->Image = pictureBox24->Image;
		pictureBox47->Image = pictureBox48->Image;
		pictureBox55->Image = pictureBox56->Image;
		pictureBox77->Image = pictureBox73->Image;
		pictureBox76->Image = pictureBox70->Image;
		pictureBox69->Image = pictureBox46->Image;
		pictureBox45->Image = pictureBox42->Image;
		pictureBox41->Image = pictureBox38->Image;
		pictureBox33->Image = pictureBox30->Image;
	}
	if (var == 2){
		pictureBox11->Image = pictureBox14->Image;
		pictureBox12->Image = pictureBox17->Image;
		pictureBox19->Image = pictureBox21->Image;
		pictureBox23->Image = pictureBox25->Image;
		pictureBox47->Image = pictureBox49->Image;
		pictureBox55->Image = pictureBox57->Image;
		pictureBox77->Image = pictureBox74->Image;
		pictureBox76->Image = pictureBox71->Image;
		pictureBox69->Image = pictureBox67->Image;
		pictureBox45->Image = pictureBox43->Image;
		pictureBox41->Image = pictureBox39->Image;
		pictureBox33->Image = pictureBox31->Image;
	}
	if (var == 3){
		pictureBox11->Image = pictureBox15->Image;
		pictureBox12->Image = pictureBox18->Image;
		pictureBox19->Image = pictureBox22->Image;
		pictureBox23->Image = pictureBox26->Image;
		pictureBox47->Image = pictureBox50->Image;
		pictureBox55->Image = pictureBox58->Image;
		pictureBox77->Image = pictureBox75->Image;
		pictureBox76->Image = pictureBox72->Image;
		pictureBox69->Image = pictureBox68->Image;
		pictureBox45->Image = pictureBox44->Image;
		pictureBox41->Image = pictureBox40->Image;
		pictureBox33->Image = pictureBox32->Image;
	}
}
};
}
