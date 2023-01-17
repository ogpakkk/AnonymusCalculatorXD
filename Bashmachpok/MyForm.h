#pragma once

namespace Bashmachpok {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ minus_plus;
	private: System::Windows::Forms::Button^ btn_percent;




	private: System::Windows::Forms::Button^ btn_divide;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_dot;

	private: System::Windows::Forms::Button^ btn_mult;

	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_equal;
	private: double first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::PictureBox^ pictureanonclub;

	private: System::Windows::Forms::Label^ label_str;

	private: System::Windows::Forms::PictureBox^ pictureBox2;




	protected:





	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->pictureanonclub = (gcnew System::Windows::Forms::PictureBox());
			this->label_str = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureanonclub))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Crimson;
			this->button_exit->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_exit->FlatAppearance->BorderSize = 2;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::Control;
			this->button_exit->Location = System::Drawing::Point(309, 5);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(35, 25);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"Х";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->result_label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(54, 57);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(243, 54);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::Blue;
			this->btn_ac->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_ac->FlatAppearance->BorderSize = 2;
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_ac->Location = System::Drawing::Point(16, 114);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(75, 55);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// minus_plus
			// 
			this->minus_plus->BackColor = System::Drawing::Color::Blue;
			this->minus_plus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minus_plus->FlatAppearance->BorderSize = 2;
			this->minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus_plus->ForeColor = System::Drawing::SystemColors::Control;
			this->minus_plus->Location = System::Drawing::Point(97, 114);
			this->minus_plus->Name = L"minus_plus";
			this->minus_plus->Size = System::Drawing::Size(75, 55);
			this->minus_plus->TabIndex = 2;
			this->minus_plus->Text = L"+/-";
			this->minus_plus->UseVisualStyleBackColor = false;
			this->minus_plus->Click += gcnew System::EventHandler(this, &MyForm::minus_plus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::Blue;
			this->btn_percent->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_percent->FlatAppearance->BorderSize = 2;
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_percent->Location = System::Drawing::Point(178, 114);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(75, 55);
			this->btn_percent->TabIndex = 2;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_divide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_divide->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_divide->FlatAppearance->BorderSize = 2;
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_divide->Location = System::Drawing::Point(259, 114);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(75, 55);
			this->btn_divide->TabIndex = 2;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Blue;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(16, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 55);
			this->button5->TabIndex = 2;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Blue;
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(16, 236);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 55);
			this->button6->TabIndex = 2;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Blue;
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(16, 297);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 55);
			this->button7->TabIndex = 2;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Blue;
			this->button8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(16, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(156, 55);
			this->button8->TabIndex = 2;
			this->button8->Text = L"0";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Blue;
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(97, 175);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 55);
			this->button9->TabIndex = 2;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Blue;
			this->button10->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(97, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 55);
			this->button10->TabIndex = 2;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Blue;
			this->button11->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(97, 297);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 55);
			this->button11->TabIndex = 2;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Blue;
			this->button13->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(178, 175);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 55);
			this->button13->TabIndex = 2;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Blue;
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Location = System::Drawing::Point(178, 236);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 55);
			this->button14->TabIndex = 2;
			this->button14->Text = L"6";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Blue;
			this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Location = System::Drawing::Point(178, 297);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 55);
			this->button15->TabIndex = 2;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Blue;
			this->btn_dot->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_dot->FlatAppearance->BorderSize = 2;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_dot->Location = System::Drawing::Point(178, 358);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(75, 55);
			this->btn_dot->TabIndex = 2;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_mult->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_mult->FlatAppearance->BorderSize = 2;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_mult->Location = System::Drawing::Point(259, 175);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(75, 55);
			this->btn_mult->TabIndex = 2;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_minus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_minus->FlatAppearance->BorderSize = 2;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_minus->Location = System::Drawing::Point(259, 236);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(75, 55);
			this->btn_minus->TabIndex = 2;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_plus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_plus->FlatAppearance->BorderSize = 2;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_plus->Location = System::Drawing::Point(259, 297);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(75, 55);
			this->btn_plus->TabIndex = 2;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_equal->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_equal->FlatAppearance->BorderSize = 2;
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_equal->Location = System::Drawing::Point(259, 358);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(75, 55);
			this->btn_equal->TabIndex = 2;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// pictureanonclub
			// 
			this->pictureanonclub->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureanonclub.Image")));
			this->pictureanonclub->Location = System::Drawing::Point(3, 3);
			this->pictureanonclub->Name = L"pictureanonclub";
			this->pictureanonclub->Size = System::Drawing::Size(49, 46);
			this->pictureanonclub->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureanonclub->TabIndex = 3;
			this->pictureanonclub->TabStop = false;
			this->pictureanonclub->Click += gcnew System::EventHandler(this, &MyForm::pictureanonclub_Click);
			// 
			// label_str
			// 
			this->label_str->AutoSize = true;
			this->label_str->Font = (gcnew System::Drawing::Font(L"Cambria", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_str->Location = System::Drawing::Point(17, 418);
			this->label_str->Name = L"label_str";
			this->label_str->Size = System::Drawing::Size(315, 12);
			this->label_str->TabIndex = 4;
			this->label_str->Text = L"Протестировано сообществом Anonymus, рекомендуется!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-10, -13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(373, 468);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(350, 448);
			this->Controls->Add(this->label_str);
			this->Controls->Add(this->pictureanonclub);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->minus_plus);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор BASHMAKE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureanonclub))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_equal) {
			this->result_label->Text = button->Text;
			this->is_equal = false;
		}
		else
			this->result_label->Text = this->result_label->Text + button->Text;


	}



	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}

	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;




		double second = System::Convert::ToDouble(this->result_label->Text);
		double res;
		switch (this->user_action)
		{
		case '+': res = this->first_num + second; break;
		case '-':
			if ((first_num == 1000) && (second == 7)) {
				res = 0;
				this->result_label->ForeColor = Color::Red;
				MessageBox::Show(this, "Похоже что ты гуль 1000-7???", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num - second;
			break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second == 0) {
				res = 0;
				this->result_label->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "Действие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;

		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";

	} 
	private: System::Void minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if (!text->Contains(","))
			this->result_label->Text = text + ",";
	}
				
private: System::Void pictureanonclub_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Привет что та нашел секретную информацию что попасть в клуб анонимусов пиши мне в тг Akumazxcqqe", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
};
}
