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
	/// startForm ���K�n
	/// </summary>
	public ref class startForm : public System::Windows::Forms::Form
	{
	public:
		startForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"�L�n������", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(326, 517);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 110);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�}�l�s�_�I";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &startForm::button1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(383, 375);
			this->trackBar1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Minimum = 2;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(312, 90);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 2;
			this->trackBar1->Visible = false;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &startForm::trackBar1_ValueChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"�L�n������", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(326, 718);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 110);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�~��C��";
			this->button2->UseVisualStyleBackColor = false;
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
			this->button3->Font = (gcnew System::Drawing::Font(L"�L�n������", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(619, 828);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(222, 110);
			this->button3->TabIndex = 4;
			this->button3->Text = L"�_�I�}�l";
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
			this->label_people->BackColor = System::Drawing::Color::SteelBlue;
			this->label_people->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_people->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_people->Location = System::Drawing::Point(133, 337);
			this->label_people->Name = L"label_people";
			this->label_people->Size = System::Drawing::Size(583, 160);
			this->label_people->TabIndex = 6;
			this->label_people->Text = L"  �C���H��:  2";
			this->label_people->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_people->Visible = false;
			// 
			// label_name
			// 
			this->label_name->BackColor = System::Drawing::Color::SteelBlue;
			this->label_name->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_name->Location = System::Drawing::Point(133, 110);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(583, 160);
			this->label_name->TabIndex = 7;
			this->label_name->Text = L"  ���a�^��W��:  \r\n  (11�r�H��)";
			this->label_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_name->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->Location = System::Drawing::Point(448, 165);
			this->textBox_name->MaxLength = 11;
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(235, 46);
			this->textBox_name->TabIndex = 8;
			this->textBox_name->Text = L"Frodo";
			this->textBox_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_name->Visible = false;
			this->textBox_name->Click += gcnew System::EventHandler(this, &startForm::textBox_name_Click);
			// 
			// label_money
			// 
			this->label_money->BackColor = System::Drawing::Color::SteelBlue;
			this->label_money->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_money->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_money->Location = System::Drawing::Point(133, 555);
			this->label_money->Name = L"label_money";
			this->label_money->Size = System::Drawing::Size(583, 160);
			this->label_money->TabIndex = 9;
			this->label_money->Text = L"  ��l���B:  ";
			this->label_money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_money->Visible = false;
			// 
			// textBox_money
			// 
			this->textBox_money->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_money->Location = System::Drawing::Point(448, 610);
			this->textBox_money->MaxLength = 10;
			this->textBox_money->Name = L"textBox_money";
			this->textBox_money->Size = System::Drawing::Size(235, 46);
			this->textBox_money->TabIndex = 10;
			this->textBox_money->Text = L"1500";
			this->textBox_money->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_money->Visible = false;
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::SeaGreen;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"�L�n������", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_back->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_back->Location = System::Drawing::Point(351, 828);
			this->button_back->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(222, 110);
			this->button_back->TabIndex = 11;
			this->button_back->Text = L"�W�@��";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Visible = false;
			this->button_back->Click += gcnew System::EventHandler(this, &startForm::button_back_Click);
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
	//���U�}�l�s�_�I���s
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
	//���U�_�I�}�l���s
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//�^��w�]���A
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

		//�ǰѼƶi�h�C��form
		MainForm^ mf = gcnew MainForm;
		mf->people = trackBar1->Value;	//�H��
		mf->hidepeople();
		mf->playerName[0] = textBox_name->Text;	//�W�r
		int testInteger = 0;
		if (Int32::TryParse(textBox_money->Text, testInteger)) {  //�����ƶq���b�A���|�O�r���έt��
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
	//��ܳ]�w�H��
	private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		label_people->Text = "  �C���H��:  " + trackBar1->Value;
	}
	//�M���w�]�H�W
	private: System::Void textBox_name_Click(System::Object^  sender, System::EventArgs^  e) {
		if(textBox_name->Text == "Frodo")
			textBox_name->Text = "";
	}
	//�^��W�@��(�D�e��)
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
	}
};
}
