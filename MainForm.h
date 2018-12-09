#pragma once
//icon made by https://www.freepik.com/
//www.flaticon.com/packs/fantastic-characters-3
#include <time.h>
#include <cstdlib>

namespace wp_hw06_4105056005 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm ���K�n
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	int people = 0;	//�C���H��
	array<int>^ pmoney = gcnew array<int>(4);		//���a�̪�����
	array< String^ >^ plocations;					//�U�a�W��
	array<int>^ plocaMon = gcnew array<int>(30);	//�U�a����
	array<int>^ phouses = gcnew array<int>(30);		//�U�a�Фl�ƶq
	array<int>^ owner = gcnew array<int>(30);		//�U�a�Фl�֦��̡A0�N��L�H�֦��A1�N��1�����a
	array<int>^ pposition = gcnew array<int>(4);	//���a�̦U�۩Ҧb��m
	array<int>^ pnoTax = gcnew array<int>(4);		//�U���a�֦����k�|�d
	array<int>^ alive = gcnew array<int>(4);		//���a�̬O�_���ۡA1�N���`
	int^ pdice = gcnew int;		//��l�I��
	int^ pround = gcnew int;	//�ثe���쪱�a
	int^ preturn = gcnew int;	//���s�}�l

	private: System::Windows::Forms::Label^  label_p1_name;
	private: System::Windows::Forms::Label^  label_p2_name;

	private: System::Windows::Forms::Label^  label_p3_name;
	private: System::Windows::Forms::Label^  label_p4_name;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �վ�Ҧ�ToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox_gif;
	private: System::Windows::Forms::Button^  button_dice;
	private: System::Windows::Forms::Label^  label_showDice;
	private: System::Windows::Forms::Label^  label_showDice2;
	private: System::Windows::Forms::Label^  label_toLocation;
	private: System::Windows::Forms::Button^  button_yes;
	private: System::Windows::Forms::Label^  label_showEvent;
	private: System::Windows::Forms::Button^  button_next;
	private: System::Windows::Forms::Button^  button_buy;
	private: System::Windows::Forms::Button^  button_notBuy;
	private: System::Windows::Forms::PictureBox^  picture_avatar1;
	private: System::Windows::Forms::PictureBox^  picture_avatar2;
	private: System::Windows::Forms::PictureBox^  picture_avatar3;
	private: System::Windows::Forms::PictureBox^  picture_avatar4;
	private: System::Windows::Forms::Button^  button_continue;
	private: System::Windows::Forms::Label^  label_who;

	public:
		array<String^>^ playerName = gcnew array<String^>(4);	//���a�W��

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_start;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label_player1;
	private: System::Windows::Forms::Label^  label_player2;
	private: System::Windows::Forms::Label^  label_player3;
	private: System::Windows::Forms::Label^  label_player4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label_start = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label_player1 = (gcnew System::Windows::Forms::Label());
			this->label_player2 = (gcnew System::Windows::Forms::Label());
			this->label_player3 = (gcnew System::Windows::Forms::Label());
			this->label_player4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label_p1_name = (gcnew System::Windows::Forms::Label());
			this->label_p2_name = (gcnew System::Windows::Forms::Label());
			this->label_p3_name = (gcnew System::Windows::Forms::Label());
			this->label_p4_name = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�վ�Ҧ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox_gif = (gcnew System::Windows::Forms::PictureBox());
			this->button_dice = (gcnew System::Windows::Forms::Button());
			this->label_showDice = (gcnew System::Windows::Forms::Label());
			this->label_showDice2 = (gcnew System::Windows::Forms::Label());
			this->label_toLocation = (gcnew System::Windows::Forms::Label());
			this->button_yes = (gcnew System::Windows::Forms::Button());
			this->label_showEvent = (gcnew System::Windows::Forms::Label());
			this->button_next = (gcnew System::Windows::Forms::Button());
			this->button_buy = (gcnew System::Windows::Forms::Button());
			this->button_notBuy = (gcnew System::Windows::Forms::Button());
			this->picture_avatar1 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_avatar2 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_avatar3 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_avatar4 = (gcnew System::Windows::Forms::PictureBox());
			this->button_continue = (gcnew System::Windows::Forms::Button());
			this->label_who = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_gif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar4))->BeginInit();
			this->SuspendLayout();
			// 
			// label_start
			// 
			this->label_start->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->label_start->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 22.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_start->Location = System::Drawing::Point(45, 59);
			this->label_start->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_start->Name = L"label_start";
			this->label_start->Size = System::Drawing::Size(220, 165);
			this->label_start->TabIndex = 0;
			this->label_start->Text = L"START\r\n>>>>";
			this->label_start->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(577, 236);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(125, 125);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 165);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(527, 59);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 165);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(763, 59);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 165);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label1";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1000, 59);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(220, 165);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label1";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1236, 59);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 165);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label1";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::MediumPurple;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1473, 59);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(220, 165);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label1";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1715, 59);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 165);
			this->label7->TabIndex = 8;
			this->label7->Text = L"label1";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1961, 59);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(220, 165);
			this->label8->TabIndex = 9;
			this->label8->Text = L"label1";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(2205, 59);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 165);
			this->label9->TabIndex = 10;
			this->label9->Text = L"label1";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::SlateBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(2205, 253);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(220, 165);
			this->label10->TabIndex = 11;
			this->label10->Text = L"label1";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(2205, 448);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(220, 165);
			this->label11->TabIndex = 12;
			this->label11->Text = L"label1";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(2205, 642);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(220, 165);
			this->label12->TabIndex = 13;
			this->label12->Text = L"label1";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(2205, 833);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(220, 165);
			this->label13->TabIndex = 14;
			this->label13->Text = L"label1";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(2205, 1028);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(220, 165);
			this->label14->TabIndex = 15;
			this->label14->Text = L"label1";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(2205, 1220);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(220, 165);
			this->label15->TabIndex = 16;
			this->label15->Text = L"label1";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1961, 1220);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(220, 165);
			this->label16->TabIndex = 17;
			this->label16->Text = L"label1";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::MediumPurple;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1715, 1220);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(220, 165);
			this->label17->TabIndex = 18;
			this->label17->Text = L"label1";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(1473, 1220);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(220, 165);
			this->label18->TabIndex = 19;
			this->label18->Text = L"label1";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1236, 1220);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(220, 165);
			this->label19->TabIndex = 20;
			this->label19->Text = L"label1";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(1000, 1220);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(220, 165);
			this->label20->TabIndex = 21;
			this->label20->Text = L"label1";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(763, 1220);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(220, 165);
			this->label21->TabIndex = 22;
			this->label21->Text = L"label1";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(527, 1220);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(220, 165);
			this->label22->TabIndex = 23;
			this->label22->Text = L"label1";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(285, 1220);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(220, 165);
			this->label23->TabIndex = 24;
			this->label23->Text = L"label1";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(45, 1220);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(220, 165);
			this->label24->TabIndex = 25;
			this->label24->Text = L"label1";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::SlateBlue;
			this->label25->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(45, 1028);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(220, 165);
			this->label25->TabIndex = 26;
			this->label25->Text = L"label1";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(45, 833);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(220, 165);
			this->label26->TabIndex = 27;
			this->label26->Text = L"label1";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(45, 642);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(220, 165);
			this->label27->TabIndex = 28;
			this->label27->Text = L"label1";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(45, 448);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(220, 165);
			this->label28->TabIndex = 29;
			this->label28->Text = L"label1";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(45, 253);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(220, 165);
			this->label29->TabIndex = 30;
			this->label29->Text = L"label1";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_player1
			// 
			this->label_player1->BackColor = System::Drawing::Color::LightCoral;
			this->label_player1->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_player1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_player1->Location = System::Drawing::Point(285, 321);
			this->label_player1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_player1->Name = L"label_player1";
			this->label_player1->Size = System::Drawing::Size(417, 292);
			this->label_player1->TabIndex = 31;
			// 
			// label_player2
			// 
			this->label_player2->BackColor = System::Drawing::Color::SkyBlue;
			this->label_player2->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_player2->Location = System::Drawing::Point(1763, 321);
			this->label_player2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_player2->Name = L"label_player2";
			this->label_player2->Size = System::Drawing::Size(418, 292);
			this->label_player2->TabIndex = 32;
			this->label_player2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_player3
			// 
			this->label_player3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->label_player3->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_player3->Location = System::Drawing::Point(285, 901);
			this->label_player3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_player3->Name = L"label_player3";
			this->label_player3->Size = System::Drawing::Size(417, 292);
			this->label_player3->TabIndex = 33;
			// 
			// label_player4
			// 
			this->label_player4->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->label_player4->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_player4->Location = System::Drawing::Point(1763, 901);
			this->label_player4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_player4->Name = L"label_player4";
			this->label_player4->Size = System::Drawing::Size(418, 292);
			this->label_player4->TabIndex = 34;
			this->label_player4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::RoyalBlue;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(1763, 236);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(125, 125);
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(576, 809);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(125, 125);
			this->pictureBox3->TabIndex = 36;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Gold;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(1763, 809);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(125, 125);
			this->pictureBox4->TabIndex = 37;
			this->pictureBox4->TabStop = false;
			// 
			// label_p1_name
			// 
			this->label_p1_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_p1_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p1_name->Location = System::Drawing::Point(284, 253);
			this->label_p1_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_p1_name->Name = L"label_p1_name";
			this->label_p1_name->Size = System::Drawing::Size(293, 68);
			this->label_p1_name->TabIndex = 38;
			this->label_p1_name->Text = L"Frodo";
			this->label_p1_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_p2_name
			// 
			this->label_p2_name->BackColor = System::Drawing::Color::RoyalBlue;
			this->label_p2_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p2_name->Location = System::Drawing::Point(1888, 253);
			this->label_p2_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_p2_name->Name = L"label_p2_name";
			this->label_p2_name->Size = System::Drawing::Size(293, 68);
			this->label_p2_name->TabIndex = 39;
			this->label_p2_name->Text = L"Cyclops";
			this->label_p2_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_p3_name
			// 
			this->label_p3_name->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->label_p3_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p3_name->Location = System::Drawing::Point(283, 833);
			this->label_p3_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_p3_name->Name = L"label_p3_name";
			this->label_p3_name->Size = System::Drawing::Size(292, 68);
			this->label_p3_name->TabIndex = 40;
			this->label_p3_name->Text = L"Gandalf";
			this->label_p3_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_p4_name
			// 
			this->label_p4_name->BackColor = System::Drawing::Color::Gold;
			this->label_p4_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p4_name->Location = System::Drawing::Point(1889, 833);
			this->label_p4_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_p4_name->Name = L"label_p4_name";
			this->label_p4_name->Size = System::Drawing::Size(292, 68);
			this->label_p4_name->TabIndex = 41;
			this->label_p4_name->Text = L"Zombie boi";
			this->label_p4_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�վ�Ҧ�ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2506, 38);
			this->menuStrip1->TabIndex = 42;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �վ�Ҧ�ToolStripMenuItem
			// 
			this->�վ�Ҧ�ToolStripMenuItem->Name = L"�վ�Ҧ�ToolStripMenuItem";
			this->�վ�Ҧ�ToolStripMenuItem->Size = System::Drawing::Size(121, 34);
			this->�վ�Ҧ�ToolStripMenuItem->Text = L"�վ�Ҧ�";
			// 
			// pictureBox_gif
			// 
			this->pictureBox_gif->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_gif.Image")));
			this->pictureBox_gif->Location = System::Drawing::Point(764, 269);
			this->pictureBox_gif->Name = L"pictureBox_gif";
			this->pictureBox_gif->Size = System::Drawing::Size(941, 915);
			this->pictureBox_gif->TabIndex = 43;
			this->pictureBox_gif->TabStop = false;
			// 
			// button_dice
			// 
			this->button_dice->BackColor = System::Drawing::Color::Sienna;
			this->button_dice->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_dice->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_dice->Location = System::Drawing::Point(1122, 1046);
			this->button_dice->Name = L"button_dice";
			this->button_dice->Size = System::Drawing::Size(210, 85);
			this->button_dice->TabIndex = 44;
			this->button_dice->Text = L"�Y��l";
			this->button_dice->UseVisualStyleBackColor = false;
			this->button_dice->Click += gcnew System::EventHandler(this, &MainForm::button_dice_Click);
			// 
			// label_showDice
			// 
			this->label_showDice->AutoSize = true;
			this->label_showDice->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label_showDice->Font = (gcnew System::Drawing::Font(L"�L�n������", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_showDice->Location = System::Drawing::Point(882, 403);
			this->label_showDice->Name = L"label_showDice";
			this->label_showDice->Size = System::Drawing::Size(306, 47);
			this->label_showDice->TabIndex = 45;
			this->label_showDice->Text = L"�A�Y�X���I�ƬO...";
			this->label_showDice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_showDice->Visible = false;
			// 
			// label_showDice2
			// 
			this->label_showDice2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_showDice2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_showDice2->Font = (gcnew System::Drawing::Font(L"�L�n������", 31.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_showDice2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_showDice2->Location = System::Drawing::Point(1204, 506);
			this->label_showDice2->Name = L"label_showDice2";
			this->label_showDice2->Size = System::Drawing::Size(277, 107);
			this->label_showDice2->TabIndex = 46;
			this->label_showDice2->Text = L"0 �I";
			this->label_showDice2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_showDice2->Visible = false;
			// 
			// label_toLocation
			// 
			this->label_toLocation->AutoSize = true;
			this->label_toLocation->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label_toLocation->Font = (gcnew System::Drawing::Font(L"�L�n������", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_toLocation->Location = System::Drawing::Point(933, 699);
			this->label_toLocation->Name = L"label_toLocation";
			this->label_toLocation->Size = System::Drawing::Size(204, 47);
			this->label_toLocation->TabIndex = 47;
			this->label_toLocation->Text = L"�e���a��....";
			this->label_toLocation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_toLocation->Visible = false;
			// 
			// button_yes
			// 
			this->button_yes->BackColor = System::Drawing::Color::Sienna;
			this->button_yes->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_yes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_yes->Location = System::Drawing::Point(1122, 1046);
			this->button_yes->Name = L"button_yes";
			this->button_yes->Size = System::Drawing::Size(210, 85);
			this->button_yes->TabIndex = 48;
			this->button_yes->Text = L"�T�{";
			this->button_yes->UseVisualStyleBackColor = false;
			this->button_yes->Visible = false;
			this->button_yes->Click += gcnew System::EventHandler(this, &MainForm::button_yes_Click);
			// 
			// label_showEvent
			// 
			this->label_showEvent->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label_showEvent->Font = (gcnew System::Drawing::Font(L"�L�n������", 13.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_showEvent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_showEvent.Image")));
			this->label_showEvent->Location = System::Drawing::Point(837, 430);
			this->label_showEvent->Name = L"label_showEvent";
			this->label_showEvent->Size = System::Drawing::Size(796, 292);
			this->label_showEvent->TabIndex = 49;
			this->label_showEvent->Text = L"�R�Фl";
			this->label_showEvent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_showEvent->Visible = false;
			// 
			// button_next
			// 
			this->button_next->BackColor = System::Drawing::Color::Sienna;
			this->button_next->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_next->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_next->Location = System::Drawing::Point(1437, 1046);
			this->button_next->Name = L"button_next";
			this->button_next->Size = System::Drawing::Size(229, 85);
			this->button_next->TabIndex = 50;
			this->button_next->Text = L"�����^�X";
			this->button_next->UseVisualStyleBackColor = false;
			this->button_next->Visible = false;
			this->button_next->Click += gcnew System::EventHandler(this, &MainForm::button_next_Click);
			// 
			// button_buy
			// 
			this->button_buy->BackColor = System::Drawing::Color::Sienna;
			this->button_buy->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_buy->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_buy->Location = System::Drawing::Point(964, 869);
			this->button_buy->Name = L"button_buy";
			this->button_buy->Size = System::Drawing::Size(206, 85);
			this->button_buy->TabIndex = 51;
			this->button_buy->Text = L"�ʶR";
			this->button_buy->UseVisualStyleBackColor = false;
			this->button_buy->Visible = false;
			this->button_buy->Click += gcnew System::EventHandler(this, &MainForm::button_buy_Click);
			// 
			// button_notBuy
			// 
			this->button_notBuy->BackColor = System::Drawing::Color::Sienna;
			this->button_notBuy->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_notBuy->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_notBuy->Location = System::Drawing::Point(1274, 869);
			this->button_notBuy->Name = L"button_notBuy";
			this->button_notBuy->Size = System::Drawing::Size(207, 85);
			this->button_notBuy->TabIndex = 52;
			this->button_notBuy->Text = L"���ʶR";
			this->button_notBuy->UseVisualStyleBackColor = false;
			this->button_notBuy->Visible = false;
			this->button_notBuy->Click += gcnew System::EventHandler(this, &MainForm::button_notBuy_Click);
			// 
			// picture_avatar1
			// 
			this->picture_avatar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->picture_avatar1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picture_avatar1->Location = System::Drawing::Point(45, 59);
			this->picture_avatar1->Name = L"picture_avatar1";
			this->picture_avatar1->Size = System::Drawing::Size(40, 40);
			this->picture_avatar1->TabIndex = 53;
			this->picture_avatar1->TabStop = false;
			// 
			// picture_avatar2
			// 
			this->picture_avatar2->BackColor = System::Drawing::Color::RoyalBlue;
			this->picture_avatar2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picture_avatar2->Location = System::Drawing::Point(45, 99);
			this->picture_avatar2->Name = L"picture_avatar2";
			this->picture_avatar2->Size = System::Drawing::Size(40, 40);
			this->picture_avatar2->TabIndex = 54;
			this->picture_avatar2->TabStop = false;
			// 
			// picture_avatar3
			// 
			this->picture_avatar3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->picture_avatar3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picture_avatar3->Location = System::Drawing::Point(45, 139);
			this->picture_avatar3->Name = L"picture_avatar3";
			this->picture_avatar3->Size = System::Drawing::Size(40, 40);
			this->picture_avatar3->TabIndex = 55;
			this->picture_avatar3->TabStop = false;
			// 
			// picture_avatar4
			// 
			this->picture_avatar4->BackColor = System::Drawing::Color::Gold;
			this->picture_avatar4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picture_avatar4->Location = System::Drawing::Point(45, 179);
			this->picture_avatar4->Name = L"picture_avatar4";
			this->picture_avatar4->Size = System::Drawing::Size(40, 40);
			this->picture_avatar4->TabIndex = 56;
			this->picture_avatar4->TabStop = false;
			// 
			// button_continue
			// 
			this->button_continue->BackColor = System::Drawing::Color::Sienna;
			this->button_continue->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_continue->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_continue->Location = System::Drawing::Point(1122, 1046);
			this->button_continue->Name = L"button_continue";
			this->button_continue->Size = System::Drawing::Size(210, 85);
			this->button_continue->TabIndex = 57;
			this->button_continue->Text = L"�~��";
			this->button_continue->UseVisualStyleBackColor = false;
			this->button_continue->Visible = false;
			this->button_continue->Click += gcnew System::EventHandler(this, &MainForm::button_continue_Click);
			// 
			// label_who
			// 
			this->label_who->AutoSize = true;
			this->label_who->BackColor = System::Drawing::Color::Orange;
			this->label_who->Font = (gcnew System::Drawing::Font(L"�L�n������", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_who->Location = System::Drawing::Point(982, 253);
			this->label_who->Name = L"label_who";
			this->label_who->Size = System::Drawing::Size(435, 54);
			this->label_who->TabIndex = 58;
			this->label_who->Text = L"�{�b�O1�����a���^�X";
			this->label_who->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2506, 1417);
			this->Controls->Add(this->label_who);
			this->Controls->Add(this->button_continue);
			this->Controls->Add(this->picture_avatar4);
			this->Controls->Add(this->picture_avatar3);
			this->Controls->Add(this->picture_avatar2);
			this->Controls->Add(this->picture_avatar1);
			this->Controls->Add(this->button_notBuy);
			this->Controls->Add(this->button_buy);
			this->Controls->Add(this->button_next);
			this->Controls->Add(this->label_showEvent);
			this->Controls->Add(this->button_yes);
			this->Controls->Add(this->label_toLocation);
			this->Controls->Add(this->label_showDice2);
			this->Controls->Add(this->label_showDice);
			this->Controls->Add(this->button_dice);
			this->Controls->Add(this->pictureBox_gif);
			this->Controls->Add(this->label_p4_name);
			this->Controls->Add(this->label_p3_name);
			this->Controls->Add(this->label_p2_name);
			this->Controls->Add(this->label_p1_name);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_player4);
			this->Controls->Add(this->label_player3);
			this->Controls->Add(this->label_player2);
			this->Controls->Add(this->label_player1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_start);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"�s�ө���", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Lord of the monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_gif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_avatar4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void hidepeople() {		//���ä��s�b�����a
		if (people < 4) {
			label_player4->Visible = false;
			pictureBox4->Visible = false;
			label_p4_name->Visible = false;
			picture_avatar4->Visible = false;
		}
		if (people < 3) {
			label_player3->Visible = false;
			pictureBox3->Visible = false;
			label_p3_name->Visible = false;
			picture_avatar3->Visible = false;
		}
	}
	//�C���}�l�e����l��
	public: System::Void initialize() {
		label_p1_name->Text = playerName[0];

		playerName[1] = "Cyclops";
		pmoney[1] = pmoney[0];
		playerName[2] = "Gandalf";
		pmoney[2] = pmoney[0];
		playerName[3] = "Zombie boi";
		pmoney[3] = pmoney[0];

		plocaMon[0] = 0;	plocaMon[1] = 90;	plocaMon[2] = 60;
		plocaMon[3] = 120;	plocaMon[4] = 80;	plocaMon[5] = 100;
		plocaMon[6] = 0;	plocaMon[7] = 100;	plocaMon[8] = 150;
		plocaMon[9] = 160;	plocaMon[10] = 200;	plocaMon[11] = 190;
		plocaMon[12] = 150;	plocaMon[13] = 220;	plocaMon[14] = 170;
		plocaMon[15] = 400;	plocaMon[16] = 170;	plocaMon[17] = 0;
		plocaMon[18] = 220;	plocaMon[19] = 250;	plocaMon[20] = 160;
		plocaMon[21] = 200;	plocaMon[22] = 180;	plocaMon[23] = 230;
		plocaMon[24] = 250;	plocaMon[25] = 200;	plocaMon[26] = 300;
		plocaMon[27] = 320;	plocaMon[28] = 160;	plocaMon[29] = 320;

		int^ pi = gcnew int;
		for (*pi = 0; *pi < 30; (*pi)++) {
			phouses[*pi] = 0;
			owner[*pi] = 0;//0�N��L�H�֦������a
		}

		pnoTax[0] = 0;
		pnoTax[1] = 0;
		pnoTax[2] = 0;
		pnoTax[3] = 0;

		alive[0] = 0;
		alive[1] = 0;
		alive[2] = 0;
		alive[3] = 0;

		pposition[0] = 0;
		pposition[1] = 0;
		pposition[2] = 0;
		pposition[3] = 0;

		*pround = 0;

		plocations = gcnew array<String^>(30) {
			"Start", "1.Hobbiton", "2.EchoIsles", "3.Citadel", "4.Midgar", "5.Gotham", "6.CHANCE", "7.Hideout",
				"8.SouthPark", "9.Waterdeep", "10.TAX", "11.Silent Hill", "12.Racoon City", "13.Los Santos", "14.District X", "15.Snowdin", "16.Grillby's", "17.COMMUNITY", "18.Skyrim",
				"19.Helheim", "20.Outland", "21.Ravenholm", "22.Asgard", "23.Detroit", "24.Alfheim", "25.TAX", "26.Highway 17", "27.Gravity Falls", "28.Black Beach", "29.Sea of light"
		};

		show_player_label(label_player1, 0);
		show_player_label(label_player2, 1);
		show_player_label(label_player3, 2);
		show_player_label(label_player4, 3);

		show_map_label(label1, 1);	show_map_label(label2, 2);
		show_map_label(label3, 3);	show_map_label(label4, 4);	show_map_label(label5, 5);
		show_map_label(label6, 6);	show_map_label(label7, 7);	show_map_label(label8, 8);
		show_map_label(label9, 9);	show_map_label(label10, 10);	show_map_label(label11, 11);
		show_map_label(label12, 12);	show_map_label(label13, 13);	show_map_label(label14, 14);
		show_map_label(label15, 15);	show_map_label(label16, 16);	show_map_label(label17, 17);
		show_map_label(label18, 18);	show_map_label(label19, 19);	show_map_label(label20, 20);
		show_map_label(label21, 21);	show_map_label(label22, 22);	show_map_label(label23, 23);
		show_map_label(label24, 24);	show_map_label(label25, 25);	show_map_label(label26, 26);
		show_map_label(label27, 27);	show_map_label(label28, 28);	show_map_label(label29, 29);

		//�}�l�C��
		button_dice->Visible = true;	//�u�H���a���^�X�A��l���s�|�X�{
		label_who->Text = "�{�b�O" + ((*pround) + 1) + "�����a���^�X";
	}

	//show�X���a���A
	private: System::Void show_player_label(Label^ label, int n) {
		label->Text = "�s��: " + (n + 1) + "�����a\n";
		label->Text += "������: " + pmoney[n] + "\n";
		label->Text += "�ثe��m: " + plocations[pposition[n]] + "\n";
		//�ˬd�}��
		if (pmoney[*pround] <= 0) {
			MessageBox::Show("���a" + playerName[n] + "�}���F!!!");
			alive[*pround] = 1;
			//*preturn = 1;
			//this->Close();
		}
	}
	//show�X�a�Ϯ�l
	private: System::Void show_map_label(Label^ map, int n) {
		map->Text = "";
		//�Фl�ƶq�A�a�W�A�л�
		if (phouses[n] != 0) {
			map->Text += phouses[n] + "�ɩФl\n";
		}
		map->Text += plocations[n] + "\n";
		if(n != 0 && n != 6 && n != 17  && n!= 10 && n != 25)
			map->Text += plocaMon[n] + "��\n";
	}
	//�Y��l���s
	private: System::Void button_dice_Click(System::Object^  sender, System::EventArgs^  e) {
		label_showDice->Visible = true;
		button_dice->Visible = false;
		srand(time(NULL));
		*pdice = (rand() % 11) + 2;
		label_showDice2->Text = *pdice + " �I";
		pposition[*pround] += *pdice;
		label_showDice2->Visible = true;
		label_toLocation->Visible = true;
		if (pposition[*pround] < 30)
			label_toLocation->Text = "�e���a�I... " + plocations[pposition[*pround]];
		else
			label_toLocation->Text = "�e���a�I... " + plocations[pposition[*pround]-30];
		button_yes->Visible = true;
	}
	//�Y����l�A�T�{�e���a��
	private: System::Void button_yes_Click(System::Object^  sender, System::EventArgs^  e) {
		button_yes->Visible = false;
		label_showDice->Visible = false;
		label_showDice2->Visible = false;
		label_toLocation->Visible = false;
		label_showEvent->Visible = true;
		label_showEvent->Text = "";
		if (pposition[*pround] >= 30) {
			pposition[*pround] -= 30;
			label_showEvent->Text += "�g�L�_�I�A��o300�����y�C\n";
			pmoney[*pround] += 300;
		}
		show_player_label(label_player1, 0);	//���a��m�ܧ�A��s���⪬�A��
		picture_avatar1->Location = switch_map(pposition[*pround])->Location;	//���ʨ���b�a�ϤW���p���
		if (pposition[*pround] == 6) {
			label_showEvent->Text += "�M���N�O����C �˷R�����a�A����@�i���|�P�C\n";
			//chance();
			button_next->Visible = true;
		}
		//��F�R�B���
		else if (pposition[*pround] == 17) {
			label_showEvent->Text += "�A��F�F�R�B�k��������A�o�礩�A�@�i�R�B�d�P�C\n";
			//community();
			button_next->Visible = true;
		}
		//��F��|���
		else if (pposition[*pround] == 10 || pposition[*pround] == 25) {
			label_showEvent->Text += "�u�˷��A�O���|�ɶ�!!! �ФWú200���C\n";
			if (pnoTax[*pround] > 0) {
				label_showEvent->Text += "�ϥΰk�|�K�y!!!�ڴN�O����ú�|�T�Q����!\n";
				pnoTax[*pround]--;
			}
			else
				pmoney[*pround] -= 200;
			button_next->Visible = true;
		}
		//��F�_�I�A���������
		else if (pposition[*pround] == 0) {
			label_showEvent->Text += "�w��^��:)";
			button_next->Visible = true;
		}
		//�ЫΤ��
		else {
			//��F�i�ʶR�����
			if (owner[pposition[*pround]] == (*pround) + 1 || owner[pposition[*pround]] == 0) {
				//�g�a��F���ũФl
				if (phouses[pposition[*pround]] >= 5) {
					label_showEvent->Text += "���a�I�w�O���ũФl�A��F�g�a�W���A�L�k�A�\�Фl�C\n���������A��o" + (int)plocaMon[pposition[*pround]] * 1.5 + "���C\n";
					pmoney[*pround] += (int)plocaMon[pposition[*pround]] * 1.5;
					button_next->Visible = true;
				}
				//�R�Фl
				else {
					if (phouses[pposition[*pround]] == 0)
						label_showEvent->Text += "�аݭn�ʶR�Фl��? ���a�Фl�n" + plocaMon[pposition[*pround]] + "���C";
					else {
						label_showEvent->Text += "�A�b���a�w�g��" + phouses[pposition[*pround]] + "�ũФl�C���������A��o" + (int)plocaMon[pposition[*pround]] / 2 * 1.5 + "���C\n";
						pmoney[*pround] += (int)plocaMon[pposition[*pround]] / 2 * 1.5;
						label_showEvent->Text += "�аݭn�ɯũФl��?�ݭn��O" + plocaMon[pposition[*pround]] + "���C\n";
					}
					button_buy->Visible = true;
					button_notBuy->Visible = true;
				}
			}

			//��W�O�H�a���g�a
			else if (owner[pposition[*pround]] != (*pround) + 1 && owner[pposition[*pround]] > 0) {
				if (alive[owner[pposition[*pround]] - 1] == 0) {
					label_showEvent->Text += "�A���W�F" + owner[pposition[*pround]] + "�����a���g�a�A�ݭn�I�L" + (int)plocaMon[pposition[*pround]] * 0.5  + "���L���O�C\n";
					pmoney[*pround] -= (int)plocaMon[pposition[*pround]] * 0.5;
					pmoney[owner[pposition[*pround]] - 1] += (int)plocaMon[pposition[*pround]] * 0.5;
					button_next->Visible = true;
				}
				else {
					label_showEvent->Text += "�֦��o���a�����a�w�g���`�F�A�o��O�@���R���Ǫ�����a�C\n" + (int)plocaMon[pposition[*pround]] + "���i�H���ޥL���g�a�C\n";
					button_buy->Visible = true;
					button_notBuy->Visible = true;
				}
			}
		}
		show_player_label(label_player1, 0);	//��s���⪬�A��
	}
	//�R�Фl
	private: System::Void button_buy_Click(System::Object^  sender, System::EventArgs^  e) {
		button_buy->Visible = false;
		button_notBuy->Visible = false;
		button_next->Visible = true;
		pmoney[*pround] -= plocaMon[pposition[*pround]];
		show_player_label(label_player1, 0);	//�����ƶq�ܧ�A��s���⪬�A��
		phouses[pposition[*pround]] += 1;
		owner[pposition[*pround]] = (*pround) + 1;
		if (phouses[pposition[*pround]] < 5)
			plocaMon[pposition[*pround]] *= 2;
		switch_map(pposition[*pround])->BackColor = System::Drawing::Color::LightCoral;
		show_map_label(switch_map(pposition[*pround]), pposition[*pround]);		//��s�a�Ϫ��Y�@��
		label_showEvent->Text = "�ʶR�F[" + plocations[pposition[*pround]] +"]���Фl�C\n���a�I�O" + phouses[pposition[*pround]] + "�ũЫΡC";
	}
	//�ڵ��ʶR�Фl
	private: System::Void button_notBuy_Click(System::Object^  sender, System::EventArgs^  e) {
		button_buy->Visible = false;
		button_notBuy->Visible = false;
		button_next->Visible = true;
		label_showEvent->Text = "�ڵ��ʶR�Фl�A�C���~��C";
	}
	//�������^�X���s�A�|����U�@��q�����a���C���j��
	private: System::Void button_next_Click(System::Object^  sender, System::EventArgs^  e) {
		button_next->Visible = false;
		(*pround)++;
		autoGame();
	}
	//�q���۰ʹC��
	private: System::Void autoGame() {
		//�ˬd�O�_���`
		if (alive[*pround] != 0) {
			(*pround)++;
			if (*pround >= people) {
				*pround = 0;
				button_dice->Visible = true;	//�u�H���a���^�X�A��l���s�|�X�{
				label_showEvent->Visible = false;
				label_who->Text = "�{�b�O" + ((*pround) + 1) + "�����a���^�X";
				return;
			}
		}
		label_who->Text = "�{�b�O" + ((*pround)+1) + "�����a���^�X";
		srand(time(NULL));
		*pdice = (rand() % 11) + 2;
		pposition[*pround] += *pdice;
		label_showEvent->Text = "�Y�X" + *pdice + "�I�A";
		if (pposition[*pround] < 30)
			label_showEvent->Text += "�e���a�I--" + plocations[pposition[*pround]] + "\n";
		else
			label_showEvent->Text += "�e���a�I--" + plocations[pposition[*pround] - 30] + "\n";

		if (pposition[*pround] >= 30) {
			pposition[*pround] -= 30;
			label_showEvent->Text += "�g�L�_�I�A��o300�����y�C\n";
			pmoney[*pround] += 300;
		}
		if (*pround == 1) {	//�G�����a
			show_player_label(label_player2, 1);	//���a��m�ܧ�A��s���⪬�A��
			picture_avatar2->Location = switch_map(pposition[*pround])->Location;	//���ʨ���b�a�ϤW���p���
		}
		else if (*pround == 2) {	//�T�����a
			show_player_label(label_player3, 2);	//���a��m�ܧ�A��s���⪬�A��
			picture_avatar3->Location = switch_map(pposition[*pround])->Location;	//���ʨ���b�a�ϤW���p���
		}
		else if (*pround == 3) {	//�|�����a
			show_player_label(label_player4, 3);	//���a��m�ܧ�A��s���⪬�A��
			picture_avatar4->Location= switch_map(pposition[*pround])->Location;	//���ʨ���b�a�ϤW���p���
		}
		if (pposition[*pround] == 6) {
			label_showEvent->Text += "�M���N�O����C �˷R�����a�A����@�i���|�P�C\n";
			//chance();
		}
		//��F�R�B���
		else if (pposition[*pround] == 17) {
			label_showEvent->Text += "�A��F�F�R�B�k��������A�o�礩�A�@�i�R�B�d�P�C\n";
			//community();
		}
		//��F��|���
		else if (pposition[*pround] == 10 || pposition[*pround] == 25) {
			label_showEvent->Text += "�u�˷��A�O���|�ɶ�!!! �ФWú200���C\n";
			if (pnoTax[*pround] > 0) {
				label_showEvent->Text += "�ϥΰk�|�K�y!!!�ڴN�O����ú�|�T�Q����!\n";
				pnoTax[*pround]--;
			}
			else
				pmoney[*pround] -= 200;
		}
		//��F�_�I�A���������
		else if (pposition[*pround] == 0) {
			label_showEvent->Text += "�^��_�I:)";
		}

		//�ЫΤ��
		else {
			//��F�i�ʶR�����
			if (owner[pposition[*pround]] == (*pround) + 1 || owner[pposition[*pround]] == 0) {
				//�g�a��F���ũФl
				if (phouses[pposition[*pround]] >= 5) {
					label_showEvent->Text += "���a�w�O���ũФl�A���������A��o" + (int)plocaMon[pposition[*pround]] * 1.5 + "���C\n";
					pmoney[*pround] += (int)plocaMon[pposition[*pround]] * 1.5;
				}
				//�R�Фl
				else {
					if (phouses[pposition[*pround]] != 0) {
						label_showEvent->Text += "�b���a�w�g��" + phouses[pposition[*pround]] + "�ũФl�C��������" + (int)plocaMon[pposition[*pround]] / 2 * 1.5 + "���C\n";
						pmoney[*pround] += (int)plocaMon[pposition[*pround]] / 2 * 1.5;
					}
					if (pmoney[*pround] > plocaMon[pposition[*pround]] + 150) {
						pmoney[*pround] -= plocaMon[pposition[*pround]];
						phouses[pposition[*pround]] += 1;
						if (phouses[pposition[*pround]] < 5)
							plocaMon[pposition[*pround]] *= 2;
						label_showEvent->Text += "����ʶR["+ plocations[pposition[*pround]]+"]���Фl�C��" + phouses[pposition[*pround]] + "�ũЫΡC";
						owner[pposition[*pround]] = (*pround) + 1;
						if (*pround == 1)	//�G�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::RoyalBlue;
						else if (*pround == 2) 	//�T�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::MediumSeaGreen;
						else if (*pround == 3)	//�|�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::Gold;
						show_map_label(switch_map(pposition[*pround]), pposition[*pround]);		//��s�a�Ϫ��Y�@��
					}
					else {
						label_showEvent->Text += "�ڵ��ʶR�Фl�A�C���~��C";
					}
				}
			}
			//��W�O�H�a���g�a
			else if (owner[pposition[*pround]] != (*pround) + 1 && owner[pposition[*pround]] > 0) {
				if (alive[owner[pposition[*pround]] - 1] == 0) {
					label_showEvent->Text += "���W�F" + owner[pposition[*pround]] + "�����a���g�a�A��I" + (int)plocaMon[pposition[*pround]] * 0.5 + "���L���O�C\n";
					pmoney[*pround] -= (int)plocaMon[pposition[*pround]] * 0.5;
					pmoney[owner[pposition[*pround]] - 1] += (int)plocaMon[pposition[*pround]] * 0.5;
				}
				else {
					label_showEvent->Text += "�֦��o���a�����a�w���`�A" + (int)plocaMon[pposition[*pround]] + "���i�H���ޥL���g�a�C\n";
					if (pmoney[*pround] > plocaMon[pposition[*pround]] + 150) {
						pmoney[*pround] -= plocaMon[pposition[*pround]];
						phouses[pposition[*pround]] += 1;
						if (phouses[pposition[*pround]] < 5)
							plocaMon[pposition[*pround]] *= 2;
						label_showEvent->Text += "��ܱ���[" + plocations[pposition[*pround]] + "]���Фl�C����" + phouses[pposition[*pround]] + "�ũЫΡC";
						owner[pposition[*pround]] = (*pround) + 1;
						if (*pround == 1)	//�G�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::RoyalBlue;
						else if (*pround == 2) 	//�T�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::MediumSeaGreen;
						else if (*pround == 3)	//�|�����a�ܧ�g�a�C��
							switch_map(pposition[*pround])->BackColor = System::Drawing::Color::Gold;
						show_map_label(switch_map(pposition[*pround]), pposition[*pround]);		//��s�a�Ϫ��Y�@��
					}
					else {
						label_showEvent->Text += "�ڵ����ީФl�A�C���~��C";
					}
				}
			}
		}
		if (*pround == 1)	//�G�����a
			show_player_label(label_player2, 1);	//��s���⪬�A��
		else if (*pround == 2) 	//�T�����a
			show_player_label(label_player3, 2);	//��s���⪬�A��
		else if (*pround == 3)	//�|�����a
			show_player_label(label_player4, 3);	//��s���⪬�A��
		button_continue->Visible = true;
	}
	//�q���۰ʪ����@�^�X��A���a���U�~��
	private: System::Void button_continue_Click(System::Object^  sender, System::EventArgs^  e) {
		button_continue->Visible = false;
		(*pround)++;
		if (*pround >= people) {
			*pround = 0;
			button_dice->Visible = true;	//�u�H���a���^�X�A��l���s�|�X�{
			label_showEvent->Visible = false;
			label_who->Text = "�{�b�O" + ((*pround) + 1) + "�����a���^�X";
			return;
		}
		autoGame();
	}
	//������map��label name
	private: Label^ switch_map(int n) {
		switch (n)
		{
		case 0:	return label_start;
		case 1:	return label1;
		case 2:	return label2;
		case 3:	return label3;
		case 4:	return label4;
		case 5:	return label5;
		case 6:	return label6;
		case 7:	return label7;
		case 8:	return label8;
		case 9:	return label9;
		case 10:return label10;
		case 11:return label11;
		case 12:return label12;
		case 13:return label13;
		case 14:return label14;
		case 15:return label15;
		case 16:return label16;
		case 17:return label17;
		case 18:return label18;
		case 19:return label19;
		case 20:return label20;
		case 21:return label21;
		case 22:return label22;
		case 23:return label23;
		case 24:return label24;
		case 25:return label25;
		case 26:return label26;
		case 27:return label27;
		case 28:return label28;
		case 29:return label29;
		default:
			break;
		}
	}
};
}
