#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vcclr.h>
#include <string>
#include <fstream>
#include <random>
#include "notLL.h"


namespace anghami {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;

		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm1(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ createplaylist;
	private: System::Windows::Forms::PictureBox^ cat;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ explore;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::PictureBox^ name;
	private: System::Windows::Forms::PictureBox^ noofsongs;
	private: System::Windows::Forms::Label^ nbofsongs;
	private: System::Windows::Forms::Button^ CREATE;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ playlistname;

	private: System::Windows::Forms::TrackBar^ volumecontrol;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ trackname;

	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ play;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ rand;
	private: System::Windows::Forms::Button^ rand2;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::Button^ search;
	private: System::ComponentModel::IContainer^ components;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->createplaylist = (gcnew System::Windows::Forms::Button());
			this->cat = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->explore = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::PictureBox());
			this->noofsongs = (gcnew System::Windows::Forms::PictureBox());
			this->nbofsongs = (gcnew System::Windows::Forms::Label());
			this->CREATE = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->playlistname = (gcnew System::Windows::Forms::TextBox());
			this->volumecontrol = (gcnew System::Windows::Forms::TrackBar());
			this->end = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->play = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->rand = (gcnew System::Windows::Forms::Button());
			this->rand2 = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->name))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noofsongs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->BeginInit();
			this->SuspendLayout();
			// 
			// createplaylist
			// 
			this->createplaylist->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->createplaylist->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createplaylist.BackgroundImage")));
			this->createplaylist->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->createplaylist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createplaylist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createplaylist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->createplaylist->Location = System::Drawing::Point(710, 688);
			this->createplaylist->Name = L"createplaylist";
			this->createplaylist->Size = System::Drawing::Size(324, 75);
			this->createplaylist->TabIndex = 28;
			this->createplaylist->UseVisualStyleBackColor = false;
			this->createplaylist->Click += gcnew System::EventHandler(this, &MyForm1::createplaylist_Click_1);
			// 
			// cat
			// 
			this->cat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->cat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cat.BackgroundImage")));
			this->cat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cat->Location = System::Drawing::Point(646, 338);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(442, 343);
			this->cat->TabIndex = 29;
			this->cat->TabStop = false;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(220, 215);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(1406, 676);
			this->checkedListBox1->TabIndex = 30;
			this->checkedListBox1->Visible = false;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::checkedListBox1_SelectedIndexChanged);
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
			this->explore->Location = System::Drawing::Point(6, 165);
			this->explore->Name = L"explore";
			this->explore->Size = System::Drawing::Size(111, 111);
			this->explore->TabIndex = 32;
			this->explore->UseVisualStyleBackColor = false;
			this->explore->Click += gcnew System::EventHandler(this, &MyForm1::explore_Click);
			// 
			// yourlibrary
			// 
			this->yourlibrary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->yourlibrary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yourlibrary.BackgroundImage")));
			this->yourlibrary->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->yourlibrary->Cursor = System::Windows::Forms::Cursors::Hand;
			this->yourlibrary->Enabled = false;
			this->yourlibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yourlibrary->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->yourlibrary->Location = System::Drawing::Point(6, 295);
			this->yourlibrary->Name = L"yourlibrary";
			this->yourlibrary->Size = System::Drawing::Size(111, 115);
			this->yourlibrary->TabIndex = 31;
			this->yourlibrary->UseVisualStyleBackColor = false;
			// 
			// name
			// 
			this->name->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.BackgroundImage")));
			this->name->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->name->Location = System::Drawing::Point(220, 160);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(124, 49);
			this->name->TabIndex = 33;
			this->name->TabStop = false;
			this->name->Visible = false;
			// 
			// noofsongs
			// 
			this->noofsongs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"noofsongs.BackgroundImage")));
			this->noofsongs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->noofsongs->Location = System::Drawing::Point(674, 162);
			this->noofsongs->Name = L"noofsongs";
			this->noofsongs->Size = System::Drawing::Size(190, 49);
			this->noofsongs->TabIndex = 34;
			this->noofsongs->TabStop = false;
			this->noofsongs->Visible = false;
			// 
			// nbofsongs
			// 
			this->nbofsongs->AutoSize = true;
			this->nbofsongs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->nbofsongs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nbofsongs->ForeColor = System::Drawing::SystemColors::Control;
			this->nbofsongs->Location = System::Drawing::Point(861, 165);
			this->nbofsongs->Name = L"nbofsongs";
			this->nbofsongs->Size = System::Drawing::Size(35, 37);
			this->nbofsongs->TabIndex = 35;
			this->nbofsongs->Text = L"0";
			this->nbofsongs->Visible = false;
			// 
			// CREATE
			// 
			this->CREATE->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->CREATE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CREATE.BackgroundImage")));
			this->CREATE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CREATE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CREATE->Enabled = false;
			this->CREATE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CREATE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->CREATE->Location = System::Drawing::Point(1466, 131);
			this->CREATE->Name = L"CREATE";
			this->CREATE->Size = System::Drawing::Size(162, 75);
			this->CREATE->TabIndex = 36;
			this->CREATE->UseVisualStyleBackColor = false;
			this->CREATE->Visible = false;
			this->CREATE->Click += gcnew System::EventHandler(this, &MyForm1::CREATE_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(220, 211);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1405, 671);
			this->listBox1->TabIndex = 37;
			this->listBox1->Visible = false;
			this->listBox1->Click += gcnew System::EventHandler(this, &MyForm1::listBox1_Click);
			// 
			// playlistname
			// 
			this->playlistname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->playlistname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->playlistname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playlistname->ForeColor = System::Drawing::SystemColors::Window;
			this->playlistname->Location = System::Drawing::Point(351, 163);
			this->playlistname->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playlistname->Name = L"playlistname";
			this->playlistname->Size = System::Drawing::Size(220, 35);
			this->playlistname->TabIndex = 38;
			this->playlistname->Visible = false;
			this->playlistname->TextChanged += gcnew System::EventHandler(this, &MyForm1::playlistname_TextChanged);
			// 
			// volumecontrol
			// 
			this->volumecontrol->AutoSize = false;
			this->volumecontrol->BackColor = System::Drawing::SystemColors::Desktop;
			this->volumecontrol->Location = System::Drawing::Point(1293, 989);
			this->volumecontrol->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->volumecontrol->Maximum = 100;
			this->volumecontrol->Name = L"volumecontrol";
			this->volumecontrol->Size = System::Drawing::Size(314, 46);
			this->volumecontrol->TabIndex = 48;
			this->volumecontrol->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumecontrol->Value = 50;
			this->volumecontrol->Scroll += gcnew System::EventHandler(this, &MyForm1::volumecontrol_Scroll);
			// 
			// end
			// 
			this->end->AutoSize = true;
			this->end->BackColor = System::Drawing::SystemColors::Desktop;
			this->end->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->end->Location = System::Drawing::Point(1076, 988);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(49, 20);
			this->end->TabIndex = 47;
			this->end->Text = L"00:00";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(628, 989);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(49, 20);
			this->start->TabIndex = 46;
			this->start->Text = L"00:00";
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(117, 988);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(0, 29);
			this->trackname->TabIndex = 45;
			// 
			// volume
			// 
			this->volume->BackColor = System::Drawing::SystemColors::Desktop;
			this->volume->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volume.BackgroundImage")));
			this->volume->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volume->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volume->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volume->Location = System::Drawing::Point(1240, 989);
			this->volume->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(51, 35);
			this->volume->TabIndex = 43;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &MyForm1::volume_Click);
			// 
			// playnext
			// 
			this->playnext->BackColor = System::Drawing::SystemColors::Desktop;
			this->playnext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playnext.BackgroundImage")));
			this->playnext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playnext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playnext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playnext->Location = System::Drawing::Point(916, 978);
			this->playnext->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playnext->Name = L"playnext";
			this->playnext->Size = System::Drawing::Size(42, 40);
			this->playnext->TabIndex = 42;
			this->playnext->UseVisualStyleBackColor = false;
			this->playnext->Click += gcnew System::EventHandler(this, &MyForm1::playnext_Click);
			// 
			// playprev
			// 
			this->playprev->BackColor = System::Drawing::SystemColors::Desktop;
			this->playprev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playprev.BackgroundImage")));
			this->playprev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playprev->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playprev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playprev->Location = System::Drawing::Point(798, 978);
			this->playprev->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playprev->Name = L"playprev";
			this->playprev->Size = System::Drawing::Size(42, 40);
			this->playprev->TabIndex = 41;
			this->playprev->UseVisualStyleBackColor = false;
			this->playprev->Click += gcnew System::EventHandler(this, &MyForm1::playprev_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->progressBar1->Location = System::Drawing::Point(630, 1032);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(495, 5);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 40;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::progressBar1_MouseClick);
			// 
			// play
			// 
			this->play->BackColor = System::Drawing::SystemColors::Desktop;
			this->play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.BackgroundImage")));
			this->play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->play->Location = System::Drawing::Point(838, 960);
			this->play->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(81, 71);
			this->play->TabIndex = 39;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &MyForm1::play_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// rand
			// 
			this->rand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand.BackgroundImage")));
			this->rand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand->Enabled = false;
			this->rand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand->Location = System::Drawing::Point(970, 979);
			this->rand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rand->Name = L"rand";
			this->rand->Size = System::Drawing::Size(42, 35);
			this->rand->TabIndex = 49;
			this->rand->UseVisualStyleBackColor = true;
			this->rand->Click += gcnew System::EventHandler(this, &MyForm1::rand_Click);
			// 
			// rand2
			// 
			this->rand2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand2.BackgroundImage")));
			this->rand2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand2->Enabled = false;
			this->rand2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand2->Location = System::Drawing::Point(972, 981);
			this->rand2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rand2->Name = L"rand2";
			this->rand2->Size = System::Drawing::Size(42, 35);
			this->rand2->TabIndex = 50;
			this->rand2->UseVisualStyleBackColor = true;
			this->rand2->Visible = false;
			this->rand2->Click += gcnew System::EventHandler(this, &MyForm1::rand2_Click);
			// 
			// reset
			// 
			this->reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.BackgroundImage")));
			this->reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Location = System::Drawing::Point(739, 979);
			this->reset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(42, 35);
			this->reset->TabIndex = 51;
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm1::reset_Click);
			// 
			// search_box
			// 
			this->search_box->AcceptsReturn = true;
			this->search_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->search_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_box->Enabled = false;
			this->search_box->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_box->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->search_box->Location = System::Drawing::Point(195, 13);
			this->search_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(561, 37);
			this->search_box->TabIndex = 52;
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
			this->search->Location = System::Drawing::Point(163, -1);
			this->search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(654, 63);
			this->search->TabIndex = 53;
			this->search->UseVisualStyleBackColor = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1719, 1060);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->search);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand);
			this->Controls->Add(this->volumecontrol);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->trackname);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->play);
			this->Controls->Add(this->playlistname);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->CREATE);
			this->Controls->Add(this->noofsongs);
			this->Controls->Add(this->name);
			this->Controls->Add(this->cat);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->createplaylist);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->nbofsongs);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->name))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noofsongs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//falgs and global variables
		notLL L;
		int count = 0;
		bool created = 0;
		bool flag_play_pause = 0;
		bool ismuted = 0;
		bool random = 0;
		bool edit = 0;
		int progress = 0;
		int index = 1;
		int durationInSeconds = 0;
		int playqueuetimes = 0;
	private: System::Void createplaylist_Click_1(System::Object^ sender, System::EventArgs^ e) {
		checkedListBox1->Items->Clear();
		N^ temp = gcnew N();
		temp = L.head;
		while (temp) {
			checkedListBox1->Items->Add(temp->trackname);
			temp = temp->next;
		}
		StreamReader^ fileReader = gcnew StreamReader("playlist.txt");
		String^ line = fileReader->ReadLine();
		if (line == "1") {
			line = fileReader->ReadLine();
			while ((line = fileReader->ReadLine()) != nullptr) {
				listBox1->Items->Add(line);
				for (int i = 0; i < checkedListBox1->Items->Count; i++) {
					if (checkedListBox1->Items[i]->ToString() == line) {
						checkedListBox1->SetItemChecked(i, true);
					}
				}
			}
		}
		fileReader->Close();
		cat->Visible = FALSE;
		createplaylist->Visible = FALSE;
		checkedListBox1->Visible = TRUE;
		CREATE->Visible = TRUE;
		nbofsongs->Visible = TRUE;
		name->Visible = TRUE;
		noofsongs->Visible = TRUE;
		playlistname->Visible = TRUE;
		rand->Enabled = TRUE;
	}
	private: System::Void explore_Click(System::Object^ sender, System::EventArgs^ e) {
		if(checkedListBox1->CheckedItems->Count >= 1){
			StreamReader^ fileReader = gcnew StreamReader("playlist.txt");
			String^ line = fileReader->ReadLine();
			fileReader->Close();
			mciSendStringA("pause mp3", nullptr, 0, nullptr);
			mciSendStringA("close mp3", nullptr, 0, nullptr);
			StreamWriter^ fileWriter = gcnew StreamWriter("playlist.txt");
			fileWriter->Write("1");
			fileWriter->Write("\n");
			fileWriter->Write(playlistname->Text);
			fileWriter->Write("\n");
			for (int i = 0; i < checkedListBox1->CheckedItems->Count;i++) {
				fileWriter->Write(checkedListBox1->CheckedItems[i]);
				fileWriter->Write("\n");
			}
			fileWriter->Close();
		}
		this->Hide();
		obj->Show();
	}
	String^ gettime(String^ str) {
		String^ openCommand = "open \"" + str + "\" type mpegvideo alias mp3";
		pin_ptr<const wchar_t> pinnedCommand = PtrToStringChars(openCommand);
		mciSendString(pinnedCommand, nullptr, 0, nullptr);
		char duration[128];
		mciSendStringA("status mp3 length", duration, sizeof(duration), nullptr);
		int durationInSeconds = atoi(duration) / 1000;
		int minutes_start = (durationInSeconds % 3600) / 60;
		int seconds_start = durationInSeconds % 60;
		String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
		return formattedstart;
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	L.insert("Casanova - Soolking", "casanova", gettime("casanova"));
	L.insert("GTB - Jey Brownie", "GTB", gettime("GTB"));
	L.insert("lock On Me - Metro Boomin","lock On Me",gettime("lock On Me"));
	L.insert("Humble - Kendrik Lamar","humble",gettime("humble"));
	L.insert("My Eyes - Travis Scott","my eyes",gettime("my eyes"));
	L.insert("Zahret El Madaen - Fairuz", "Zahret El Madaen", gettime("Zahret El Madaen"));
	L.insert("The Color Violet - Don Toliver", "The Color Violet", gettime("The Color Violet"));
	L.insert("Snow On The Beach - Taylor Swift", "Taylor Swift - Snow On The Beach", gettime("Taylor Swift - Snow On The Beach"));
	L.insert("Ta3ala Adalla3ak - Bahaa Sultan", "Ta3ala Adalla3ak", gettime("Ta3ala Adalla3ak"));
	L.insert("Smack That - AKON", "Smack That", gettime("Smack That"));
	L.insert("Shadi - Fairuz", "Shady", gettime("Shady"));
	L.insert("Omri - Kofs", "omri", gettime("omri"));
	L.insert("Saalouny El Nas - Fairuz", "Saalouny El Nas", gettime("Saalouny El Nas"));
	L.insert("Lift Me Up - Rihanna", "Rihanna - Lift Me Up", gettime("Rihanna - Lift Me Up"));
	L.insert("This December - Ricky Montgomery", "Ricky Montgomery - This December", gettime("Ricky Montgomery - This December"));
	L.insert("Reminder - The Weeknd", "Reminder", gettime("Reminder"));
	L.insert("Pink White - Frank Ocean", "Pink  White", gettime("Pink White"));
	L.insert("One Dance - Drake", "one dance", gettime("one dance"));
	L.insert("Save Your Tears - The Weeknd", "Often", gettime("Often"));
	L.insert("Moth To A Flame - The Weeknd", "Moth To A Flame", gettime("Moth To A Flame"));
	L.insert("Mockingbird - Eminem", "Mockingbird", gettime("Mockingbird"));
	L.insert("Mehtar - Abu", "Mehtar", gettime("Mehtar"));
	L.insert("Papaoutai - Soolking", "papaoutai", gettime("papaoutai"));
	L.insert("Lock On Me - Metro Boomin", "Lock On Me", gettime("Lock On Me"));
	L.insert("Kifak Inta - Fairuz", "Kifak Inta", gettime("Kifak Inta"));
	L.insert("I was never there - The Weeknd", "iwasneverthere", gettime("iwasneverthere"));
	L.insert("What To Do? - Travis Scott","what to do",gettime("what to do"));
	L.insert("In This Darkness - Clara La San", "In This Darkness", gettime("In This Darkness"));
	L.insert("In Da Club -  50 Cents", "In Da Club", gettime("In Da Club"));
	L.insert("Habbaitak Be El Saif - Fairuz", "Habbaitak Be El Saif", gettime("Habbaitak Be El Saif"));
	L.insert("Gold Digger -  Kanye West", "Gold Digger", gettime("Gold Digger"));
	L.insert("El Youm El Helw Dah - Ahmed Saad", "El Youm El Helw Dah", gettime("El Youm El Helw Dah"));
	L.insert("It Was A Good Day -  Ice Cube", "It Was A Good Day", gettime("It Was A Good Day"));
	L.insert("Daylight - David Kushner", "David Kushner - Daylight", gettime("David Kushner - Daylight"));
	L.insert("Creepin - The Weeknd", "Creepin", gettime("Creepin"));
	L.insert("Doja - Central Cee", "Central Cee - Doja (Directed by Cole Bennett)", gettime("Central Cee - Doja (Directed by Cole Bennett)"));
	L.insert("Blinding Lights - The Weeknd", "Blinding Lights", gettime("Blinding Lights"));
	L.insert("Beraha Ya Sheikha - Bahaa Sultan", "Beraha Ya Sheikha", gettime("Beraha Ya Sheikha"));
	L.insert("Inta Elhaz - Amr Diab", "Amr Diab Inta Elhaz", gettime("Amr Diab Inta Elhaz"));
	L.insert("Afterlife - Ali Gatie", "Ali Gatie - Afterlife", gettime("Ali Gatie - Afterlife"));
	StreamReader^ fileReader = gcnew StreamReader("playlist.txt");
	String^ line = fileReader->ReadLine();
	if (line == "1") {
		created = 1;
		line = fileReader->ReadLine();
		playlistname->Text = line;
		fileReader->Close();
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		createplaylist_Click_1(simulatedSender, simulatedEventArgs);
		count = listBox1->Items->Count;
		nbofsongs->Text = String::Format("{0}", count);
		playlistname->Enabled = FALSE;
		checkedListBox1->Visible = FALSE;
		listBox1->Visible = TRUE;
		Bitmap^ img = gcnew Bitmap("edit.png");
		CREATE->BackgroundImage = img;
		CREATE->Enabled = TRUE;
		edit = 1;
	}
	else { 
		fileReader->Close();
		playlistname->Visible = FALSE;
		listBox1->Visible = FALSE;
		createplaylist->Visible = TRUE;
		cat->Visible = TRUE;
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	count = checkedListBox1->CheckedIndices->Count;
	nbofsongs->Text = String::Format("{0}", count);
}
private: System::Void CREATE_Click(System::Object^ sender, System::EventArgs^ e) {
	if (edit == 0) {
		playlistname->Enabled = FALSE;
		checkedListBox1->Visible = FALSE;
		listBox1->Items->Clear();
		for (int i = 0; i < checkedListBox1->CheckedItems->Count;i++) {
			listBox1->Items->Add(checkedListBox1->CheckedItems[i]);
		}
		listBox1->Visible = TRUE;
		edit = 1;
		Bitmap^ img = gcnew Bitmap("edit.png");
		CREATE->BackgroundImage = img;
	}
	else if (edit == 1) {
		listBox1->Visible = FALSE;
		checkedListBox1->Visible = TRUE;
		playlistname->Enabled = TRUE;
		edit = 0;
		Bitmap^ img = gcnew Bitmap("yes.png");
		CREATE->BackgroundImage = img;
	}

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
private: System::Void volumecontrol_Scroll(System::Object^ sender, System::EventArgs^ e) {
	int volumeLevel = volumecontrol->Value;
	float normalizedVolume = static_cast<float>(volumeLevel) / 100.0f;
	DWORD volume = static_cast<DWORD>(normalizedVolume * 0xFFFF);
	waveOutSetVolume(0, MAKELONG(volume, volume));
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
	int minutes_end = (durationInSeconds % 3600) / 60;
	int seconds_end = durationInSeconds % 60;
	String^ formattedend = String::Format("{0:D2}:{1:D2}", minutes_end, seconds_end);
	end->Text = formattedend;
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
			if (listBox1->SelectedIndex < listBox1->Items->Count - 1) {
				listBox1->SelectedItem = listBox1->Items[listBox1->SelectedIndex + 1];
			}
			else listBox1->SelectedItem = listBox1->Items[listBox1->SelectedIndex - listBox1->Items->Count + 1];
			System::Object^ simulatedSender = nullptr;
			System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
			listBox1_Click(simulatedSender, simulatedEventArgs);
		}
		else if (random == 1) {
			System::Object^ simulatedSender = nullptr;
			System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
			rand_Click(simulatedSender, simulatedEventArgs);
		}
	}
}
private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	N^ temp = gcnew N();
	temp = L.head;
	while (temp) {
		if (listBox1->SelectedItem->ToString() == temp->trackname && listBox1->SelectedItem != nullptr) {
			String^ filePath = temp->mp3file + ".mp3";
			String^ command = "open \"" + filePath + "\" type mpegvideo alias mp3";
			const char* mciCommand = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(command)).ToPointer();
			mciSendStringA(mciCommand, nullptr, 0, nullptr);
			trackname->Text = temp->trackname;
			if (flag_play_pause == 0) {
				System::Object^ simulatedSender = nullptr;
				System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
				play_Click(simulatedSender, simulatedEventArgs);
			}
			else if (flag_play_pause == 1) {
				progress = 0;
				progressBar1->Value = 0;
				start->Text = "00:00";
				System::Object^ simulatedSender = nullptr;
				System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
				play_Click(simulatedSender, simulatedEventArgs);
				play_Click(simulatedSender, simulatedEventArgs);
			}
			break;
		}
		else temp = temp->next;
	}
}
private: System::Void playlistname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->CheckedIndices->Count != 0) {
		CREATE->Enabled = TRUE;
	}
	else if (checkedListBox1->CheckedIndices->Count == 0) {
		CREATE->Enabled = FALSE;
	}
}
private: System::Void rand_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 1;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(1, listBox1->Items->Count-1);
	int random_number = distribution(gen);
	listBox1->SelectedItem = listBox1->Items[random_number];
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	listBox1_Click(simulatedSender, simulatedEventArgs);
	rand->Enabled = FALSE;
	rand2->Visible = TRUE;
	rand2->Enabled = TRUE;
}
private: System::Void rand2_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 0;
	rand2->Enabled = FALSE;
	rand2->Visible = FALSE;
	rand->Enabled = TRUE;
}
private: System::Void playnext_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == listBox1->Items->Count-1) {
		listBox1->SelectedIndex = 0;
	}
	else {
		listBox1->SelectedIndex += 1;
	}
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	listBox1_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void playprev_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0) {
		listBox1->SelectedIndex = listBox1->Items->Count-1;
	}
	else {
		listBox1->SelectedIndex -= 1;
	}
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	listBox1_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void MyForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	explore_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("play mp3 from 0", nullptr, 0, nullptr);
	progressBar1->Value = 0;
	progress = 0;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	timer1_Tick(simulatedSender, simulatedEventArgs);
}
};
}