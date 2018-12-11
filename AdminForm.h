#pragma once

namespace wp_hw06_4105056005 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AdminForm 的摘要
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picture_background;
	private: System::Windows::Forms::Label^  label_description;
	private: System::Windows::Forms::Label^  label_money;
	public: System::Windows::Forms::TextBox^  textBox_money;
	private: System::Windows::Forms::Button^  button_commit;
	public: System::Windows::Forms::TextBox^  textBox_p2money;
	private: System::Windows::Forms::Label^  label_p2money;
	public: System::Windows::Forms::TextBox^  textBox_p3money;
	public: System::Windows::Forms::Label^  label_p3money;
	public: System::Windows::Forms::TextBox^  textBox_p4money;
	public: System::Windows::Forms::Label^  label_p4money;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->picture_background = (gcnew System::Windows::Forms::PictureBox());
			this->label_description = (gcnew System::Windows::Forms::Label());
			this->label_money = (gcnew System::Windows::Forms::Label());
			this->textBox_money = (gcnew System::Windows::Forms::TextBox());
			this->button_commit = (gcnew System::Windows::Forms::Button());
			this->textBox_p2money = (gcnew System::Windows::Forms::TextBox());
			this->label_p2money = (gcnew System::Windows::Forms::Label());
			this->textBox_p3money = (gcnew System::Windows::Forms::TextBox());
			this->label_p3money = (gcnew System::Windows::Forms::Label());
			this->textBox_p4money = (gcnew System::Windows::Forms::TextBox());
			this->label_p4money = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_background))->BeginInit();
			this->SuspendLayout();
			// 
			// picture_background
			// 
			this->picture_background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->picture_background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_background.Image")));
			this->picture_background->Location = System::Drawing::Point(0, 0);
			this->picture_background->Name = L"picture_background";
			this->picture_background->Size = System::Drawing::Size(836, 1177);
			this->picture_background->TabIndex = 0;
			this->picture_background->TabStop = false;
			// 
			// label_description
			// 
			this->label_description->AutoSize = true;
			this->label_description->BackColor = System::Drawing::Color::DimGray;
			this->label_description->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_description->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_description->Location = System::Drawing::Point(27, 56);
			this->label_description->Name = L"label_description";
			this->label_description->Size = System::Drawing::Size(416, 80);
			this->label_description->TabIndex = 1;
			this->label_description->Text = L"以下為各玩家的數據，\r\n調整完關掉此視窗或按確認 :";
			this->label_description->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_money
			// 
			this->label_money->BackColor = System::Drawing::Color::Gray;
			this->label_money->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_money->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_money->Location = System::Drawing::Point(75, 264);
			this->label_money->Name = L"label_money";
			this->label_money->Size = System::Drawing::Size(669, 108);
			this->label_money->TabIndex = 2;
			this->label_money->Text = L" 一號玩家金錢:\r\n (請輸入整數)";
			this->label_money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_money
			// 
			this->textBox_money->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_money->Location = System::Drawing::Point(331, 295);
			this->textBox_money->MaxLength = 20;
			this->textBox_money->Name = L"textBox_money";
			this->textBox_money->Size = System::Drawing::Size(372, 46);
			this->textBox_money->TabIndex = 3;
			this->textBox_money->Text = L"1500";
			this->textBox_money->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_commit
			// 
			this->button_commit->BackColor = System::Drawing::Color::DarkGray;
			this->button_commit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_commit->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_commit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_commit->Location = System::Drawing::Point(312, 960);
			this->button_commit->Name = L"button_commit";
			this->button_commit->Size = System::Drawing::Size(182, 94);
			this->button_commit->TabIndex = 11;
			this->button_commit->Text = L"確認";
			this->button_commit->UseVisualStyleBackColor = false;
			this->button_commit->Click += gcnew System::EventHandler(this, &AdminForm::button_commit_Click);
			// 
			// textBox_p2money
			// 
			this->textBox_p2money->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p2money->Location = System::Drawing::Point(332, 455);
			this->textBox_p2money->MaxLength = 20;
			this->textBox_p2money->Name = L"textBox_p2money";
			this->textBox_p2money->Size = System::Drawing::Size(372, 46);
			this->textBox_p2money->TabIndex = 6;
			this->textBox_p2money->Text = L"1500";
			this->textBox_p2money->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_p2money
			// 
			this->label_p2money->BackColor = System::Drawing::Color::Gray;
			this->label_p2money->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_p2money->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_p2money->Location = System::Drawing::Point(75, 424);
			this->label_p2money->Name = L"label_p2money";
			this->label_p2money->Size = System::Drawing::Size(669, 108);
			this->label_p2money->TabIndex = 5;
			this->label_p2money->Text = L" 二號玩家金錢:\r\n (請輸入整數)";
			this->label_p2money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_p3money
			// 
			this->textBox_p3money->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p3money->Location = System::Drawing::Point(332, 612);
			this->textBox_p3money->MaxLength = 20;
			this->textBox_p3money->Name = L"textBox_p3money";
			this->textBox_p3money->Size = System::Drawing::Size(372, 46);
			this->textBox_p3money->TabIndex = 8;
			this->textBox_p3money->Text = L"1500";
			this->textBox_p3money->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_p3money->Visible = false;
			// 
			// label_p3money
			// 
			this->label_p3money->BackColor = System::Drawing::Color::Gray;
			this->label_p3money->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_p3money->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_p3money->Location = System::Drawing::Point(75, 581);
			this->label_p3money->Name = L"label_p3money";
			this->label_p3money->Size = System::Drawing::Size(669, 108);
			this->label_p3money->TabIndex = 7;
			this->label_p3money->Text = L" 三號玩家金錢:\r\n (請輸入整數)";
			this->label_p3money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_p3money->Visible = false;
			// 
			// textBox_p4money
			// 
			this->textBox_p4money->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p4money->Location = System::Drawing::Point(332, 780);
			this->textBox_p4money->MaxLength = 20;
			this->textBox_p4money->Name = L"textBox_p4money";
			this->textBox_p4money->Size = System::Drawing::Size(372, 46);
			this->textBox_p4money->TabIndex = 10;
			this->textBox_p4money->Text = L"1500";
			this->textBox_p4money->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_p4money->Visible = false;
			// 
			// label_p4money
			// 
			this->label_p4money->BackColor = System::Drawing::Color::Gray;
			this->label_p4money->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_p4money->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_p4money->Location = System::Drawing::Point(75, 749);
			this->label_p4money->Name = L"label_p4money";
			this->label_p4money->Size = System::Drawing::Size(669, 108);
			this->label_p4money->TabIndex = 9;
			this->label_p4money->Text = L" 四號玩家金錢:\r\n (請輸入整數)";
			this->label_p4money->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_p4money->Visible = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(819, 1106);
			this->Controls->Add(this->textBox_p4money);
			this->Controls->Add(this->label_p4money);
			this->Controls->Add(this->textBox_p3money);
			this->Controls->Add(this->label_p3money);
			this->Controls->Add(this->textBox_p2money);
			this->Controls->Add(this->label_p2money);
			this->Controls->Add(this->button_commit);
			this->Controls->Add(this->textBox_money);
			this->Controls->Add(this->label_money);
			this->Controls->Add(this->label_description);
			this->Controls->Add(this->picture_background);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(845, 1177);
			this->Name = L"AdminForm";
			this->Text = L"Lord of the monopoly_調整數據";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_background))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//確認按鈕，關掉視窗
	private: System::Void button_commit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
