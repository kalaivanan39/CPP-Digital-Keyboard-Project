#pragma once

namespace CPPDigitalKeyboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace F = System::Windows::Forms;

	/// <summary>
	/// Summary for DigitalKeyboard
	/// </summary>
	public ref class DigitalKeyboard : public System::Windows::Forms::Form
	{
	public:
		DigitalKeyboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DigitalKeyboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ chkesc;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ chkCapsLock;

	private: System::Windows::Forms::CheckBox^ chkShiftL;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;

	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ chkShiftR;

	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;

	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox23;
private: System::Windows::Forms::CheckBox^ checkBox24;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label1;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DigitalKeyboard::typeid));
			this->chkesc = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkCapsLock = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftL = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftR = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// chkesc
			// 
			this->chkesc->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkesc->BackColor = System::Drawing::Color::Black;
			this->chkesc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkesc->ForeColor = System::Drawing::Color::White;
			this->chkesc->Location = System::Drawing::Point(25, 83);
			this->chkesc->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chkesc->Name = L"chkesc";
			this->chkesc->Size = System::Drawing::Size(58, 65);
			this->chkesc->TabIndex = 0;
			this->chkesc->Text = L"ESC";
			this->chkesc->UseVisualStyleBackColor = false;
			this->chkesc->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::chkesc_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->BackColor = System::Drawing::Color::Black;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(25, 169);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(58, 65);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"~\r\n`";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->BackColor = System::Drawing::Color::Black;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(25, 262);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 65);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Tab\r\n ⇆";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox2_CheckedChanged);
			// 
			// chkCapsLock
			// 
			this->chkCapsLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCapsLock->BackColor = System::Drawing::Color::Black;
			this->chkCapsLock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkCapsLock->ForeColor = System::Drawing::Color::White;
			this->chkCapsLock->Location = System::Drawing::Point(25, 347);
			this->chkCapsLock->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chkCapsLock->Name = L"chkCapsLock";
			this->chkCapsLock->Size = System::Drawing::Size(135, 65);
			this->chkCapsLock->TabIndex = 3;
			this->chkCapsLock->Text = L"Caps Lock";
			this->chkCapsLock->UseVisualStyleBackColor = false;
			this->chkCapsLock->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::chkCapsLock_CheckedChanged);
			// 
			// chkShiftL
			// 
			this->chkShiftL->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftL->BackColor = System::Drawing::Color::Black;
			this->chkShiftL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkShiftL->ForeColor = System::Drawing::Color::White;
			this->chkShiftL->Location = System::Drawing::Point(25, 439);
			this->chkShiftL->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chkShiftL->Name = L"chkShiftL";
			this->chkShiftL->Size = System::Drawing::Size(155, 65);
			this->chkShiftL->TabIndex = 4;
			this->chkShiftL->Text = L"Shift\r\n  ⇧";
			this->chkShiftL->UseVisualStyleBackColor = false;
			this->chkShiftL->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::chkShiftL_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(101, 83);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 65);
			this->button1->TabIndex = 5;
			this->button1->Text = L"F1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(166, 83);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 65);
			this->button2->TabIndex = 6;
			this->button2->Text = L"F2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(232, 83);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 65);
			this->button3->TabIndex = 7;
			this->button3->Text = L"F3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(427, 83);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(58, 65);
			this->button4->TabIndex = 10;
			this->button4->Text = L"F6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(362, 83);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 65);
			this->button5->TabIndex = 9;
			this->button5->Text = L"F5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(297, 83);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 65);
			this->button6->TabIndex = 8;
			this->button6->Text = L"F4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(623, 83);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 65);
			this->button7->TabIndex = 13;
			this->button7->Text = L"F9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(558, 83);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 65);
			this->button8->TabIndex = 12;
			this->button8->Text = L"F8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(493, 83);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 65);
			this->button9->TabIndex = 11;
			this->button9->Text = L"F7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(819, 83);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(58, 65);
			this->button10->TabIndex = 16;
			this->button10->Text = L"F12";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(754, 83);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(58, 65);
			this->button11->TabIndex = 15;
			this->button11->Text = L"F11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(688, 83);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(58, 65);
			this->button12->TabIndex = 14;
			this->button12->Text = L"F10";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(819, 169);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(58, 65);
			this->button13->TabIndex = 28;
			this->button13->Text = L"+\r\n=";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(754, 169);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(58, 65);
			this->button14->TabIndex = 27;
			this->button14->Text = L"_\r\n-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(688, 169);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 65);
			this->button15->TabIndex = 26;
			this->button15->Text = L")\r\n0";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(623, 169);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(58, 65);
			this->button16->TabIndex = 25;
			this->button16->Text = L"(\r\n9";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(558, 169);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 65);
			this->button17->TabIndex = 24;
			this->button17->Text = L"*\r\n8";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(493, 169);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(58, 65);
			this->button18->TabIndex = 23;
			this->button18->Text = L"&&\r\n7";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Black;
			this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(427, 169);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(58, 65);
			this->button19->TabIndex = 22;
			this->button19->Text = L"^\r\n6";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Black;
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(362, 169);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(58, 65);
			this->button20->TabIndex = 21;
			this->button20->Text = L"%\r\n5";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Black;
			this->button21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(297, 169);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(58, 65);
			this->button21->TabIndex = 20;
			this->button21->Text = L"$\r\n4";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Black;
			this->button22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(232, 169);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(58, 65);
			this->button22->TabIndex = 19;
			this->button22->Text = L"#\r\n3";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Black;
			this->button23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(166, 169);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(58, 65);
			this->button23->TabIndex = 18;
			this->button23->Text = L"@\r\n2";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Black;
			this->button24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(101, 169);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(58, 65);
			this->button24->TabIndex = 17;
			this->button24->Text = L"!\r\n1";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Black;
			this->button25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(830, 262);
			this->button25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(58, 65);
			this->button25->TabIndex = 40;
			this->button25->Text = L"}\r\n]";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Black;
			this->button26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(765, 262);
			this->button26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(58, 65);
			this->button26->TabIndex = 39;
			this->button26->Text = L"{\r\n[";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Black;
			this->button27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(700, 262);
			this->button27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(58, 65);
			this->button27->TabIndex = 38;
			this->button27->Text = L"P";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Black;
			this->button28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(634, 262);
			this->button28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(58, 65);
			this->button28->TabIndex = 37;
			this->button28->Text = L"O";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Black;
			this->button29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(569, 262);
			this->button29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(58, 65);
			this->button29->TabIndex = 36;
			this->button29->Text = L"I";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Black;
			this->button30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(504, 262);
			this->button30->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(58, 65);
			this->button30->TabIndex = 35;
			this->button30->Text = L"U";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Black;
			this->button31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(439, 262);
			this->button31->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(58, 65);
			this->button31->TabIndex = 34;
			this->button31->Text = L"Y";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Black;
			this->button32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(373, 262);
			this->button32->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(58, 65);
			this->button32->TabIndex = 33;
			this->button32->Text = L"T";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Black;
			this->button33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(308, 262);
			this->button33->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(58, 65);
			this->button33->TabIndex = 32;
			this->button33->Text = L"R";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Black;
			this->button34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(243, 262);
			this->button34->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(58, 65);
			this->button34->TabIndex = 31;
			this->button34->Text = L"E";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Black;
			this->button35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(178, 262);
			this->button35->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(58, 65);
			this->button35->TabIndex = 30;
			this->button35->Text = L"W";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Black;
			this->button36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(112, 262);
			this->button36->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(58, 65);
			this->button36->TabIndex = 29;
			this->button36->Text = L"Q";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Black;
			this->button37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(895, 262);
			this->button37->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(58, 65);
			this->button37->TabIndex = 52;
			this->button37->Text = L"|\r\n\\";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(819, 347);
			this->button38->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(58, 65);
			this->button38->TabIndex = 51;
			this->button38->Text = L"\"\r\n\'";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Black;
			this->button39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::White;
			this->button39->Location = System::Drawing::Point(754, 347);
			this->button39->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(58, 65);
			this->button39->TabIndex = 50;
			this->button39->Text = L":\r\n;";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Black;
			this->button40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::White;
			this->button40->Location = System::Drawing::Point(688, 347);
			this->button40->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(58, 65);
			this->button40->TabIndex = 49;
			this->button40->Text = L"L";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Black;
			this->button41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::White;
			this->button41->Location = System::Drawing::Point(623, 347);
			this->button41->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(58, 65);
			this->button41->TabIndex = 48;
			this->button41->Text = L"K";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Black;
			this->button42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::White;
			this->button42->Location = System::Drawing::Point(558, 347);
			this->button42->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(58, 65);
			this->button42->TabIndex = 47;
			this->button42->Text = L"J";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Black;
			this->button43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::White;
			this->button43->Location = System::Drawing::Point(493, 347);
			this->button43->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(58, 65);
			this->button43->TabIndex = 46;
			this->button43->Text = L"H";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::Black;
			this->button44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::White;
			this->button44->Location = System::Drawing::Point(427, 347);
			this->button44->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(58, 65);
			this->button44->TabIndex = 45;
			this->button44->Text = L"G";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::Black;
			this->button45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::Color::White;
			this->button45->Location = System::Drawing::Point(362, 347);
			this->button45->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(58, 65);
			this->button45->TabIndex = 44;
			this->button45->Text = L"F";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::Black;
			this->button46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::White;
			this->button46->Location = System::Drawing::Point(297, 347);
			this->button46->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(58, 65);
			this->button46->TabIndex = 43;
			this->button46->Text = L"D";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::Black;
			this->button47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::White;
			this->button47->Location = System::Drawing::Point(232, 347);
			this->button47->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(58, 65);
			this->button47->TabIndex = 42;
			this->button47->Text = L"S";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::Color::White;
			this->button48->Location = System::Drawing::Point(166, 347);
			this->button48->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(58, 65);
			this->button48->TabIndex = 41;
			this->button48->Text = L"A";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::Black;
			this->button50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->ForeColor = System::Drawing::Color::White;
			this->button50->Location = System::Drawing::Point(961, 262);
			this->button50->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(69, 150);
			this->button50->TabIndex = 63;
			this->button50->Text = L"Enter\r\n  ↵";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::Black;
			this->button51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->ForeColor = System::Drawing::Color::White;
			this->button51->Location = System::Drawing::Point(895, 347);
			this->button51->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(58, 65);
			this->button51->TabIndex = 62;
			this->button51->Text = L"\?\r\n/";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::Black;
			this->button52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->ForeColor = System::Drawing::Color::White;
			this->button52->Location = System::Drawing::Point(709, 439);
			this->button52->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(58, 65);
			this->button52->TabIndex = 61;
			this->button52->Text = L">\r\n.";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::Black;
			this->button53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->ForeColor = System::Drawing::Color::White;
			this->button53->Location = System::Drawing::Point(643, 439);
			this->button53->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(58, 65);
			this->button53->TabIndex = 60;
			this->button53->Text = L"<\r\n,";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &DigitalKeyboard::button53_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::Black;
			this->button54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->ForeColor = System::Drawing::Color::White;
			this->button54->Location = System::Drawing::Point(578, 439);
			this->button54->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(58, 65);
			this->button54->TabIndex = 59;
			this->button54->Text = L"M";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::Black;
			this->button55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->ForeColor = System::Drawing::Color::White;
			this->button55->Location = System::Drawing::Point(513, 439);
			this->button55->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(58, 65);
			this->button55->TabIndex = 58;
			this->button55->Text = L"N";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::Black;
			this->button56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->ForeColor = System::Drawing::Color::White;
			this->button56->Location = System::Drawing::Point(448, 439);
			this->button56->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(58, 65);
			this->button56->TabIndex = 57;
			this->button56->Text = L"B";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::Black;
			this->button57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->ForeColor = System::Drawing::Color::White;
			this->button57->Location = System::Drawing::Point(382, 439);
			this->button57->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(58, 65);
			this->button57->TabIndex = 56;
			this->button57->Text = L"V";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::Black;
			this->button58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->ForeColor = System::Drawing::Color::White;
			this->button58->Location = System::Drawing::Point(317, 439);
			this->button58->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(58, 65);
			this->button58->TabIndex = 55;
			this->button58->Text = L"C";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::Black;
			this->button59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->ForeColor = System::Drawing::Color::White;
			this->button59->Location = System::Drawing::Point(252, 439);
			this->button59->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(58, 65);
			this->button59->TabIndex = 54;
			this->button59->Text = L"X";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::Black;
			this->button60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button60->ForeColor = System::Drawing::Color::White;
			this->button60->Location = System::Drawing::Point(187, 439);
			this->button60->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(58, 65);
			this->button60->TabIndex = 53;
			this->button60->Text = L"Z";
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &DigitalKeyboard::AtoZ);
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->BackColor = System::Drawing::Color::Black;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->ForeColor = System::Drawing::Color::White;
			this->checkBox5->Location = System::Drawing::Point(895, 169);
			this->checkBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(134, 65);
			this->checkBox5->TabIndex = 65;
			this->checkBox5->Text = L"Backspace \r\n ←\r\n";
			this->checkBox5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox5_CheckedChanged);
			// 
			// chkShiftR
			// 
			this->chkShiftR->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftR->BackColor = System::Drawing::Color::Black;
			this->chkShiftR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkShiftR->ForeColor = System::Drawing::Color::White;
			this->chkShiftR->Location = System::Drawing::Point(774, 439);
			this->chkShiftR->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chkShiftR->Name = L"chkShiftR";
			this->chkShiftR->Size = System::Drawing::Size(180, 65);
			this->chkShiftR->TabIndex = 66;
			this->chkShiftR->Text = L"Shift\r\n  ⇧";
			this->chkShiftR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkShiftR->UseVisualStyleBackColor = false;
			// 
			// checkBox7
			// 
			this->checkBox7->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox7->BackColor = System::Drawing::Color::Black;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->ForeColor = System::Drawing::Color::White;
			this->checkBox7->Location = System::Drawing::Point(25, 537);
			this->checkBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(68, 65);
			this->checkBox7->TabIndex = 67;
			this->checkBox7->Text = L"Ctrl";
			this->checkBox7->UseVisualStyleBackColor = false;
			// 
			// checkBox8
			// 
			this->checkBox8->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox8->BackColor = System::Drawing::Color::Black;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->ForeColor = System::Drawing::Color::White;
			this->checkBox8->Location = System::Drawing::Point(101, 537);
			this->checkBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(68, 65);
			this->checkBox8->TabIndex = 68;
			this->checkBox8->Text = L"Fn";
			this->checkBox8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox8->UseVisualStyleBackColor = false;
			// 
			// checkBox10
			// 
			this->checkBox10->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox10->BackColor = System::Drawing::Color::Black;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->ForeColor = System::Drawing::Color::White;
			this->checkBox10->Location = System::Drawing::Point(267, 537);
			this->checkBox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(68, 65);
			this->checkBox10->TabIndex = 70;
			this->checkBox10->Text = L"Alt";
			this->checkBox10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox10->UseVisualStyleBackColor = false;
			// 
			// checkBox11
			// 
			this->checkBox11->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox11->BackColor = System::Drawing::Color::Black;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->ForeColor = System::Drawing::Color::White;
			this->checkBox11->Location = System::Drawing::Point(353, 537);
			this->checkBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(349, 65);
			this->checkBox11->TabIndex = 71;
			this->checkBox11->Text = L"Space";
			this->checkBox11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox11->UseVisualStyleBackColor = false;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox12->BackColor = System::Drawing::Color::Black;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox12->ForeColor = System::Drawing::Color::White;
			this->checkBox12->Location = System::Drawing::Point(1056, 537);
			this->checkBox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(68, 65);
			this->checkBox12->TabIndex = 75;
			this->checkBox12->Text = L"→";
			this->checkBox12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox12->UseVisualStyleBackColor = false;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox12_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox13->BackColor = System::Drawing::Color::Black;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox13->ForeColor = System::Drawing::Color::White;
			this->checkBox13->Location = System::Drawing::Point(962, 537);
			this->checkBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(68, 65);
			this->checkBox13->TabIndex = 74;
			this->checkBox13->Text = L"↓";
			this->checkBox13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox13->UseVisualStyleBackColor = false;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox14->BackColor = System::Drawing::Color::Black;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox14->ForeColor = System::Drawing::Color::White;
			this->checkBox14->Location = System::Drawing::Point(886, 537);
			this->checkBox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(68, 65);
			this->checkBox14->TabIndex = 73;
			this->checkBox14->Text = L"←";
			this->checkBox14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox14->UseVisualStyleBackColor = false;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox15->BackColor = System::Drawing::Color::Black;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox15->ForeColor = System::Drawing::Color::White;
			this->checkBox15->Location = System::Drawing::Point(727, 537);
			this->checkBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(68, 65);
			this->checkBox15->TabIndex = 72;
			this->checkBox15->Text = L"Alt";
			this->checkBox15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox15->UseVisualStyleBackColor = false;
			// 
			// checkBox16
			// 
			this->checkBox16->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox16->BackColor = System::Drawing::Color::Black;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox16->ForeColor = System::Drawing::Color::White;
			this->checkBox16->Location = System::Drawing::Point(969, 83);
			this->checkBox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(79, 65);
			this->checkBox16->TabIndex = 76;
			this->checkBox16->Text = L"Insert";
			this->checkBox16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox16->UseVisualStyleBackColor = false;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox16_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox17->BackColor = System::Drawing::Color::Black;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox17->ForeColor = System::Drawing::Color::White;
			this->checkBox17->Location = System::Drawing::Point(962, 439);
			this->checkBox17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(68, 65);
			this->checkBox17->TabIndex = 77;
			this->checkBox17->Text = L"↑";
			this->checkBox17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox17->UseVisualStyleBackColor = false;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox17_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox18->BackColor = System::Drawing::Color::Black;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox18->ForeColor = System::Drawing::Color::White;
			this->checkBox18->Location = System::Drawing::Point(1056, 169);
			this->checkBox18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(68, 65);
			this->checkBox18->TabIndex = 78;
			this->checkBox18->Text = L"Home";
			this->checkBox18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox18->UseVisualStyleBackColor = false;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox18_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox19->BackColor = System::Drawing::Color::Black;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox19->ForeColor = System::Drawing::Color::White;
			this->checkBox19->Location = System::Drawing::Point(1056, 262);
			this->checkBox19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(68, 65);
			this->checkBox19->TabIndex = 79;
			this->checkBox19->Text = L"End";
			this->checkBox19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox19->UseVisualStyleBackColor = false;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox19_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox20->BackColor = System::Drawing::Color::Black;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox20->ForeColor = System::Drawing::Color::White;
			this->checkBox20->Location = System::Drawing::Point(1056, 347);
			this->checkBox20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(68, 65);
			this->checkBox20->TabIndex = 80;
			this->checkBox20->Text = L"Page\r\nUp";
			this->checkBox20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox20->UseVisualStyleBackColor = false;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox20_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox21->BackColor = System::Drawing::Color::Black;
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox21->ForeColor = System::Drawing::Color::White;
			this->checkBox21->Location = System::Drawing::Point(1056, 439);
			this->checkBox21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(68, 65);
			this->checkBox21->TabIndex = 81;
			this->checkBox21->Text = L"Page\r\nDown";
			this->checkBox21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox21->UseVisualStyleBackColor = false;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox21_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox22->BackColor = System::Drawing::Color::Black;
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox22->ForeColor = System::Drawing::Color::White;
			this->checkBox22->Location = System::Drawing::Point(895, 83);
			this->checkBox22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(68, 65);
			this->checkBox22->TabIndex = 82;
			this->checkBox22->Text = L"Prt\r\nScr";
			this->checkBox22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox22->UseVisualStyleBackColor = false;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox22_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox23->BackColor = System::Drawing::Color::Black;
			this->checkBox23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox23->ForeColor = System::Drawing::Color::White;
			this->checkBox23->Location = System::Drawing::Point(1056, 83);
			this->checkBox23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(68, 65);
			this->checkBox23->TabIndex = 83;
			this->checkBox23->Text = L"Del";
			this->checkBox23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox23->UseVisualStyleBackColor = false;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &DigitalKeyboard::checkBox23_CheckedChanged);
			// 
			// checkBox24
			// 
			this->checkBox24->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox24->BackColor = System::Drawing::Color::Black;
			this->checkBox24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox24->ForeColor = System::Drawing::Color::White;
			this->checkBox24->Location = System::Drawing::Point(803, 537);
			this->checkBox24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(68, 65);
			this->checkBox24->TabIndex = 84;
			this->checkBox24->Text = L"Ctrl";
			this->checkBox24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox24->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(187, 537);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(68, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 85;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Metropolis Extra Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(378, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(379, 24);
			this->label1->TabIndex = 86;
			this->label1->Text = L"kalaivanan39 Digital Keyboard";
			this->label1->Click += gcnew System::EventHandler(this, &DigitalKeyboard::label1_Click);
			// 
			// DigitalKeyboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1154, 642);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->chkShiftR);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chkShiftL);
			this->Controls->Add(this->chkCapsLock);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->chkesc);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"DigitalKeyboard";
			this->Text = L"DigitalKeyboard";
			this->Load += gcnew System::EventHandler(this, &DigitalKeyboard::DigitalKeyboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		protected:
			virtual property F::CreateParams^ CreateParams
			{
				F::CreateParams^ get() override
				{
					F::CreateParams^ param = __super::CreateParams;
					param->ExStyle |= 0x08000000;
					return param;
				}
			}
	private: System::Void chkesc_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SendKeys::Send("{ESCAPE}");
	}
private: System::Void DigitalKeyboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AtoZ(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	if (chkCapsLock->Checked == true || chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send((b->Text)->ToUpper());
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send((b->Text)->ToLower());
	}
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{ENTER}");
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{BACKSPACE}");
}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send(" ");
}
private: System::Void chkCapsLock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{CAPSLOCK}");
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{TAB}");
}
private: System::Void checkBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{HOME}");
}
private: System::Void checkBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{END}");
}
private: System::Void checkBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{PGUP}");
}
private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{PGDN}");
}
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{RIGHT}");
}
private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{LEFT}");
}
private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{DOWN}");
}
private: System::Void checkBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{UP}");
}
private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{DELETE}");
}
private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{PRINTSCREEN}");
}
private: System::Void checkBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{INSERT}");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F1}");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F2}");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F3}");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F4}");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F5}");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F6}");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F7}");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F8}");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F9}");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F10}");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F11}");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("{F12}");
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{~}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{`}");
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{!}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{1}");
	}
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{@}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{2}");
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{#}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{3}");
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{$}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{4}");
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{%}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{5}");
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{^}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{6}");
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{&}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{7}");
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{*}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{8}");
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{(}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{9}");
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{)}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{0}");
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{_}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{-}");
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{+}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{=}");
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{{}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{[}");
	}
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{}}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{]}");
	}
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{|}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{\}");
	}
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{:}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{;}");
	}
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{""}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{'}");
	}
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{?}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{/}");
	}
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{<}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{,}");
	}
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send("{>}");
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send("{.}");
	}
}
private: System::Void chkShiftL_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}

