#pragma once
#include "MainForm.h"

namespace wp_hw06_4105056005 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// startForm 的摘要
	/// </summary>
	public ref class startForm : public System::Windows::Forms::Form
	{
	public:
		startForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~startForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_people;

	private: System::Windows::Forms::Label^  label_name;
	private: System::Windows::Forms::TextBox^  textBox_name;
	private: System::Windows::Forms::Label^  label_money;
	private: System::Windows::Forms::TextBox^  textBox_money;
	private: System::Windows::Forms::Button^  button_back;
	private: System::Windows::Forms::Label^  continue_background;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button_load;












	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(startForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_people = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label_money = (gcnew System::Windows::Forms::Label());
			this->textBox_money = (gcnew System::Windows::Forms::TextBox());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->continue_background = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_load = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(326, 517);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 110);
			this->button1->TabIndex = 0;
			this->button1->Text = L"開始新冒險";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &startForm::button1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::OliveDrab;
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(374, 349);
			this->trackBar1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Minimum = 2;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(312, 90);
			this->trackBar1->TabIndex = 3;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 2;
			this->trackBar1->Visible = false;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &startForm::trackBar1_ValueChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(326, 718);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 110);
			this->button2->TabIndex = 1;
			this->button2->Text = L"繼續遊戲";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &startForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-3, 75);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 310);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SeaGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(623, 819);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(205, 91);
			this->button3->TabIndex = 4;
			this->button3->Text = L"冒險開始";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &startForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(632, 941);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"@made by Yun Ting";
			// 
			// label_people
			// 
			this->label_people->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->label_people->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_people->ForeColor = System::Drawing::Color::White;
			this->label_people->Location = System::Drawing::Point(136, 327);
			this->label_people->Name = L"label_people";
			this->label_people->Size = System::Drawing::Size(583, 144);
			this->label_people->TabIndex = 6;
			this->label_people->Text = L"  遊玩人數:  2";
			this->label_people->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_people->Visible = false;
			// 
			// label_name
			// 
			this->label_name->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->label_name->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_name->ForeColor = System::Drawing::Color::White;
			this->label_name->Location = System::Drawing::Point(136, 127);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(583, 140);
			this->label_name->TabIndex = 7;
			this->label_name->Text = L"  玩家英文名稱:  \r\n  (11字以內)";
			this->label_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_name->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->Location = System::Drawing::Point(451, 172);
			this->textBox_name->MaxLength = 11;
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(235, 46);
			this->textBox_name->TabIndex = 2;
			this->textBox_name->Text = L"Frodo";
			this->textBox_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_name->Visible = false;
			this->textBox_name->Click += gcnew System::EventHandler(this, &startForm::textBox_name_Click);
			// 
			// label_money
			// 
			this->label_money->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->label_money->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_money->ForeColor = System::Drawing::Color::White;
			this->label_money->Location = System::Drawing::Point(142, 532);
			this->label_money->Name = L"label_money";
			this->label_money->Size = System::Drawing::Size(577, 141);
			this->label_money->TabIndex = 9;
			this->label_money->Text = L"  初始金額:  ";
			this->label_money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_money->Visible = false;
			// 
			// textBox_money
			// 
			this->textBox_money->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_money->Location = System::Drawing::Point(374, 578);
			this->textBox_money->MaxLength = 10;
			this->textBox_money->Name = L"textBox_money";
			this->textBox_money->Size = System::Drawing::Size(312, 46);
			this->textBox_money->TabIndex = 4;
			this->textBox_money->Text = L"1500";
			this->textBox_money->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_money->Visible = false;
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::SeaGreen;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_back->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_back->Location = System::Drawing::Point(43, 819);
			this->button_back->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(186, 91);
			this->button_back->TabIndex = 11;
			this->button_back->Text = L"上一頁";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Visible = false;
			this->button_back->Click += gcnew System::EventHandler(this, &startForm::button_back_Click);
			// 
			// continue_background
			// 
			this->continue_background->BackColor = System::Drawing::Color::DarkSlateGray;
			this->continue_background->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->continue_background->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->continue_background->Location = System::Drawing::Point(73, 75);
			this->continue_background->Name = L"continue_background";
			this->continue_background->Size = System::Drawing::Size(723, 714);
			this->continue_background->TabIndex = 12;
			this->continue_background->Text = L"\r\nSave.txt\r\n選取紀錄檔:";
			this->continue_background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->continue_background->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 36;
			this->listBox1->Location = System::Drawing::Point(171, 288);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(537, 326);
			this->listBox1->TabIndex = 13;
			this->listBox1->Visible = false;
			this->listBox1->Click += gcnew System::EventHandler(this, &startForm::listBox1_Click);
			// 
			// button_load
			// 
			this->button_load->BackColor = System::Drawing::Color::SeaGreen;
			this->button_load->Enabled = false;
			this->button_load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_load->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_load->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_load->Location = System::Drawing::Point(326, 662);
			this->button_load->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_load->Name = L"button_load";
			this->button_load->Size = System::Drawing::Size(205, 91);
			this->button_load->TabIndex = 14;
			this->button_load->Text = L"確定";
			this->button_load->UseVisualStyleBackColor = false;
			this->button_load->Visible = false;
			this->button_load->Click += gcnew System::EventHandler(this, &startForm::button_load_Click);
			// 
			// startForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(854, 979);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_load);
			this->Controls->Add(this->continue_background);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->textBox_money);
			this->Controls->Add(this->label_money);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_people);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"startForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Start page: Lord of the monopoly";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//按下開始新冒險按鈕
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Visible = false;
		button1->Visible = false;
		pictureBox1->Visible = false;

		textBox_name->Visible = true;
		textBox_money->Visible = true;
		trackBar1->Visible = true;
		label_people->Visible = true;
		label_name->Visible = true;
		button3->Visible = true;
		label_money->Visible = true;
		button_back->Visible = true;
	}
	//按下冒險開始按鈕
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//回到預設狀態
		button2->Visible = true;
		button1->Visible = true;
		pictureBox1->Visible = true;

		trackBar1->Visible = false;
		textBox_money->Visible = false;
		label_people->Visible = false;
		label_name->Visible = false;
		button3->Visible = false;
		textBox_name->Visible = false;
		label_money->Visible = false;
		button_back->Visible = false;

		//傳參數進去遊戲form
		MainForm^ mf = gcnew MainForm;
		mf->people = trackBar1->Value;	//人數
		mf->hidepeople();
		mf->playerName[0] = textBox_name->Text;	//名字
		int testInteger = 0;
		if (Int32::TryParse(textBox_money->Text, testInteger)) {  //金錢數量防呆，不會是字母或負數
			if (testInteger <= 0)
				mf->pmoney[0] = 1500;
			else
				mf->pmoney[0] = testInteger;
		}
		else
			mf->pmoney[0] = 1500;
		mf->initialize();
		mf->ShowDialog();

		textBox_name->Text = "Frodo";
		textBox_money->Text = "1500";
		trackBar1->Value = 2;
	}
	//顯示設定人數
	private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		label_people->Text = "  遊玩人數:  " + trackBar1->Value;
	}
	//清除預設人名
	private: System::Void textBox_name_Click(System::Object^  sender, System::EventArgs^  e) {
		if(textBox_name->Text == "Frodo")
			textBox_name->Text = "";
	}
	//回到上一頁(主畫面)
	private: System::Void button_back_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Visible = true;
		button1->Visible = true;
		pictureBox1->Visible = true;

		trackBar1->Visible = false;
		textBox_money->Visible = false;
		label_people->Visible = false;
		label_name->Visible = false;
		button3->Visible = false;
		textBox_name->Visible = false;
		label_money->Visible = false;
		button_back->Visible = false;
		button_load->Visible = false;
		listBox1->Visible = false;
		continue_background->Visible = false;
		button_load->Enabled = false;
		listBox1->Items->Clear();
	}
	//讀檔按鈕
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Visible = false;
		button1->Visible = false;
		pictureBox1->Visible = false;
		button_load->Visible = true;
		listBox1->Visible = true;
		continue_background->Visible = true;
		button_back->Visible = true;
		
		int^ count = gcnew int;		//幾個紀錄
		array<String^>^ words;	//分割句子
		String^ str;

		StreamReader^ sl = File::OpenText("Save.txt");
		count = 0;
		while ((str = sl->ReadLine()) != nullptr) {
			if (String::Compare(str, "Save File:") == 0)
				(*count)++;
			if (str->StartsWith("Save time-")) {
				words = str->Split('-');
				listBox1->Items->Add("No." + *count + "存檔: " + words[1]);
			}
		}
		if (*count == 0) {
			continue_background->Text = "\n選取紀錄檔:\n無任何存檔紀錄";
			button_load->Visible = false;
		}
		sl->Close();
	}
	//有選擇檔案，才可以按下確認鈕
	private: System::Void listBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(listBox1->SelectedIndex != -1)
			button_load->Enabled = true;
	}
	//選擇完檔案
	private: System::Void button_load_Click(System::Object^  sender, System::EventArgs^  e) {
		int^ lines = gcnew int; //一個紀錄有十行文字，一行空白
		int^ count = gcnew int;		//幾個紀錄
		array<String^>^ words;	//分割句子
		String^ str;

		//傳參數進去遊戲form
		MainForm^ mf = gcnew MainForm;
		StreamReader^sl = File::OpenText("Save.txt");
		int^ whichFile = gcnew int;	//選擇第幾個紀錄
		*whichFile = listBox1->SelectedIndex + 1;
		count = 0;
		*lines = 1;
		while ((str = sl->ReadLine()) != nullptr) {
			if (String::Compare(str, "Save File:") == 0)
				(*count)++;
			if (*count == *whichFile) {
				words = str->Split(':');
				switch (*lines)
				{
				case 2:		//第二行是玩家名字
					mf->playerName[0] = words[1];
					break;
				case 3:		//第三行是玩家數量
					mf->people = Convert::ToInt32(words[1]);
					break;
				case 4:		//第四行是各玩家金錢
					words = words[1]->Split('/');
					mf->pmoney[0] = Convert::ToInt32(words[0]);
					mf->pmoney[1] = Convert::ToInt32(words[1]);
					mf->pmoney[2] = Convert::ToInt32(words[2]);
					mf->pmoney[3] = Convert::ToInt32(words[3]);
					break;
				case 5:		//第五行是各玩家地點
					words = words[1]->Split('/');
					mf->pposition[0] = Convert::ToInt32(words[0]);
					mf->pposition[1] = Convert::ToInt32(words[1]);
					mf->pposition[2] = Convert::ToInt32(words[2]);
					mf->pposition[3] = Convert::ToInt32(words[3]);
					break;
				case 6:		//第六行是各玩家特殊卡片數量
					words = words[1]->Split('/');
					mf->pnoTax[0] = Convert::ToInt32(words[0]);
					mf->pnoTax[1] = Convert::ToInt32(words[1]);
					mf->pnoTax[2] = Convert::ToInt32(words[2]);
					mf->pnoTax[3] = Convert::ToInt32(words[3]);
					break;
				case 7:	//第七行是玩家存活與否
					words = words[1]->Split('/');
					mf->alive[0] = Convert::ToInt32(words[0]);
					mf->alive[1] = Convert::ToInt32(words[1]);
					mf->alive[2] = Convert::ToInt32(words[2]);
					mf->alive[3] = Convert::ToInt32(words[3]);
					break;
				case 8:		//第八行是地點價格
					words = words[1]->Split('/');
					for (int^ i = 0; *i < 30; (*i)++)
						mf->plocaMon[*i] = Convert::ToInt32(words[*i]);
					break;
				case 9:		//第九行是房子數量
					words = words[1]->Split('/');
					for (int^ i = 0; *i < 30; (*i)++)
						mf->phouses[*i] = Convert::ToInt32(words[*i]);
					break;
				case 10:	//第十行是房子主人
					words = words[1]->Split('/');
					for (int^ i = 0; *i < 30; (*i)++) {
						mf->owner[*i] = Convert::ToInt32(words[*i]);
						//變換土地顏色
						if(mf->owner[*i] == 1)	//一號玩家的土地
							mf->switch_map(*i)->BackColor = System::Drawing::Color::LightCoral;
						else if (mf->owner[*i] == 2)	//二號玩家的土地
							mf->switch_map(*i)->BackColor = System::Drawing::Color::RoyalBlue;
						else if (mf->owner[*i] == 3)	//三號玩家的土地
							mf->switch_map(*i)->BackColor = System::Drawing::Color::MediumSeaGreen;
						else if (mf->owner[*i] == 4)	//四號玩家的土地
							mf->switch_map(*i)->BackColor = System::Drawing::Color::Gold;
					}
					break;
				default:
					break;
				}
				(*lines)++;
			}
		}
		sl->Close();
		mf->hidepeople();
		mf->initialShare();
		mf->ShowDialog();
	}
};
}
