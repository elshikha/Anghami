#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include "MyForm1.h"
#include "hiphopclassics.h"
#include "Autumn.h"
#include "Weeknd.h"
#include "Fayrouz.h"
#include "Chilling.h"
#include "Driving.h"
#include "topfrench.h"
#include "newhiphop.h"

namespace anghami {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ search_box;



	private: System::Windows::Forms::Button^ hiphop_classics;



	private: System::Windows::Forms::Button^ fayrouz;
	private: System::Windows::Forms::Button^ play;
	private: System::Windows::Forms::Button^ french;

	private: System::Windows::Forms::Button^ hiphopnew;
	private: System::Windows::Forms::Button^ theweeknd;

	private: System::Windows::Forms::Button^ autumn;
	private: System::Windows::Forms::Button^ chilling;
	private: System::Windows::Forms::Button^ driving;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::PictureBox^ albumcover;


	private: System::Windows::Forms::Label^ trackname;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::TrackBar^ volumecontrol;
	private: System::Windows::Forms::Button^ explore;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->hiphop_classics = (gcnew System::Windows::Forms::Button());
			this->fayrouz = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->french = (gcnew System::Windows::Forms::Button());
			this->hiphopnew = (gcnew System::Windows::Forms::Button());
			this->theweeknd = (gcnew System::Windows::Forms::Button());
			this->autumn = (gcnew System::Windows::Forms::Button());
			this->chilling = (gcnew System::Windows::Forms::Button());
			this->driving = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->albumcover = (gcnew System::Windows::Forms::PictureBox());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->volumecontrol = (gcnew System::Windows::Forms::TrackBar());
			this->explore = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->BeginInit();
			this->SuspendLayout();
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
			this->search_box->Location = System::Drawing::Point(192, 14);
			this->search_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(561, 37);
			this->search_box->TabIndex = 2;
			// 
			// hiphop_classics
			// 
			this->hiphop_classics->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hiphop_classics.BackgroundImage")));
			this->hiphop_classics->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hiphop_classics->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hiphop_classics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hiphop_classics->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->hiphop_classics->Location = System::Drawing::Point(166, 165);
			this->hiphop_classics->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->hiphop_classics->Name = L"hiphop_classics";
			this->hiphop_classics->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->hiphop_classics->Size = System::Drawing::Size(290, 285);
			this->hiphop_classics->TabIndex = 3;
			this->hiphop_classics->UseVisualStyleBackColor = true;
			this->hiphop_classics->Click += gcnew System::EventHandler(this, &MyForm::hiphop_classics_Click);
			// 
			// fayrouz
			// 
			this->fayrouz->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fayrouz.BackgroundImage")));
			this->fayrouz->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fayrouz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fayrouz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fayrouz->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->fayrouz->Location = System::Drawing::Point(788, 165);
			this->fayrouz->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->fayrouz->Name = L"fayrouz";
			this->fayrouz->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->fayrouz->Size = System::Drawing::Size(290, 285);
			this->fayrouz->TabIndex = 7;
			this->fayrouz->UseVisualStyleBackColor = true;
			this->fayrouz->Click += gcnew System::EventHandler(this, &MyForm::fayrouz_Click);
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
			this->play->TabIndex = 8;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &MyForm::play_Click);
			// 
			// french
			// 
			this->french->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"french.BackgroundImage")));
			this->french->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->french->Cursor = System::Windows::Forms::Cursors::Hand;
			this->french->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->french->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->french->Location = System::Drawing::Point(1406, 165);
			this->french->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->french->Name = L"french";
			this->french->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->french->Size = System::Drawing::Size(290, 285);
			this->french->TabIndex = 6;
			this->french->UseVisualStyleBackColor = true;
			this->french->Click += gcnew System::EventHandler(this, &MyForm::topfrench_Click);
			// 
			// hiphopnew
			// 
			this->hiphopnew->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hiphopnew.BackgroundImage")));
			this->hiphopnew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hiphopnew->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hiphopnew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hiphopnew->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->hiphopnew->Location = System::Drawing::Point(1100, 165);
			this->hiphopnew->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->hiphopnew->Name = L"hiphopnew";
			this->hiphopnew->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->hiphopnew->Size = System::Drawing::Size(290, 285);
			this->hiphopnew->TabIndex = 4;
			this->hiphopnew->UseVisualStyleBackColor = true;
			this->hiphopnew->Click += gcnew System::EventHandler(this, &MyForm::hiphopnew_Click);
			// 
			// theweeknd
			// 
			this->theweeknd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"theweeknd.BackgroundImage")));
			this->theweeknd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->theweeknd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->theweeknd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->theweeknd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->theweeknd->Location = System::Drawing::Point(476, 165);
			this->theweeknd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->theweeknd->Name = L"theweeknd";
			this->theweeknd->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->theweeknd->Size = System::Drawing::Size(290, 285);
			this->theweeknd->TabIndex = 5;
			this->theweeknd->UseVisualStyleBackColor = true;
			this->theweeknd->Click += gcnew System::EventHandler(this, &MyForm::weeknd_Click);
			// 
			// autumn
			// 
			this->autumn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->autumn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"autumn.BackgroundImage")));
			this->autumn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->autumn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->autumn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->autumn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->autumn->Location = System::Drawing::Point(150, 612);
			this->autumn->Name = L"autumn";
			this->autumn->Size = System::Drawing::Size(466, 269);
			this->autumn->TabIndex = 9;
			this->autumn->UseVisualStyleBackColor = false;
			this->autumn->Click += gcnew System::EventHandler(this, &MyForm::autumn_Click);
			// 
			// chilling
			// 
			this->chilling->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->chilling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chilling.BackgroundImage")));
			this->chilling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->chilling->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chilling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chilling->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->chilling->Location = System::Drawing::Point(662, 612);
			this->chilling->Name = L"chilling";
			this->chilling->Size = System::Drawing::Size(466, 269);
			this->chilling->TabIndex = 10;
			this->chilling->UseVisualStyleBackColor = false;
			this->chilling->Click += gcnew System::EventHandler(this, &MyForm::chilling_Click);
			// 
			// driving
			// 
			this->driving->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->driving->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"driving.BackgroundImage")));
			this->driving->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->driving->Cursor = System::Windows::Forms::Cursors::Hand;
			this->driving->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->driving->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->driving->Location = System::Drawing::Point(1192, 612);
			this->driving->Name = L"driving";
			this->driving->Size = System::Drawing::Size(466, 269);
			this->driving->TabIndex = 11;
			this->driving->UseVisualStyleBackColor = false;
			this->driving->Click += gcnew System::EventHandler(this, &MyForm::driving_Click);
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
			this->progressBar1->TabIndex = 12;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::progressBar1_MouseClick);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// playprev
			// 
			this->playprev->BackColor = System::Drawing::SystemColors::Desktop;
			this->playprev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playprev.BackgroundImage")));
			this->playprev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playprev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playprev->Location = System::Drawing::Point(798, 966);
			this->playprev->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playprev->Name = L"playprev";
			this->playprev->Size = System::Drawing::Size(42, 40);
			this->playprev->TabIndex = 13;
			this->playprev->UseVisualStyleBackColor = false;
			// 
			// playnext
			// 
			this->playnext->BackColor = System::Drawing::SystemColors::Desktop;
			this->playnext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playnext.BackgroundImage")));
			this->playnext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playnext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playnext->Location = System::Drawing::Point(916, 966);
			this->playnext->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playnext->Name = L"playnext";
			this->playnext->Size = System::Drawing::Size(42, 40);
			this->playnext->TabIndex = 14;
			this->playnext->UseVisualStyleBackColor = false;
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
			this->volume->TabIndex = 15;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &MyForm::volume_Click);
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
			this->yourlibrary->Location = System::Drawing::Point(4, 291);
			this->yourlibrary->Name = L"yourlibrary";
			this->yourlibrary->Size = System::Drawing::Size(111, 115);
			this->yourlibrary->TabIndex = 16;
			this->yourlibrary->UseVisualStyleBackColor = false;
			this->yourlibrary->Click += gcnew System::EventHandler(this, &MyForm::yourlibrary_Click);
			// 
			// albumcover
			// 
			this->albumcover->BackColor = System::Drawing::SystemColors::Desktop;
			this->albumcover->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"albumcover.BackgroundImage")));
			this->albumcover->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->albumcover->Location = System::Drawing::Point(140, 958);
			this->albumcover->Name = L"albumcover";
			this->albumcover->Size = System::Drawing::Size(80, 80);
			this->albumcover->TabIndex = 17;
			this->albumcover->TabStop = false;
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(230, 986);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(299, 29);
			this->trackname->TabIndex = 20;
			this->trackname->Text = L"Saalouny El Nas - Fairuz";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(628, 977);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(49, 20);
			this->start->TabIndex = 21;
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
			this->end->TabIndex = 22;
			this->end->Text = L"00:00";
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
			this->volumecontrol->TabIndex = 23;
			this->volumecontrol->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumecontrol->Value = 50;
			this->volumecontrol->Scroll += gcnew System::EventHandler(this, &MyForm::volumecontrol_Scroll);
			// 
			// explore
			// 
			this->explore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->explore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"explore.BackgroundImage")));
			this->explore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->explore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->explore->Enabled = false;
			this->explore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->explore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->explore->Location = System::Drawing::Point(4, 160);
			this->explore->Name = L"explore";
			this->explore->Size = System::Drawing::Size(111, 111);
			this->explore->TabIndex = 24;
			this->explore->UseVisualStyleBackColor = false;
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
			this->search->Location = System::Drawing::Point(160, 0);
			this->search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(654, 63);
			this->search->TabIndex = 25;
			this->search->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1712, 1048);
			this->Controls->Add(this->hiphop_classics);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->volumecontrol);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->trackname);
			this->Controls->Add(this->albumcover);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->driving);
			this->Controls->Add(this->chilling);
			this->Controls->Add(this->autumn);
			this->Controls->Add(this->play);
			this->Controls->Add(this->fayrouz);
			this->Controls->Add(this->french);
			this->Controls->Add(this->theweeknd);
			this->Controls->Add(this->hiphopnew);
			this->Controls->Add(this->search);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// flags and global variables
		bool flag_play_pause = 0;
		bool ismuted = 0;
		int progress = 0;
		int durationInSeconds = 0;
		//
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void hiphopnew_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	newhiphop^ obj8 = gcnew newhiphop(this);
	obj8->ShowDialog();
}
private: System::Void weeknd_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	Weeknd^ obj3 = gcnew Weeknd(this);
	obj3->ShowDialog();
}
private: System::Void chilling_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	Chilling^ obj5 = gcnew Chilling(this);
	obj5->ShowDialog();
}
private: System::Void driving_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	Driving^ obj6 = gcnew Driving(this);
	obj6->ShowDialog();
}
private: System::Void fayrouz_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	Fayrouz^ obj4 = gcnew Fayrouz(this);
	obj4->ShowDialog();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("open \"Saalouny El Nas.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
	char duration[128];
	mciSendStringA("status mp3 length", duration, sizeof(duration), nullptr);
	durationInSeconds = atoi(duration) / 1000;
	progressBar1->Maximum = durationInSeconds;
	mciSendStringA("play mp3", nullptr, 0, nullptr);
	int minutes_end = (durationInSeconds % 3600) / 60;
	int seconds_end = durationInSeconds % 60;
	String^ formattedend = String::Format("{0:D2}:{1:D2}",minutes_end, seconds_end);
	end->Text = formattedend;
	progressBar1->Increment(1);
	progress++;
	int minutes_start = (progress % 3600) / 60;
	int seconds_start = progress % 60;
	String^ formattedstart = String::Format("{0:D2}:{1:D2}", minutes_start, seconds_start);
	start->Text = formattedstart;
	if (progress > durationInSeconds) {
		timer1->Stop();
		progress = 0;
		progressBar1->Value = 0;
		start->Text = "00:00";
		end->Text = "00:00";
	}
}
private: System::Void volumecontrol_Scroll(System::Object^ sender, System::EventArgs^ e) {
	int volumeLevel = volumecontrol->Value;
	float normalizedVolume = static_cast<float>(volumeLevel) / 100.0f;
	DWORD volume = static_cast<DWORD>(normalizedVolume * 0xFFFF);
	waveOutSetVolume(0, MAKELONG(volume, volume));
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
private: System::Void yourlibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ obj1 = gcnew MyForm1(this);
	obj1->ShowDialog();
}
private: System::Void hiphop_classics_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	hiphopclassics^ obj2 = gcnew hiphopclassics(this);
	obj2->ShowDialog();
}
private: System::Void autumn_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	Autumn^ obj3 = gcnew Autumn(this);
	obj3->ShowDialog();
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
private: System::Void topfrench_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;
	progress = 0;
	ismuted = 0;
	flag_play_pause = 0;
	timer1->Stop();
	mciSendStringA("close mp3", nullptr, 0, nullptr);
	this->Hide();
	end->Text = "00:00";
	start->Text = "00:00";
	topfrench^ obj7 = gcnew topfrench(this);
	obj7->ShowDialog();
}
};
}
