#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <random>
#include "notqueue.h"
#include "notstack.h"
#include "MyForm1.h"

namespace anghami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Autumn
	/// </summary>
	public ref class Autumn : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;

		Autumn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Autumn(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Autumn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::Button^ explore;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ play;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::TrackBar^ volumecontrol;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ trackname;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ artist;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ rand2;
	private: System::Windows::Forms::Button^ rand;
	private: System::Windows::Forms::Button^ reset;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Autumn::typeid));
			this->search = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->explore = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->play = (gcnew System::Windows::Forms::Button());
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->volumecontrol = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->artist = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->rand2 = (gcnew System::Windows::Forms::Button());
			this->rand = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.BackgroundImage")));
			this->search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->search->Enabled = false;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->search->Location = System::Drawing::Point(200, 5);
			this->search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(654, 63);
			this->search->TabIndex = 26;
			this->search->UseVisualStyleBackColor = false;
			// 
			// search_box
			// 
			this->search_box->AcceptsReturn = true;
			this->search_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->search_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_box->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->search_box->Location = System::Drawing::Point(232, 20);
			this->search_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(561, 36);
			this->search_box->TabIndex = 27;
			// 
			// explore
			// 
			this->explore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->explore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"explore.BackgroundImage")));
			this->explore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->explore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->explore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->explore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->explore->Location = System::Drawing::Point(16, 162);
			this->explore->Name = L"explore";
			this->explore->Size = System::Drawing::Size(90, 108);
			this->explore->TabIndex = 28;
			this->explore->UseVisualStyleBackColor = false;
			this->explore->Click += gcnew System::EventHandler(this, &Autumn::explore_Click);
			// 
			// yourlibrary
			// 
			this->yourlibrary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->yourlibrary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yourlibrary.BackgroundImage")));
			this->yourlibrary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->yourlibrary->Cursor = System::Windows::Forms::Cursors::Hand;
			this->yourlibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yourlibrary->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->yourlibrary->Location = System::Drawing::Point(12, 291);
			this->yourlibrary->Name = L"yourlibrary";
			this->yourlibrary->Size = System::Drawing::Size(102, 108);
			this->yourlibrary->TabIndex = 29;
			this->yourlibrary->UseVisualStyleBackColor = false;
			this->yourlibrary->Click += gcnew System::EventHandler(this, &Autumn::yourlibrary_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Location = System::Drawing::Point(177, 122);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 98);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(284, 135);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(218, 72);
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(177, 418);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(106, 98);
			this->pictureBox3->TabIndex = 32;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(177, 291);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(106, 98);
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(177, 800);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(106, 98);
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(177, 663);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(106, 98);
			this->pictureBox6->TabIndex = 35;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(177, 534);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(106, 98);
			this->pictureBox7->TabIndex = 36;
			this->pictureBox7->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->Location = System::Drawing::Point(334, 312);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(960, 47);
			this->label1->TabIndex = 37;
			this->label1->Text = L"After Life                       Ali Gatie                   2:38 ";
			this->label1->Click += gcnew System::EventHandler(this, &Autumn::afterlife_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->Location = System::Drawing::Point(334, 443);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(968, 47);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Daylight                         David Kushner         3:32 ";
			this->label2->Click += gcnew System::EventHandler(this, &Autumn::daylight_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->Location = System::Drawing::Point(334, 554);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(955, 47);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Lift Me Up                      Rihanna                   3:16";
			this->label3->Click += gcnew System::EventHandler(this, &Autumn::liftmeup_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->Location = System::Drawing::Point(334, 685);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(956, 47);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Snow On The Beach     Taylor Swift              4:16";
			this->label4->Click += gcnew System::EventHandler(this, &Autumn::snow_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->Location = System::Drawing::Point(334, 818);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(961, 47);
			this->label5->TabIndex = 41;
			this->label5->Text = L"This December              Ricky Montgomery   3:01";
			this->label5->Click += gcnew System::EventHandler(this, &Autumn::december_Click);
			// 
			// play
			// 
			this->play->BackColor = System::Drawing::SystemColors::Desktop;
			this->play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.BackgroundImage")));
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->play->Location = System::Drawing::Point(838, 948);
			this->play->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(81, 71);
			this->play->TabIndex = 42;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &Autumn::play_Click);
			// 
			// playprev
			// 
			this->playprev->BackColor = System::Drawing::SystemColors::Desktop;
			this->playprev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playprev.BackgroundImage")));
			this->playprev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playprev->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playprev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playprev->Location = System::Drawing::Point(798, 966);
			this->playprev->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playprev->Name = L"playprev";
			this->playprev->Size = System::Drawing::Size(42, 40);
			this->playprev->TabIndex = 43;
			this->playprev->UseVisualStyleBackColor = false;
			this->playprev->Click += gcnew System::EventHandler(this, &Autumn::playprev_Click);
			// 
			// playnext
			// 
			this->playnext->BackColor = System::Drawing::SystemColors::Desktop;
			this->playnext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playnext.BackgroundImage")));
			this->playnext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playnext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playnext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playnext->Location = System::Drawing::Point(916, 966);
			this->playnext->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playnext->Name = L"playnext";
			this->playnext->Size = System::Drawing::Size(42, 40);
			this->playnext->TabIndex = 44;
			this->playnext->UseVisualStyleBackColor = false;
			this->playnext->Click += gcnew System::EventHandler(this, &Autumn::playnext_Click);
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(628, 977);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(49, 20);
			this->start->TabIndex = 45;
			this->start->Text = L"00:00";
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->BackColor = System::Drawing::SystemColors::Desktop;
			this->end->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->end->Location = System::Drawing::Point(1076, 975);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(49, 20);
			this->end->TabIndex = 46;
			this->end->Text = L"00:00";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::Purple;
			this->progressBar1->Location = System::Drawing::Point(630, 1020);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(495, 5);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 47;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Autumn::progressBar1_MouseClick);
			// 
			// volume
			// 
			this->volume->BackColor = System::Drawing::SystemColors::Desktop;
			this->volume->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volume.BackgroundImage")));
			this->volume->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volume->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volume->Location = System::Drawing::Point(1240, 977);
			this->volume->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(51, 35);
			this->volume->TabIndex = 48;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &Autumn::volume_Click);
			// 
			// volumecontrol
			// 
			this->volumecontrol->AutoSize = false;
			this->volumecontrol->BackColor = System::Drawing::SystemColors::Desktop;
			this->volumecontrol->Location = System::Drawing::Point(1293, 977);
			this->volumecontrol->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->volumecontrol->Maximum = 100;
			this->volumecontrol->Name = L"volumecontrol";
			this->volumecontrol->Size = System::Drawing::Size(314, 46);
			this->volumecontrol->TabIndex = 49;
			this->volumecontrol->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumecontrol->Value = 50;
			this->volumecontrol->Scroll += gcnew System::EventHandler(this, &Autumn::volumecontrol_Scroll);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(63, 955);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(80, 80);
			this->pictureBox8->TabIndex = 50;
			this->pictureBox8->TabStop = false;
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(175, 968);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(0, 29);
			this->trackname->TabIndex = 51;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->button1->Location = System::Drawing::Point(1328, 818);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 120);
			this->button1->TabIndex = 53;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Autumn::button1_Click);
			// 
			// artist
			// 
			this->artist->AutoSize = true;
			this->artist->BackColor = System::Drawing::SystemColors::Desktop;
			this->artist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artist->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->artist->Location = System::Drawing::Point(175, 1002);
			this->artist->Name = L"artist";
			this->artist->Size = System::Drawing::Size(0, 29);
			this->artist->TabIndex = 54;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Autumn::timer1_Tick);
			// 
			// rand2
			// 
			this->rand2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand2.BackgroundImage")));
			this->rand2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand2->Enabled = false;
			this->rand2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand2->Location = System::Drawing::Point(981, 968);
			this->rand2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rand2->Name = L"rand2";
			this->rand2->Size = System::Drawing::Size(42, 35);
			this->rand2->TabIndex = 56;
			this->rand2->UseVisualStyleBackColor = true;
			this->rand2->Visible = false;
			this->rand2->Click += gcnew System::EventHandler(this, &Autumn::rand2_Click);
			// 
			// rand
			// 
			this->rand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand.BackgroundImage")));
			this->rand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand->Location = System::Drawing::Point(982, 966);
			this->rand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rand->Name = L"rand";
			this->rand->Size = System::Drawing::Size(42, 35);
			this->rand->TabIndex = 55;
			this->rand->UseVisualStyleBackColor = true;
			this->rand->Click += gcnew System::EventHandler(this, &Autumn::rand_Click);
			// 
			// reset
			// 
			this->reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.BackgroundImage")));
			this->reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Location = System::Drawing::Point(730, 966);
			this->reset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(42, 35);
			this->reset->TabIndex = 57;
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Autumn::reset_Click);
			// 
			// Autumn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1712, 1048);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand);
			this->Controls->Add(this->artist);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackname);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->volumecontrol);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->play);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->search);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Autumn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Autumn::Autumn_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Autumn::Autumn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// falgs and global variables
		notqueue q;
		notstack s;
		int random = 0;
		bool flag_play_pause = 0;
		bool ismuted = 0;
		int progress = 0;
		int durationInSeconds = 0;
		int index = 1;
		void mp3(int who) {
			mciSendStringA("close mp3", nullptr, 0, nullptr);
			if (who == 0) mciSendStringA("open \"Central Cee - Doja (Directed by Cole Bennett).mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 1) mciSendStringA("open \"Ali Gatie - Afterlife.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 2) mciSendStringA("open \"David Kushner - Daylight.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 3) mciSendStringA("open \"Rihanna - Lift Me Up.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 4) mciSendStringA("open \"Taylor Swift - Snow On The Beach.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 5) mciSendStringA("open \"Ricky Montgomery - This December.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		q.Enqueue(label1->Text);
		q.Enqueue(label2->Text);
		q.Enqueue(label3->Text);
		q.Enqueue(label4->Text);
		q.Enqueue(label5->Text);
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		afterlife_Click(simulatedSender, simulatedEventArgs);

	}

	private: System::Void afterlife_Click(System::Object^ sender, System::EventArgs^ e) {


		Bitmap^ b = gcnew Bitmap("Afterlife.jpg");
		if (pictureBox8->BackgroundImage != b) {
			pictureBox8->BackgroundImage = b;
			trackname->Text = "Afterlife  -  Ali Gatie";
		}
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:38";
		index = 2;
		mp3(1);

	}

	private: System::Void daylight_Click(System::Object^ sender, System::EventArgs^ e) {

		Bitmap^ b = gcnew Bitmap("daylight.jpeg");
		pictureBox8->BackgroundImage = b;
		trackname->Text = "Daylight  -  David Kushner";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:33";
		index = 3;
		mp3(2);
	}

	private: System::Void liftmeup_Click(System::Object^ sender, System::EventArgs^ e) {

		Bitmap^ b = gcnew Bitmap("liftmeup.png");
		pictureBox8->BackgroundImage = b;
		trackname->Text = "Lift Me Up -  Rihanna";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:18";
		index = 4;
		mp3(3);

	}
	private: System::Void snow_Click(System::Object^ sender, System::EventArgs^ e) {

		Bitmap^ b = gcnew Bitmap("snowonthebeach.jpg");
		pictureBox8->BackgroundImage = b;
		trackname->Text = "Snow On The Beach - Taylor Swift";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:50";
		index = 5;
		mp3(4);

	}
	private: System::Void december_Click(System::Object^ sender, System::EventArgs^ e) {

		Bitmap^ b = gcnew Bitmap("thisdecember.jpeg");
		pictureBox8->BackgroundImage = b;
		trackname->Text = "This December - Ricky Montgomery";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:02";
		index = 1;
		mp3(5);
	}
	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag_play_pause == 0) {
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
		else if (flag_play_pause == 1) {
			timer1->Stop();
			Bitmap^ img = gcnew Bitmap("playbutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 0;
			mciSendStringA("pause mp3", nullptr, 0, nullptr);
		}
	}
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			char duration[128];
			mciSendStringA("status mp3 length", duration, sizeof(duration), nullptr);
			durationInSeconds = atoi(duration) / 1000;
			progressBar1->Maximum = durationInSeconds;
			progressBar1->Increment(1);
			progress++;
			int minutes_start = (progress % 3600) / 60;
			int seconds_start = progress % 60;
			String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
			start->Text = formattedstart;
			if (progress >= durationInSeconds) {
				if (random == 0) {
					timer1->Stop();
					progress = 0;
					progressBar1->Value = 0;
					start->Text = "00:00";
					end->Text = "00:00";
					flag_play_pause = 1;
					Bitmap^ img = gcnew Bitmap("playbutton.png");
					play->BackgroundImage = img;
					System::Object^ simulatedSender = nullptr;
					System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
					if (index == 1) {
						afterlife_Click(simulatedSender, simulatedEventArgs);
					}
					else if (index == 2) {
						daylight_Click(simulatedSender, simulatedEventArgs);
					}
					else if (index == 3) {
						liftmeup_Click(simulatedSender, simulatedEventArgs);
					}
					else if (index == 4) {
						snow_Click(simulatedSender, simulatedEventArgs);
					}
					else if (index == 5) {
						december_Click(simulatedSender, simulatedEventArgs);
						index = 1;
					}
					q.Dequeue();
				}
				else if (random == 1) {
					timer1->Stop();
					progress = 0;
					progressBar1->Value = 0;
					start->Text = "00:00";
					end->Text = "00:00";
					flag_play_pause = 1;
					Bitmap^ img = gcnew Bitmap("playbutton.png");
					play->BackgroundImage = img;
					System::Object^ simulatedSender = nullptr;
					System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
					rand_Click(simulatedSender, simulatedEventArgs);
				}
			}
		}
		private: System::Void volumecontrol_Scroll(System::Object^ sender, System::EventArgs^ e) {
			int volumeLevel = volumecontrol->Value;
			float normalizedVolume = static_cast<float>(volumeLevel) / 100.0f;
			DWORD volume2 = static_cast<DWORD>(normalizedVolume * 0xFFFF);
			waveOutSetVolume(0, MAKELONG(volume2, volume2));
			if (volumecontrol->Value == 0) {
				Bitmap^ img = gcnew Bitmap("mute.png");
				volume->BackgroundImage = img;
				ismuted = 1;
			}
			else {
				Bitmap^ img = gcnew Bitmap("volume.png");
				volume->BackgroundImage = img;
				ismuted = 0;
			}
		}
		private: System::Void volume_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!ismuted) {
				Bitmap^ img = gcnew Bitmap("mute.png");
				volume->BackgroundImage = img;
				volumecontrol->Value = 0;
				waveOutSetVolume(0, 0);
				ismuted = 1;
			}
			else {
				Bitmap^ img = gcnew Bitmap("volume.png");
				volume->BackgroundImage = img;
				volumecontrol->Value = 50;
				waveOutSetVolume(0, MAKELONG(0x7FFF, 0x7FFF));
				ismuted = 0;
			}
		}
	private: System::Void explore_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value = 0;
		progress = 0;
		ismuted = 0;
		flag_play_pause = 0;
		timer1->Stop();
		end->Text = "00:00";
		start->Text = "00:00";
		mciSendStringA("close mp3", nullptr, 0, nullptr);
		this->Hide();
		obj->Show();
	}
private: System::Void Autumn_Load(System::Object^ sender, System::EventArgs^ e) {
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
}
private: System::Void progressBar1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	int progressBarWidth = progressBar1->Width;
	int clickX = e->X;
	int newPosition = static_cast<int>((static_cast<double>(clickX) / progressBarWidth) * durationInSeconds);
	progress = newPosition;
	progressBar1->Value = progress;
	int minutes_start = (progress % 3600) / 60;
	int seconds_start = progress % 60;
	int playfrom = newPosition;
	playfrom *= 1000;
	String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
	start->Text = formattedstart;
	char progressStr[20];
	sprintf(progressStr, "%d", playfrom);
	char command[256];
	sprintf(command, "play mp3 from %s", progressStr);
	mciSendStringA(command, nullptr, 0, nullptr);
	flag_play_pause = 0;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	play_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void Autumn_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	explore_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void rand_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 1;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(1, 5);
	int random_number = distribution(gen);
	index = random_number;
	rand->Enabled = FALSE;
	rand2->Visible = TRUE;
	rand2->Enabled = TRUE;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	if (index == 1) {
		afterlife_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 2) {
		daylight_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 3) {
		liftmeup_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 4) {
		snow_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 5) {
		december_Click(simulatedSender, simulatedEventArgs);
		index = 1;
	}
}
private: System::Void rand2_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 0;
	rand2->Enabled = FALSE;
	rand2->Visible = FALSE;
	rand->Enabled = TRUE;
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("play mp3 from 0", nullptr, 0, nullptr);
	progressBar1->Value = 0;
	progress = 0;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	timer1_Tick(simulatedSender, simulatedEventArgs);
}
	private: System::Void playnext_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		if (!s.isEmpty()) {
			int currentSongIndex = index;
			switch (currentSongIndex) {
			case 1:
				afterlife_Click(simulatedSender, simulatedEventArgs);
				break;
			case 2:
				daylight_Click(simulatedSender, simulatedEventArgs);
				break;
			case 3:
				liftmeup_Click(simulatedSender, simulatedEventArgs);
				break;
			case 4:
				snow_Click(simulatedSender, simulatedEventArgs);
				break;
			case 5:
				december_Click(simulatedSender, simulatedEventArgs);
				break;
			}
			s.push(currentSongIndex);
		}
		else {
			december_Click(simulatedSender, simulatedEventArgs);
			s.push(5);
		}
	}
private: System::Void playprev_Click(System::Object^ sender, System::EventArgs^ e) {
	s.pop();
	index--;
	if (index >= 1) {
		switch (index) {
		case 1: december_Click(sender, e); break;
		case 2: afterlife_Click(sender, e); break;
		case 3: daylight_Click(sender, e); break;
		case 4: liftmeup_Click(sender, e); break;
		case 5: snow_Click(sender, e); break;
		}
	}
	else {
		index = 5;
		snow_Click(sender, e);
	}
}
private: System::Void yourlibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("pause mp3", nullptr, 0, nullptr);
	this->Hide();
	MyForm1^ obj1 = gcnew MyForm1(this);
	obj1->ShowDialog();
}
};
}