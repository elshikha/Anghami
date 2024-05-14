#pragma once
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
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
	/// Summary for Fayrouz
	/// </summary>
	public ref class Fayrouz : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Fayrouz(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Fayrouz(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Fayrouz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ cover;
	private: System::Windows::Forms::PictureBox^ habbaitakbeelsaif;
	private: System::Windows::Forms::PictureBox^ kifakinta;
	private: System::Windows::Forms::PictureBox^ saalounyelnas;
	private: System::Windows::Forms::PictureBox^ shadi;
	private: System::Windows::Forms::PictureBox^ zahret;





	private: System::Windows::Forms::Label^ Habbaitakbeelsaif_label;
	private: System::Windows::Forms::Label^ kifakinta_label;
	private: System::Windows::Forms::Label^ saalounyelnas_label;
	private: System::Windows::Forms::Label^ shadi_label;
	private: System::Windows::Forms::Label^ zahret_label;






	private: System::Windows::Forms::Button^ startqueue;
	private: System::Windows::Forms::Button^ play;


	private: System::Windows::Forms::TrackBar^ volumecontrol;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ playprev;
	private: System::Windows::Forms::Button^ playnext;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::PictureBox^ albumcover;
	private: System::Windows::Forms::Label^ trackname;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ end;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ explore;
	private: System::Windows::Forms::Button^ yourlibrary;
	private: System::Windows::Forms::Label^ artist;
	private: System::Windows::Forms::PictureBox^ info;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ rand2;
	private: System::Windows::Forms::Button^ rand;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::Button^ search;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Fayrouz::typeid));
			this->cover = (gcnew System::Windows::Forms::PictureBox());
			this->habbaitakbeelsaif = (gcnew System::Windows::Forms::PictureBox());
			this->kifakinta = (gcnew System::Windows::Forms::PictureBox());
			this->saalounyelnas = (gcnew System::Windows::Forms::PictureBox());
			this->shadi = (gcnew System::Windows::Forms::PictureBox());
			this->zahret = (gcnew System::Windows::Forms::PictureBox());
			this->Habbaitakbeelsaif_label = (gcnew System::Windows::Forms::Label());
			this->kifakinta_label = (gcnew System::Windows::Forms::Label());
			this->saalounyelnas_label = (gcnew System::Windows::Forms::Label());
			this->shadi_label = (gcnew System::Windows::Forms::Label());
			this->zahret_label = (gcnew System::Windows::Forms::Label());
			this->startqueue = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->volumecontrol = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->playprev = (gcnew System::Windows::Forms::Button());
			this->playnext = (gcnew System::Windows::Forms::Button());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->albumcover = (gcnew System::Windows::Forms::PictureBox());
			this->trackname = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->end = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->explore = (gcnew System::Windows::Forms::Button());
			this->yourlibrary = (gcnew System::Windows::Forms::Button());
			this->artist = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::PictureBox());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->rand2 = (gcnew System::Windows::Forms::Button());
			this->rand = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->habbaitakbeelsaif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kifakinta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saalounyelnas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shadi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zahret))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->info))->BeginInit();
			this->SuspendLayout();
			// 
			// cover
			// 
			this->cover->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cover.BackgroundImage")));
			this->cover->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cover->Location = System::Drawing::Point(136, 78);
			this->cover->Name = L"cover";
			this->cover->Size = System::Drawing::Size(370, 369);
			this->cover->TabIndex = 0;
			this->cover->TabStop = false;
			// 
			// habbaitakbeelsaif
			// 
			this->habbaitakbeelsaif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->habbaitakbeelsaif->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"habbaitakbeelsaif.BackgroundImage")));
			this->habbaitakbeelsaif->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->habbaitakbeelsaif->Location = System::Drawing::Point(536, 145);
			this->habbaitakbeelsaif->Name = L"habbaitakbeelsaif";
			this->habbaitakbeelsaif->Size = System::Drawing::Size(80, 80);
			this->habbaitakbeelsaif->TabIndex = 1;
			this->habbaitakbeelsaif->TabStop = false;
			// 
			// kifakinta
			// 
			this->kifakinta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->kifakinta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kifakinta.BackgroundImage")));
			this->kifakinta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->kifakinta->Location = System::Drawing::Point(536, 258);
			this->kifakinta->Name = L"kifakinta";
			this->kifakinta->Size = System::Drawing::Size(80, 80);
			this->kifakinta->TabIndex = 2;
			this->kifakinta->TabStop = false;
			// 
			// saalounyelnas
			// 
			this->saalounyelnas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->saalounyelnas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saalounyelnas.BackgroundImage")));
			this->saalounyelnas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->saalounyelnas->Location = System::Drawing::Point(536, 372);
			this->saalounyelnas->Name = L"saalounyelnas";
			this->saalounyelnas->Size = System::Drawing::Size(80, 80);
			this->saalounyelnas->TabIndex = 3;
			this->saalounyelnas->TabStop = false;
			// 
			// shadi
			// 
			this->shadi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->shadi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shadi.BackgroundImage")));
			this->shadi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->shadi->Location = System::Drawing::Point(536, 488);
			this->shadi->Name = L"shadi";
			this->shadi->Size = System::Drawing::Size(80, 80);
			this->shadi->TabIndex = 4;
			this->shadi->TabStop = false;
			// 
			// zahret
			// 
			this->zahret->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->zahret->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zahret.BackgroundImage")));
			this->zahret->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->zahret->Location = System::Drawing::Point(536, 602);
			this->zahret->Name = L"zahret";
			this->zahret->Size = System::Drawing::Size(80, 80);
			this->zahret->TabIndex = 5;
			this->zahret->TabStop = false;
			// 
			// Habbaitakbeelsaif_label
			// 
			this->Habbaitakbeelsaif_label->AutoSize = true;
			this->Habbaitakbeelsaif_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->Habbaitakbeelsaif_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Habbaitakbeelsaif_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Habbaitakbeelsaif_label->ForeColor = System::Drawing::SystemColors::Control;
			this->Habbaitakbeelsaif_label->Location = System::Drawing::Point(622, 162);
			this->Habbaitakbeelsaif_label->Name = L"Habbaitakbeelsaif_label";
			this->Habbaitakbeelsaif_label->Size = System::Drawing::Size(534, 46);
			this->Habbaitakbeelsaif_label->TabIndex = 6;
			this->Habbaitakbeelsaif_label->Text = L"Habbaitak Be El Saif Fairuz";
			this->Habbaitakbeelsaif_label->Click += gcnew System::EventHandler(this, &Fayrouz::habbaitakbeelsaif_Click);
			// 
			// kifakinta_label
			// 
			this->kifakinta_label->AutoSize = true;
			this->kifakinta_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->kifakinta_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kifakinta_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kifakinta_label->ForeColor = System::Drawing::SystemColors::Control;
			this->kifakinta_label->Location = System::Drawing::Point(622, 275);
			this->kifakinta_label->Name = L"kifakinta_label";
			this->kifakinta_label->Size = System::Drawing::Size(322, 46);
			this->kifakinta_label->TabIndex = 7;
			this->kifakinta_label->Text = L"Kifak Inta Fairuz";
			this->kifakinta_label->Click += gcnew System::EventHandler(this, &Fayrouz::kifakinta_Click);
			// 
			// saalounyelnas_label
			// 
			this->saalounyelnas_label->AutoSize = true;
			this->saalounyelnas_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->saalounyelnas_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saalounyelnas_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saalounyelnas_label->ForeColor = System::Drawing::SystemColors::Control;
			this->saalounyelnas_label->Location = System::Drawing::Point(622, 388);
			this->saalounyelnas_label->Name = L"saalounyelnas_label";
			this->saalounyelnas_label->Size = System::Drawing::Size(459, 46);
			this->saalounyelnas_label->TabIndex = 8;
			this->saalounyelnas_label->Text = L"Saalouny El Nas Fairuz";
			this->saalounyelnas_label->Click += gcnew System::EventHandler(this, &Fayrouz::saalounyelnas_Click);
			// 
			// shadi_label
			// 
			this->shadi_label->AutoSize = true;
			this->shadi_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->shadi_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->shadi_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shadi_label->ForeColor = System::Drawing::SystemColors::Control;
			this->shadi_label->Location = System::Drawing::Point(622, 505);
			this->shadi_label->Name = L"shadi_label";
			this->shadi_label->Size = System::Drawing::Size(255, 46);
			this->shadi_label->TabIndex = 9;
			this->shadi_label->Text = L"Shadi Fairuz";
			this->shadi_label->Click += gcnew System::EventHandler(this, &Fayrouz::shadi_Click);
			// 
			// zahret_label
			// 
			this->zahret_label->AutoSize = true;
			this->zahret_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->zahret_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zahret_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zahret_label->ForeColor = System::Drawing::SystemColors::Control;
			this->zahret_label->Location = System::Drawing::Point(622, 612);
			this->zahret_label->Name = L"zahret_label";
			this->zahret_label->Size = System::Drawing::Size(479, 46);
			this->zahret_label->TabIndex = 10;
			this->zahret_label->Text = L"Zahret El Madaen Fairuz";
			this->zahret_label->Click += gcnew System::EventHandler(this, &Fayrouz::zahret_Click);
			// 
			// startqueue
			// 
			this->startqueue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->startqueue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startqueue.BackgroundImage")));
			this->startqueue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startqueue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startqueue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startqueue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->startqueue->Location = System::Drawing::Point(326, 455);
			this->startqueue->Name = L"startqueue";
			this->startqueue->Size = System::Drawing::Size(186, 94);
			this->startqueue->TabIndex = 11;
			this->startqueue->UseVisualStyleBackColor = false;
			this->startqueue->Click += gcnew System::EventHandler(this, &Fayrouz::startqueue_Click);
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
			this->play->TabIndex = 12;
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &Fayrouz::play_Click);
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
			this->volumecontrol->TabIndex = 33;
			this->volumecontrol->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumecontrol->Value = 50;
			this->volumecontrol->Scroll += gcnew System::EventHandler(this, &Fayrouz::volumecontrol_Scroll);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->progressBar1->Location = System::Drawing::Point(630, 1020);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(495, 5);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 25;
			this->progressBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Fayrouz::progressBar1_MouseClick);
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
			this->playprev->TabIndex = 26;
			this->playprev->UseVisualStyleBackColor = false;
			this->playprev->Click += gcnew System::EventHandler(this, &Fayrouz::playprev_Click);
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
			this->playnext->TabIndex = 27;
			this->playnext->UseVisualStyleBackColor = false;
			this->playnext->Click += gcnew System::EventHandler(this, &Fayrouz::playnext_Click);
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
			this->volume->TabIndex = 28;
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &Fayrouz::volume_Click);
			// 
			// albumcover
			// 
			this->albumcover->BackColor = System::Drawing::SystemColors::Desktop;
			this->albumcover->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->albumcover->Location = System::Drawing::Point(140, 958);
			this->albumcover->Name = L"albumcover";
			this->albumcover->Size = System::Drawing::Size(80, 80);
			this->albumcover->TabIndex = 29;
			this->albumcover->TabStop = false;
			// 
			// trackname
			// 
			this->trackname->AutoSize = true;
			this->trackname->BackColor = System::Drawing::SystemColors::Desktop;
			this->trackname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackname->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->trackname->Location = System::Drawing::Point(230, 968);
			this->trackname->Name = L"trackname";
			this->trackname->Size = System::Drawing::Size(77, 32);
			this->trackname->TabIndex = 30;
			this->trackname->Text = L"Doja";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::SystemColors::Desktop;
			this->start->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start->Location = System::Drawing::Point(628, 977);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(49, 20);
			this->start->TabIndex = 31;
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
			this->end->TabIndex = 32;
			this->end->Text = L"00:00";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Fayrouz::timer1_Tick);
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
			this->explore->TabIndex = 35;
			this->explore->UseVisualStyleBackColor = false;
			this->explore->Click += gcnew System::EventHandler(this, &Fayrouz::explore_Click);
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
			this->yourlibrary->TabIndex = 34;
			this->yourlibrary->UseVisualStyleBackColor = false;
			this->yourlibrary->Click += gcnew System::EventHandler(this, &Fayrouz::yourlibrary_Click);
			// 
			// artist
			// 
			this->artist->AutoSize = true;
			this->artist->BackColor = System::Drawing::SystemColors::Desktop;
			this->artist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artist->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->artist->Location = System::Drawing::Point(230, 1002);
			this->artist->Name = L"artist";
			this->artist->Size = System::Drawing::Size(152, 29);
			this->artist->TabIndex = 36;
			this->artist->Text = L"Central Cee";
			// 
			// info
			// 
			this->info->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"info.BackgroundImage")));
			this->info->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->info->Location = System::Drawing::Point(140, 455);
			this->info->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(273, 131);
			this->info->TabIndex = 37;
			this->info->TabStop = false;
			// 
			// reset
			// 
			this->reset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.BackgroundImage")));
			this->reset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reset->Location = System::Drawing::Point(731, 966);
			this->reset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(42, 35);
			this->reset->TabIndex = 59;
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Fayrouz::reset_Click);
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
			this->rand2->TabIndex = 62;
			this->rand2->UseVisualStyleBackColor = true;
			this->rand2->Visible = false;
			this->rand2->Click += gcnew System::EventHandler(this, &Fayrouz::rand2_Click);
			// 
			// rand
			// 
			this->rand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rand.BackgroundImage")));
			this->rand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rand->Location = System::Drawing::Point(981, 968);
			this->rand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->rand->Name = L"rand";
			this->rand->Size = System::Drawing::Size(42, 35);
			this->rand->TabIndex = 61;
			this->rand->UseVisualStyleBackColor = true;
			this->rand->Click += gcnew System::EventHandler(this, &Fayrouz::rand_Click);
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
			this->search_box->Location = System::Drawing::Point(184, 14);
			this->search_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(561, 37);
			this->search_box->TabIndex = 63;
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
			this->search->Location = System::Drawing::Point(152, 0);
			this->search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(654, 63);
			this->search->TabIndex = 64;
			this->search->UseVisualStyleBackColor = false;
			// 
			// Fayrouz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1712, 1048);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->search);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->startqueue);
			this->Controls->Add(this->artist);
			this->Controls->Add(this->explore);
			this->Controls->Add(this->yourlibrary);
			this->Controls->Add(this->volumecontrol);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->trackname);
			this->Controls->Add(this->albumcover);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->playnext);
			this->Controls->Add(this->playprev);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->play);
			this->Controls->Add(this->zahret_label);
			this->Controls->Add(this->shadi_label);
			this->Controls->Add(this->saalounyelnas_label);
			this->Controls->Add(this->kifakinta_label);
			this->Controls->Add(this->Habbaitakbeelsaif_label);
			this->Controls->Add(this->zahret);
			this->Controls->Add(this->shadi);
			this->Controls->Add(this->saalounyelnas);
			this->Controls->Add(this->kifakinta);
			this->Controls->Add(this->habbaitakbeelsaif);
			this->Controls->Add(this->cover);
			this->Controls->Add(this->info);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Fayrouz";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"anghami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Fayrouz::Fayrouz_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Fayrouz::Fayrouz_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->habbaitakbeelsaif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kifakinta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saalounyelnas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shadi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zahret))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumecontrol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->albumcover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->info))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// flags and global variables
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
			if (who == 1) mciSendStringA("open \"Habbaitak Be El Saif.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 2) mciSendStringA("open \"Kifak Inta.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 3) mciSendStringA("open \"Saalouny El Nas.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 4) mciSendStringA("open \"Shady.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			if (who == 5) mciSendStringA("open \"Zahret El Madaen.mp3\" type mpegvideo alias mp3", nullptr, 0, nullptr);
			progressBar1->Value = progress;
			timer1->Start();
			Bitmap^ img = gcnew Bitmap("pausebutton.png");
			play->BackgroundImage = img;
			flag_play_pause = 1;
			mciSendStringA("play mp3", nullptr, 0, nullptr);
		}
		//
	private: System::Void habbaitakbeelsaif_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("Habbaitak Be El Saif.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Habbaitak Be El Saif";
		artist->Text = "Fairuz";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:35";
		index = 2;
		mp3(1);
	}
	private: System::Void kifakinta_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("Kifak Inta.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Kifak Inta";
		artist->Text = "Fairuz";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:33";
		index = 3;
		mp3(2);
	}
	private: System::Void saalounyelnas_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("Saalouny El Nas.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Saalouny El Nas";
		artist->Text = "Fairuz";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "03:32";
		index = 4;
		mp3(3);
	}
	private: System::Void shadi_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("Shady.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Shadi";
		artist->Text = "Fairuz";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "02:36";
		index = 5;
		mp3(4);
	}
	private: System::Void zahret_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ img = gcnew Bitmap("Zahret El Madaen.png");
		albumcover->BackgroundImage = img;
		trackname->Text = "Zahret El Madaen";
		artist->Text = "Fairuz";
		progressBar1->Value = 0;
		progress = 0;
		end->Text = "08:33";
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
					habbaitakbeelsaif_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 2) {
					kifakinta_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 3) {
					saalounyelnas_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 4) {
					shadi_Click(simulatedSender, simulatedEventArgs);
				}
				else if (index == 5) {
					zahret_Click(simulatedSender, simulatedEventArgs);
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
	private: System::Void startqueue_Click(System::Object^ sender, System::EventArgs^ e) {
		q.Enqueue(Habbaitakbeelsaif_label->Text);
		q.Enqueue(kifakinta_label->Text);
		q.Enqueue(saalounyelnas_label->Text);
		q.Enqueue(shadi_label->Text);
		q.Enqueue(zahret_label->Text);
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		habbaitakbeelsaif_Click(simulatedSender, simulatedEventArgs);
	}
	private: System::Void playnext_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Object^ simulatedSender = nullptr;
		System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
		if (!s.isEmpty()) {
			int currentSongIndex = index;
			switch (currentSongIndex) {
			case 1:
				habbaitakbeelsaif_Click(simulatedSender, simulatedEventArgs);
				break;
			case 2:
				kifakinta_Click(simulatedSender, simulatedEventArgs);
				break;
			case 3:
				saalounyelnas_Click(simulatedSender, simulatedEventArgs);
				break;
			case 4:
				shadi_Click(simulatedSender, simulatedEventArgs);
				break;
			case 5:
				zahret_Click(simulatedSender, simulatedEventArgs);
				break;
			}
			s.push(currentSongIndex);
		}
		else {
			zahret_Click(simulatedSender, simulatedEventArgs);
			s.push(5);
		}
	}
	private: System::Void playprev_Click(System::Object^ sender, System::EventArgs^ e) {
		s.pop();
		index--;
		if (index >= 1) {
			switch (index) {
			case 1: zahret_Click(sender, e); break;
			case 2: habbaitakbeelsaif_Click(sender, e); break;
			case 3: kifakinta_Click(sender, e); break;
			case 4: saalounyelnas_Click(sender, e); break;
			case 5: shadi_Click(sender, e); break;
			}
		}
		else {
			index = 5;
			shadi_Click(sender, e);
		}
	}
	private: System::Void Fayrouz_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("play mp3 from 0", nullptr, 0, nullptr);
	progressBar1->Value = 0;
	progress = 0;
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	timer1_Tick(simulatedSender, simulatedEventArgs);
}
private: System::Void rand2_Click(System::Object^ sender, System::EventArgs^ e) {
	random = 0;
	rand2->Enabled = FALSE;
	rand2->Visible = FALSE;
	rand->Enabled = TRUE;
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
		habbaitakbeelsaif_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 2) {
		kifakinta_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 3) {
		saalounyelnas_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 4) {
		shadi_Click(simulatedSender, simulatedEventArgs);
	}
	else if (index == 5) {
		zahret_Click(simulatedSender, simulatedEventArgs);
		index = 1;
	}
}
private: System::Void Fayrouz_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Object^ simulatedSender = nullptr;
	System::EventArgs^ simulatedEventArgs = gcnew System::EventArgs();
	explore_Click(simulatedSender, simulatedEventArgs);
}
private: System::Void yourlibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendStringA("pause mp3", nullptr, 0, nullptr);
	this->Hide();
	MyForm1^ obj1 = gcnew MyForm1(this);
	obj1->ShowDialog();
}
};
}