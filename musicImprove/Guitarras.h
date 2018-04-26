#pragma once


namespace musicImprove {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Guitarras
	/// </summary>
	public ref class Guitarras : public System::Windows::Forms::Form
	{
	private: Form^ form;
	public:
		Guitarras(Form^ obj)
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
		~Guitarras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  listBox1;





	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  pic1;
	private: System::Windows::Forms::PictureBox^  pic3;
	private: System::Windows::Forms::PictureBox^  pic2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;













	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::Label^  label1;









	private: System::Windows::Forms::PictureBox^  pictureBox31;

	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::LinkLabel^  linkLabel7;
	private: System::Windows::Forms::LinkLabel^  linkLabel6;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox40;











private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::PictureBox^  pictureBox94;
private: System::Windows::Forms::PictureBox^  pictureBox93;
private: System::Windows::Forms::PictureBox^  pictureBox92;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::PictureBox^  pictureBox91;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::PictureBox^  pictureBox65;
private: System::Windows::Forms::PictureBox^  pictureBox64;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox63;
private: System::Windows::Forms::PictureBox^  pictureBox62;
private: System::Windows::Forms::PictureBox^  pictureBox61;
private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::PictureBox^  pictureBox54;
private: System::Windows::Forms::PictureBox^  pictureBox53;
private: System::Windows::Forms::PictureBox^  pictureBox52;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::PictureBox^  pictureBox51;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Guitarras::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->pic3 = (gcnew System::Windows::Forms::PictureBox());
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
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
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 123);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(164, 355);
			this->listBox1->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1750;
			this->timer1->Tick += gcnew System::EventHandler(this, &Guitarras::timer1_Tick);
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->linkLabel7);
			this->tabPage3->Controls->Add(this->linkLabel6);
			this->tabPage3->Controls->Add(this->linkLabel5);
			this->tabPage3->Controls->Add(this->linkLabel4);
			this->tabPage3->Controls->Add(this->pictureBox44);
			this->tabPage3->Controls->Add(this->pictureBox46);
			this->tabPage3->Controls->Add(this->pictureBox45);
			this->tabPage3->Controls->Add(this->pictureBox43);
			this->tabPage3->Controls->Add(this->pictureBox42);
			this->tabPage3->Controls->Add(this->pictureBox41);
			this->tabPage3->Controls->Add(this->pictureBox40);
			this->tabPage3->Controls->Add(this->pictureBox39);
			this->tabPage3->Controls->Add(this->pictureBox38);
			this->tabPage3->Controls->Add(this->pictureBox37);
			this->tabPage3->Controls->Add(this->pictureBox36);
			this->tabPage3->Controls->Add(this->pictureBox35);
			this->tabPage3->Controls->Add(this->pictureBox34);
			this->tabPage3->Controls->Add(this->pictureBox33);
			this->tabPage3->Controls->Add(this->pictureBox32);
			this->tabPage3->Controls->Add(this->pictureBox31);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->pictureBox30);
			this->tabPage3->Controls->Add(this->pictureBox29);
			this->tabPage3->Controls->Add(this->pictureBox28);
			this->tabPage3->Controls->Add(this->pictureBox27);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->linkLabel3);
			this->tabPage3->Controls->Add(this->pictureBox10);
			this->tabPage3->Controls->Add(this->pictureBox9);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Controls->Add(this->pictureBox7);
			this->tabPage3->Controls->Add(this->linkLabel2);
			this->tabPage3->Controls->Add(this->pictureBox6);
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->linkLabel1);
			this->tabPage3->Controls->Add(this->pic1);
			this->tabPage3->Controls->Add(this->pic3);
			this->tabPage3->Controls->Add(this->pic2);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(608, 408);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Guitarras Electroacusticas";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label8->Location = System::Drawing::Point(34, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(257, 25);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Guitarras de Gama Alta";
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->LinkColor = System::Drawing::Color::Black;
			this->linkLabel7->Location = System::Drawing::Point(328, 720);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(109, 16);
			this->linkLabel7->TabIndex = 46;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"DR-100 EA10VSCH1";
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->LinkColor = System::Drawing::Color::Black;
			this->linkLabel6->Location = System::Drawing::Point(328, 1035);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(150, 16);
			this->linkLabel6->TabIndex = 45;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"Baton Rouge X1C/GACE-B";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->LinkColor = System::Drawing::Color::Black;
			this->linkLabel5->Location = System::Drawing::Point(36, 1035);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(236, 16);
			this->linkLabel5->TabIndex = 44;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Baton Rouge AR81C/OMCE OM Cutaway";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->LinkColor = System::Drawing::Color::Black;
			this->linkLabel4->Location = System::Drawing::Point(36, 720);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(81, 16);
			this->linkLabel4->TabIndex = 43;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Yamaha FGX";
			// 
			// pictureBox44
			// 
			this->pictureBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(331, 1247);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(51, 47);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 41;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(491, 1247);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(51, 47);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 42;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(412, 1247);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(51, 47);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 41;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(196, 1247);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(51, 47);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 40;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(117, 1247);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(51, 47);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 39;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(39, 1247);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(51, 47);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 38;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox40->Location = System::Drawing::Point(331, 1054);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(211, 187);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 37;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox39->Location = System::Drawing::Point(39, 1054);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(211, 187);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 36;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(491, 932);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(51, 47);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 35;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(412, 932);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(51, 47);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 34;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(331, 932);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(51, 47);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 33;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(196, 933);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(51, 47);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 32;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(117, 932);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(51, 47);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 31;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(39, 933);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(51, 47);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 30;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox32->Location = System::Drawing::Point(331, 739);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(211, 187);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 29;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox31->Location = System::Drawing::Point(39, 739);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(211, 187);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 28;
			this->pictureBox31->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(328, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 16);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Ibañez AEL108MD NT";
			// 
			// pictureBox30
			// 
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(488, 613);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(54, 47);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 26;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(408, 613);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(55, 47);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 25;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(331, 613);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(51, 47);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 24;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox27->Location = System::Drawing::Point(331, 420);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(211, 187);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 23;
			this->pictureBox27->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label1->Location = System::Drawing::Point(26, -59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 25);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Guitarras de Gama Alta";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->LinkColor = System::Drawing::Color::Black;
			this->linkLabel3->Location = System::Drawing::Point(36, 401);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(186, 16);
			this->linkLabel3->TabIndex = 21;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Epiphone Masterbilt EF-500RCCE ";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(196, 613);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(54, 47);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(117, 613);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(55, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(39, 613);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(51, 47);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Location = System::Drawing::Point(39, 420);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(211, 187);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(328, 82);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(144, 16);
			this->linkLabel2->TabIndex = 16;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Ltd. Ed. Elitist \"1964\" Texan";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(488, 287);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(54, 47);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(408, 287);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(55, 47);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(331, 287);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(51, 47);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(331, 101);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(211, 180);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(36, 82);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(150, 16);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Baton Rouge AR51S/GACE";
			// 
			// pic1
			// 
			this->pic1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.Image")));
			this->pic1->Location = System::Drawing::Point(196, 287);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(54, 47);
			this->pic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic1->TabIndex = 9;
			this->pic1->TabStop = false;
			// 
			// pic3
			// 
			this->pic3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic3.Image")));
			this->pic3->Location = System::Drawing::Point(117, 287);
			this->pic3->Name = L"pic3";
			this->pic3->Size = System::Drawing::Size(55, 47);
			this->pic3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pic3->TabIndex = 8;
			this->pic3->TabStop = false;
			// 
			// pic2
			// 
			this->pic2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.Image")));
			this->pic2->Location = System::Drawing::Point(39, 287);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(51, 47);
			this->pic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pic2->TabIndex = 7;
			this->pic2->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(39, 101);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(211, 180);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(192, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(616, 437);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->pictureBox94);
			this->tabPage1->Controls->Add(this->pictureBox93);
			this->tabPage1->Controls->Add(this->pictureBox92);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->pictureBox91);
			this->tabPage1->Controls->Add(this->pictureBox66);
			this->tabPage1->Controls->Add(this->pictureBox65);
			this->tabPage1->Controls->Add(this->pictureBox64);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->pictureBox63);
			this->tabPage1->Controls->Add(this->pictureBox62);
			this->tabPage1->Controls->Add(this->pictureBox61);
			this->tabPage1->Controls->Add(this->pictureBox60);
			this->tabPage1->Controls->Add(this->pictureBox59);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->pictureBox58);
			this->tabPage1->Controls->Add(this->pictureBox57);
			this->tabPage1->Controls->Add(this->pictureBox56);
			this->tabPage1->Controls->Add(this->pictureBox55);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->pictureBox54);
			this->tabPage1->Controls->Add(this->pictureBox53);
			this->tabPage1->Controls->Add(this->pictureBox52);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->pictureBox51);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->pictureBox50);
			this->tabPage1->Controls->Add(this->pictureBox49);
			this->tabPage1->Controls->Add(this->pictureBox48);
			this->tabPage1->Controls->Add(this->pictureBox47);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->pictureBox26);
			this->tabPage1->Controls->Add(this->pictureBox25);
			this->tabPage1->Controls->Add(this->pictureBox24);
			this->tabPage1->Controls->Add(this->pictureBox23);
			this->tabPage1->Controls->Add(this->pictureBox22);
			this->tabPage1->Controls->Add(this->pictureBox21);
			this->tabPage1->Controls->Add(this->pictureBox20);
			this->tabPage1->Controls->Add(this->pictureBox19);
			this->tabPage1->Controls->Add(this->pictureBox18);
			this->tabPage1->Controls->Add(this->pictureBox17);
			this->tabPage1->Controls->Add(this->pictureBox16);
			this->tabPage1->Controls->Add(this->pictureBox15);
			this->tabPage1->Controls->Add(this->pictureBox14);
			this->tabPage1->Controls->Add(this->pictureBox13);
			this->tabPage1->Controls->Add(this->pictureBox12);
			this->tabPage1->Controls->Add(this->pictureBox11);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(608, 408);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Guitarras Electricas";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox94
			// 
			this->pictureBox94->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(494, 1475);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(51, 47);
			this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox94->TabIndex = 87;
			this->pictureBox94->TabStop = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(412, 1475);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(51, 47);
			this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox93->TabIndex = 86;
			this->pictureBox93->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(334, 1475);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(51, 47);
			this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox92->TabIndex = 85;
			this->pictureBox92->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(331, 1270);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 16);
			this->label20->TabIndex = 84;
			this->label20->Text = L"Ibanez RG350DXZ-BK";
			// 
			// pictureBox91
			// 
			this->pictureBox91->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox91->Location = System::Drawing::Point(334, 1289);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(211, 180);
			this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox91->TabIndex = 83;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(208, 1475);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(51, 47);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 52;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(127, 1475);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(51, 47);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 51;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(48, 1475);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(51, 47);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 50;
			this->pictureBox64->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(45, 1270);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 16);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Ibanez RG655-CBM";
			// 
			// pictureBox63
			// 
			this->pictureBox63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox63->Location = System::Drawing::Point(48, 1289);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(211, 180);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox63->TabIndex = 48;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(494, 1176);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(51, 47);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 47;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(412, 1176);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(51, 47);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 46;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(334, 1176);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(51, 47);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 45;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox59->Location = System::Drawing::Point(334, 990);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(211, 180);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox59->TabIndex = 44;
			this->pictureBox59->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(331, 971);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 16);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Ibanez RG721FML-BIF";
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
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 39;
			this->pictureBox55->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(331, 674);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 16);
			this->label11->TabIndex = 38;
			this->label11->Text = L"hollowbody ETCACHCH1";
			// 
			// pictureBox54
			// 
			this->pictureBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(208, 1176);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(51, 47);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox54->TabIndex = 37;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(127, 1176);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(51, 47);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 36;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(48, 1176);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(51, 47);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 35;
			this->pictureBox52->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 971);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 16);
			this->label10->TabIndex = 34;
			this->label10->Text = L"EVH Striped Series Star ";
			// 
			// pictureBox51
			// 
			this->pictureBox51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox51->Location = System::Drawing::Point(48, 990);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(211, 180);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox51->TabIndex = 33;
			this->pictureBox51->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 674);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 16);
			this->label9->TabIndex = 32;
			this->label9->Text = L"50\'s Nashville Telecaster Custom ";
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
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			this->label7->Size = System::Drawing::Size(257, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Guitarras de Gama Alta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(331, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Fender Stratocaster American Standard";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"SG Gibson Les Paul";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Fender Telecaster";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(331, 374);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Gibson Les Paul Standard 2016 T Dorada";
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
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(733, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"<-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Guitarras::button1_Click);
			// 
			// Guitarras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(820, 490);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Guitarras";
			this->Text = L"Guitarras";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
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
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	Random^ randObj = gcnew Random;
	int var = randObj->Next(1, 4);

	if (var == 1)
	{
		pictureBox2->Image = pic1->Image;
		pictureBox3->Image = pictureBox4->Image;
		pictureBox7->Image = pictureBox8->Image;
		pictureBox11->Image = pictureBox13->Image;
		pictureBox12->Image = pictureBox16->Image;
		pictureBox19->Image = pictureBox20->Image;
		pictureBox23->Image = pictureBox24->Image;
		pictureBox27->Image = pictureBox28->Image;
		pictureBox47->Image = pictureBox48->Image;
		pictureBox55->Image = pictureBox56->Image;
		pictureBox51->Image = pictureBox52->Image;
		pictureBox59->Image = pictureBox60->Image;
		pictureBox63->Image = pictureBox64->Image;
		pictureBox91->Image = pictureBox92->Image;
		pictureBox31->Image = pictureBox34->Image;
		pictureBox32->Image = pictureBox36->Image;
		pictureBox39->Image = pictureBox41->Image;
		pictureBox40->Image = pictureBox44->Image;
		

	}
	if (var == 2)
	{
		pictureBox2->Image = pic2->Image;
		pictureBox3->Image = pictureBox5->Image;
		pictureBox7->Image = pictureBox9->Image;
		pictureBox11->Image = pictureBox14->Image;
		pictureBox12->Image = pictureBox17->Image;
		pictureBox19->Image = pictureBox21->Image;
		pictureBox23->Image = pictureBox25->Image;
		pictureBox27->Image = pictureBox29->Image;
		pictureBox47->Image = pictureBox49->Image;
		pictureBox55->Image = pictureBox57->Image;
		pictureBox51->Image = pictureBox53->Image;
		pictureBox59->Image = pictureBox61->Image;
		pictureBox63->Image = pictureBox65->Image;
		pictureBox91->Image = pictureBox93->Image;
		pictureBox31->Image = pictureBox33->Image;
		pictureBox32->Image = pictureBox37->Image;
		pictureBox39->Image = pictureBox42->Image;
		pictureBox40->Image = pictureBox45->Image;
		

	}
	if (var == 3)
	{
		pictureBox2->Image = pic3->Image;
		pictureBox3->Image = pictureBox6->Image;
		pictureBox7->Image = pictureBox10->Image;
		pictureBox11->Image = pictureBox15->Image;
		pictureBox12->Image = pictureBox18->Image;
		pictureBox19->Image = pictureBox22->Image;
		pictureBox23->Image = pictureBox26->Image;
		pictureBox27->Image = pictureBox30->Image;
		pictureBox47->Image = pictureBox48->Image;
		pictureBox55->Image = pictureBox58->Image;
		pictureBox51->Image = pictureBox54->Image;
		pictureBox59->Image = pictureBox62->Image;
		pictureBox63->Image = pictureBox66->Image;
		pictureBox91->Image = pictureBox94->Image;
		pictureBox31->Image = pictureBox35->Image;
		pictureBox32->Image = pictureBox38->Image;
		pictureBox39->Image = pictureBox43->Image;
		pictureBox40->Image = pictureBox46->Image;
		
	}
}



private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	form->Show();
	this->Hide();
}
};
}
