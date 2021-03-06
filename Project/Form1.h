#pragma once
#include"file.h"
#include"About.h"
#include"Option.h"
#include"SetOption.h"
#include"optionfile.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::StatusStrip^  statusStrip1;
	public: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;


	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;

	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  insertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sourceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  parallelSourceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  splaySToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  soloSourceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lenzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  biConvexLensToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  planoConvextToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  planoConvexLensToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  planoConcaveLensToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mirrorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  soleMirrorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  concaveMirrorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  convexMirrorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  blackObjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  optionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  icon_panel;


	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  saveToolStripButton;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;



	private: System::Windows::Forms::ToolStripButton^  helpToolStripButton;
	private: System::Windows::Forms::Button^  cave_m_button;
	private: System::Windows::Forms::Button^  parallel_s_button;



private: System::Windows::Forms::Button^  solo_s_button;

private: System::Windows::Forms::Button^  splay_s_button;


private: System::Windows::Forms::Button^  twocave_l_button;
private: System::Windows::Forms::Button^  twoconvex_l_button;



private: System::Windows::Forms::Button^  onecave_l_button;

private: System::Windows::Forms::Button^  oneconvex_l_button;

private: System::Windows::Forms::Button^  black_obj_button;

private: System::Windows::Forms::Button^  sole_m_button;
private: System::Windows::Forms::Button^  convex_m_button;


private: System::Windows::Forms::SaveFileDialog^  saveDialog1;
private: System::Windows::Forms::OpenFileDialog^  openDialog1;
private: System::Windows::Forms::ToolStripMenuItem^  sourceToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  parallelToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  parallelSourceToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  parallelSourceToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  lensToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  biconvexLensToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  biconcaveLensToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  planoConvexToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  planoConcaveLensToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  mirrorToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  soleMirrorToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  concaveMirorToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  concaveMirorToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  blackObjectToolStripMenuItem1;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem;
public: System::Windows::Forms::Panel^  lab_panel;
private: 

private: 







	private: System::ComponentModel::IContainer^  components;

//programer define
//end programer define


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parallelSourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splaySToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soloSourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->lenzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->biConvexLensToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planoConvextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planoConvexLensToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planoConcaveLensToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mirrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soleMirrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->concaveMirrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convexMirrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackObjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->icon_panel = (gcnew System::Windows::Forms::Panel());
			this->parallel_s_button = (gcnew System::Windows::Forms::Button());
			this->solo_s_button = (gcnew System::Windows::Forms::Button());
			this->splay_s_button = (gcnew System::Windows::Forms::Button());
			this->twocave_l_button = (gcnew System::Windows::Forms::Button());
			this->twoconvex_l_button = (gcnew System::Windows::Forms::Button());
			this->onecave_l_button = (gcnew System::Windows::Forms::Button());
			this->oneconvex_l_button = (gcnew System::Windows::Forms::Button());
			this->black_obj_button = (gcnew System::Windows::Forms::Button());
			this->sole_m_button = (gcnew System::Windows::Forms::Button());
			this->convex_m_button = (gcnew System::Windows::Forms::Button());
			this->cave_m_button = (gcnew System::Windows::Forms::Button());
			this->lab_panel = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->sourceToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parallelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parallelSourceToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parallelSourceToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lensToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->biconvexLensToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->biconcaveLensToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planoConvexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planoConcaveLensToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mirrorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soleMirrorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->concaveMirorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->concaveMirorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackObjectToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->icon_panel->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel5, this->toolStripStatusLabel4});
			this->statusStrip1->Location = System::Drawing::Point(0, 446);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(749, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(54, 17);
			this->toolStripStatusLabel1->Text = L"Position : ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(97, 17);
			this->toolStripStatusLabel3->Text = L"                              ";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripStatusLabel5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripStatusLabel5.Image")));
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(16, 17);
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(88, 17);
			this->toolStripStatusLabel4->Text = L"Optic Laboratory";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->insertToolStripMenuItem, this->toolsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(749, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->toolStripSeparator1, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator2, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(137, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveAsToolStripMenuItem.Image")));
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As ...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(137, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// insertToolStripMenuItem
			// 
			this->insertToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->sourceToolStripMenuItem, 
				this->toolStripSeparator4, this->lenzToolStripMenuItem, this->mirrorToolStripMenuItem, this->blackObjectToolStripMenuItem});
			this->insertToolStripMenuItem->Name = L"insertToolStripMenuItem";
			this->insertToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->insertToolStripMenuItem->Text = L"Insert";
			// 
			// sourceToolStripMenuItem
			// 
			this->sourceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->parallelSourceToolStripMenuItem, 
				this->splaySToolStripMenuItem, this->soloSourceToolStripMenuItem});
			this->sourceToolStripMenuItem->Name = L"sourceToolStripMenuItem";
			this->sourceToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->sourceToolStripMenuItem->Text = L"Source";
			// 
			// parallelSourceToolStripMenuItem
			// 
			this->parallelSourceToolStripMenuItem->Name = L"parallelSourceToolStripMenuItem";
			this->parallelSourceToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->parallelSourceToolStripMenuItem->Text = L"Parallel Source";
			this->parallelSourceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::parallelSourceToolStripMenuItem_Click);
			// 
			// splaySToolStripMenuItem
			// 
			this->splaySToolStripMenuItem->Name = L"splaySToolStripMenuItem";
			this->splaySToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->splaySToolStripMenuItem->Text = L"WideSpread Source";
			this->splaySToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::splaySToolStripMenuItem_Click);
			// 
			// soloSourceToolStripMenuItem
			// 
			this->soloSourceToolStripMenuItem->Name = L"soloSourceToolStripMenuItem";
			this->soloSourceToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->soloSourceToolStripMenuItem->Text = L"Solo Source";
			this->soloSourceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::soloSourceToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(130, 6);
			// 
			// lenzToolStripMenuItem
			// 
			this->lenzToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->biConvexLensToolStripMenuItem, 
				this->planoConvextToolStripMenuItem, this->planoConvexLensToolStripMenuItem, this->planoConcaveLensToolStripMenuItem});
			this->lenzToolStripMenuItem->Name = L"lenzToolStripMenuItem";
			this->lenzToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->lenzToolStripMenuItem->Text = L"Lens";
			// 
			// biConvexLensToolStripMenuItem
			// 
			this->biConvexLensToolStripMenuItem->Name = L"biConvexLensToolStripMenuItem";
			this->biConvexLensToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->biConvexLensToolStripMenuItem->Text = L"BiConvex Lens";
			this->biConvexLensToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::biConvexLensToolStripMenuItem_Click);
			// 
			// planoConvextToolStripMenuItem
			// 
			this->planoConvextToolStripMenuItem->Name = L"planoConvextToolStripMenuItem";
			this->planoConvextToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->planoConvextToolStripMenuItem->Text = L"BiConcave Lens";
			this->planoConvextToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::planoConvextToolStripMenuItem_Click);
			// 
			// planoConvexLensToolStripMenuItem
			// 
			this->planoConvexLensToolStripMenuItem->Name = L"planoConvexLensToolStripMenuItem";
			this->planoConvexLensToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->planoConvexLensToolStripMenuItem->Text = L"PlanoConvex Lens";
			this->planoConvexLensToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::planoConvexLensToolStripMenuItem_Click);
			// 
			// planoConcaveLensToolStripMenuItem
			// 
			this->planoConcaveLensToolStripMenuItem->Name = L"planoConcaveLensToolStripMenuItem";
			this->planoConcaveLensToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->planoConcaveLensToolStripMenuItem->Text = L"PlanoConcave Lens";
			this->planoConcaveLensToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::planoConcaveLensToolStripMenuItem_Click);
			// 
			// mirrorToolStripMenuItem
			// 
			this->mirrorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->soleMirrorToolStripMenuItem, 
				this->concaveMirrorToolStripMenuItem, this->convexMirrorToolStripMenuItem});
			this->mirrorToolStripMenuItem->Name = L"mirrorToolStripMenuItem";
			this->mirrorToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->mirrorToolStripMenuItem->Text = L"Mirror";
			// 
			// soleMirrorToolStripMenuItem
			// 
			this->soleMirrorToolStripMenuItem->Name = L"soleMirrorToolStripMenuItem";
			this->soleMirrorToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->soleMirrorToolStripMenuItem->Text = L"Sole Mirror";
			this->soleMirrorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::soleMirrorToolStripMenuItem_Click);
			// 
			// concaveMirrorToolStripMenuItem
			// 
			this->concaveMirrorToolStripMenuItem->Name = L"concaveMirrorToolStripMenuItem";
			this->concaveMirrorToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->concaveMirrorToolStripMenuItem->Text = L"Concave Mirror";
			this->concaveMirrorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::concaveMirrorToolStripMenuItem_Click);
			// 
			// convexMirrorToolStripMenuItem
			// 
			this->convexMirrorToolStripMenuItem->Name = L"convexMirrorToolStripMenuItem";
			this->convexMirrorToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->convexMirrorToolStripMenuItem->Text = L"Convex Mirror";
			this->convexMirrorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::convexMirrorToolStripMenuItem_Click);
			// 
			// blackObjectToolStripMenuItem
			// 
			this->blackObjectToolStripMenuItem->Name = L"blackObjectToolStripMenuItem";
			this->blackObjectToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->blackObjectToolStripMenuItem->Text = L"Black Object";
			this->blackObjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::blackObjectToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->optionToolStripMenuItem});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->toolsToolStripMenuItem->Text = L"View";
			// 
			// optionToolStripMenuItem
			// 
			this->optionToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"optionToolStripMenuItem.Image")));
			this->optionToolStripMenuItem->Name = L"optionToolStripMenuItem";
			this->optionToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->optionToolStripMenuItem->Text = L"Option";
			this->optionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::optionToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// icon_panel
			// 
			this->icon_panel->BackColor = System::Drawing::Color::SaddleBrown;
			this->icon_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"icon_panel.BackgroundImage")));
			this->icon_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->icon_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->icon_panel->Controls->Add(this->parallel_s_button);
			this->icon_panel->Controls->Add(this->solo_s_button);
			this->icon_panel->Controls->Add(this->splay_s_button);
			this->icon_panel->Controls->Add(this->twocave_l_button);
			this->icon_panel->Controls->Add(this->twoconvex_l_button);
			this->icon_panel->Controls->Add(this->onecave_l_button);
			this->icon_panel->Controls->Add(this->oneconvex_l_button);
			this->icon_panel->Controls->Add(this->black_obj_button);
			this->icon_panel->Controls->Add(this->sole_m_button);
			this->icon_panel->Controls->Add(this->convex_m_button);
			this->icon_panel->Controls->Add(this->cave_m_button);
			this->icon_panel->Location = System::Drawing::Point(3, 53);
			this->icon_panel->Name = L"icon_panel";
			this->icon_panel->Size = System::Drawing::Size(135, 382);
			this->icon_panel->TabIndex = 2;
			this->icon_panel->Tag = L"";
			// 
			// parallel_s_button
			// 
			this->parallel_s_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->parallel_s_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"parallel_s_button.BackgroundImage")));
			this->parallel_s_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->parallel_s_button->Location = System::Drawing::Point(35, 317);
			this->parallel_s_button->Name = L"parallel_s_button";
			this->parallel_s_button->Size = System::Drawing::Size(61, 56);
			this->parallel_s_button->TabIndex = 10;
			this->parallel_s_button->UseVisualStyleBackColor = true;
			this->parallel_s_button->Click += gcnew System::EventHandler(this, &Form1::parallel_s_button_Click);
			// 
			// solo_s_button
			// 
			this->solo_s_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->solo_s_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"solo_s_button.BackgroundImage")));
			this->solo_s_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->solo_s_button->Location = System::Drawing::Point(68, 255);
			this->solo_s_button->Name = L"solo_s_button";
			this->solo_s_button->Size = System::Drawing::Size(61, 56);
			this->solo_s_button->TabIndex = 9;
			this->solo_s_button->UseVisualStyleBackColor = true;
			this->solo_s_button->Click += gcnew System::EventHandler(this, &Form1::solo_s_button_Click);
			// 
			// splay_s_button
			// 
			this->splay_s_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->splay_s_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"splay_s_button.BackgroundImage")));
			this->splay_s_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->splay_s_button->Location = System::Drawing::Point(4, 255);
			this->splay_s_button->Name = L"splay_s_button";
			this->splay_s_button->Size = System::Drawing::Size(61, 56);
			this->splay_s_button->TabIndex = 8;
			this->splay_s_button->UseVisualStyleBackColor = true;
			this->splay_s_button->Click += gcnew System::EventHandler(this, &Form1::splay_s_button_Click);
			// 
			// twocave_l_button
			// 
			this->twocave_l_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->twocave_l_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"twocave_l_button.BackgroundImage")));
			this->twocave_l_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->twocave_l_button->Location = System::Drawing::Point(68, 193);
			this->twocave_l_button->Name = L"twocave_l_button";
			this->twocave_l_button->Size = System::Drawing::Size(61, 56);
			this->twocave_l_button->TabIndex = 7;
			this->twocave_l_button->UseVisualStyleBackColor = true;
			this->twocave_l_button->Click += gcnew System::EventHandler(this, &Form1::twocave_l_button_Click);
			// 
			// twoconvex_l_button
			// 
			this->twoconvex_l_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->twoconvex_l_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"twoconvex_l_button.BackgroundImage")));
			this->twoconvex_l_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->twoconvex_l_button->Location = System::Drawing::Point(4, 193);
			this->twoconvex_l_button->Name = L"twoconvex_l_button";
			this->twoconvex_l_button->Size = System::Drawing::Size(61, 56);
			this->twoconvex_l_button->TabIndex = 6;
			this->twoconvex_l_button->UseVisualStyleBackColor = true;
			this->twoconvex_l_button->Click += gcnew System::EventHandler(this, &Form1::twoconvex_l_button_Click);
			// 
			// onecave_l_button
			// 
			this->onecave_l_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->onecave_l_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"onecave_l_button.BackgroundImage")));
			this->onecave_l_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->onecave_l_button->Location = System::Drawing::Point(69, 131);
			this->onecave_l_button->Name = L"onecave_l_button";
			this->onecave_l_button->Size = System::Drawing::Size(61, 56);
			this->onecave_l_button->TabIndex = 5;
			this->onecave_l_button->UseVisualStyleBackColor = true;
			this->onecave_l_button->Click += gcnew System::EventHandler(this, &Form1::onecave_l_button_Click);
			// 
			// oneconvex_l_button
			// 
			this->oneconvex_l_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->oneconvex_l_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"oneconvex_l_button.BackgroundImage")));
			this->oneconvex_l_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->oneconvex_l_button->Location = System::Drawing::Point(4, 131);
			this->oneconvex_l_button->Name = L"oneconvex_l_button";
			this->oneconvex_l_button->Size = System::Drawing::Size(61, 56);
			this->oneconvex_l_button->TabIndex = 4;
			this->oneconvex_l_button->UseVisualStyleBackColor = true;
			this->oneconvex_l_button->Click += gcnew System::EventHandler(this, &Form1::oneconvex_l_button_Click);
			// 
			// black_obj_button
			// 
			this->black_obj_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->black_obj_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"black_obj_button.BackgroundImage")));
			this->black_obj_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->black_obj_button->Location = System::Drawing::Point(68, 69);
			this->black_obj_button->Name = L"black_obj_button";
			this->black_obj_button->Size = System::Drawing::Size(61, 56);
			this->black_obj_button->TabIndex = 3;
			this->black_obj_button->UseVisualStyleBackColor = true;
			this->black_obj_button->Click += gcnew System::EventHandler(this, &Form1::black_obj_button_Click);
			// 
			// sole_m_button
			// 
			this->sole_m_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->sole_m_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sole_m_button.BackgroundImage")));
			this->sole_m_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sole_m_button->Location = System::Drawing::Point(4, 69);
			this->sole_m_button->Name = L"sole_m_button";
			this->sole_m_button->Size = System::Drawing::Size(61, 56);
			this->sole_m_button->TabIndex = 2;
			this->sole_m_button->UseVisualStyleBackColor = true;
			this->sole_m_button->Click += gcnew System::EventHandler(this, &Form1::sole_m_button_Click);
			// 
			// convex_m_button
			// 
			this->convex_m_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->convex_m_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"convex_m_button.BackgroundImage")));
			this->convex_m_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->convex_m_button->Location = System::Drawing::Point(4, 7);
			this->convex_m_button->Name = L"convex_m_button";
			this->convex_m_button->Size = System::Drawing::Size(61, 56);
			this->convex_m_button->TabIndex = 1;
			this->convex_m_button->UseVisualStyleBackColor = true;
			this->convex_m_button->Click += gcnew System::EventHandler(this, &Form1::convex_m_button_Click);
			// 
			// cave_m_button
			// 
			this->cave_m_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cave_m_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cave_m_button.BackgroundImage")));
			this->cave_m_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cave_m_button->Location = System::Drawing::Point(68, 7);
			this->cave_m_button->Name = L"cave_m_button";
			this->cave_m_button->Size = System::Drawing::Size(61, 56);
			this->cave_m_button->TabIndex = 0;
			this->cave_m_button->UseVisualStyleBackColor = true;
			this->cave_m_button->Click += gcnew System::EventHandler(this, &Form1::cave_m_button_Click);
			// 
			// lab_panel
			// 
			this->lab_panel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->lab_panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lab_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lab_panel->ContextMenuStrip = this->contextMenuStrip1;
			this->lab_panel->Cursor = System::Windows::Forms::Cursors::Default;
			this->lab_panel->Location = System::Drawing::Point(141, 52);
			this->lab_panel->Name = L"lab_panel";
			this->lab_panel->Size = System::Drawing::Size(597, 383);
			this->lab_panel->TabIndex = 3;
			this->lab_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			this->lab_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panel2_MouseMove);
			this->lab_panel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::lab_panel_MouseDown);
			this->lab_panel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::lab_panel_MouseUp);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->sourceToolStripMenuItem1, 
				this->lensToolStripMenuItem, this->mirrorToolStripMenuItem1, this->blackObjectToolStripMenuItem1});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(134, 92);
			// 
			// sourceToolStripMenuItem1
			// 
			this->sourceToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->parallelToolStripMenuItem, 
				this->parallelSourceToolStripMenuItem1, this->parallelSourceToolStripMenuItem2});
			this->sourceToolStripMenuItem1->Name = L"sourceToolStripMenuItem1";
			this->sourceToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->sourceToolStripMenuItem1->Text = L"Source";
			// 
			// parallelToolStripMenuItem
			// 
			this->parallelToolStripMenuItem->Name = L"parallelToolStripMenuItem";
			this->parallelToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->parallelToolStripMenuItem->Text = L"Parallel Source";
			this->parallelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::parallelToolStripMenuItem_Click);
			// 
			// parallelSourceToolStripMenuItem1
			// 
			this->parallelSourceToolStripMenuItem1->Name = L"parallelSourceToolStripMenuItem1";
			this->parallelSourceToolStripMenuItem1->Size = System::Drawing::Size(168, 22);
			this->parallelSourceToolStripMenuItem1->Text = L"WideSpread Source";
			this->parallelSourceToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::parallelSourceToolStripMenuItem1_Click_1);
			// 
			// parallelSourceToolStripMenuItem2
			// 
			this->parallelSourceToolStripMenuItem2->Name = L"parallelSourceToolStripMenuItem2";
			this->parallelSourceToolStripMenuItem2->Size = System::Drawing::Size(168, 22);
			this->parallelSourceToolStripMenuItem2->Text = L"Solo Source";
			this->parallelSourceToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::parallelSourceToolStripMenuItem2_Click);
			// 
			// lensToolStripMenuItem
			// 
			this->lensToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->biconvexLensToolStripMenuItem1, 
				this->biconcaveLensToolStripMenuItem, this->planoConvexToolStripMenuItem, this->planoConcaveLensToolStripMenuItem1});
			this->lensToolStripMenuItem->Name = L"lensToolStripMenuItem";
			this->lensToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->lensToolStripMenuItem->Text = L"Lens";
			// 
			// biconvexLensToolStripMenuItem1
			// 
			this->biconvexLensToolStripMenuItem1->Name = L"biconvexLensToolStripMenuItem1";
			this->biconvexLensToolStripMenuItem1->Size = System::Drawing::Size(167, 22);
			this->biconvexLensToolStripMenuItem1->Text = L"BiConvex Lens";
			this->biconvexLensToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::biconvexLensToolStripMenuItem1_Click_1);
			// 
			// biconcaveLensToolStripMenuItem
			// 
			this->biconcaveLensToolStripMenuItem->Name = L"biconcaveLensToolStripMenuItem";
			this->biconcaveLensToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->biconcaveLensToolStripMenuItem->Text = L"BiConcave Lens";
			this->biconcaveLensToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::biconcaveLensToolStripMenuItem_Click);
			// 
			// planoConvexToolStripMenuItem
			// 
			this->planoConvexToolStripMenuItem->Name = L"planoConvexToolStripMenuItem";
			this->planoConvexToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->planoConvexToolStripMenuItem->Text = L"PlanoConvex Lens";
			this->planoConvexToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::planoConvexToolStripMenuItem_Click);
			// 
			// planoConcaveLensToolStripMenuItem1
			// 
			this->planoConcaveLensToolStripMenuItem1->Name = L"planoConcaveLensToolStripMenuItem1";
			this->planoConcaveLensToolStripMenuItem1->Size = System::Drawing::Size(167, 22);
			this->planoConcaveLensToolStripMenuItem1->Text = L"PlanoConcave Lens";
			this->planoConcaveLensToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::planoConcaveLensToolStripMenuItem1_Click);
			// 
			// mirrorToolStripMenuItem1
			// 
			this->mirrorToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->soleMirrorToolStripMenuItem1, 
				this->concaveMirorToolStripMenuItem, this->concaveMirorToolStripMenuItem1});
			this->mirrorToolStripMenuItem1->Name = L"mirrorToolStripMenuItem1";
			this->mirrorToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->mirrorToolStripMenuItem1->Text = L"Mirror";
			// 
			// soleMirrorToolStripMenuItem1
			// 
			this->soleMirrorToolStripMenuItem1->Name = L"soleMirrorToolStripMenuItem1";
			this->soleMirrorToolStripMenuItem1->Size = System::Drawing::Size(143, 22);
			this->soleMirrorToolStripMenuItem1->Text = L"Sole Mirror";
			this->soleMirrorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::soleMirrorToolStripMenuItem1_Click);
			// 
			// concaveMirorToolStripMenuItem
			// 
			this->concaveMirorToolStripMenuItem->Name = L"concaveMirorToolStripMenuItem";
			this->concaveMirorToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->concaveMirorToolStripMenuItem->Text = L"Convex Miror";
			this->concaveMirorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::concaveMirorToolStripMenuItem_Click);
			// 
			// concaveMirorToolStripMenuItem1
			// 
			this->concaveMirorToolStripMenuItem1->Name = L"concaveMirorToolStripMenuItem1";
			this->concaveMirorToolStripMenuItem1->Size = System::Drawing::Size(143, 22);
			this->concaveMirorToolStripMenuItem1->Text = L"Concave Miror";
			this->concaveMirorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::concaveMirorToolStripMenuItem1_Click);
			// 
			// blackObjectToolStripMenuItem1
			// 
			this->blackObjectToolStripMenuItem1->Name = L"blackObjectToolStripMenuItem1";
			this->blackObjectToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->blackObjectToolStripMenuItem1->Text = L"Black Object";
			this->blackObjectToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::blackObjectToolStripMenuItem1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->newToolStripButton, 
				this->openToolStripButton, this->saveToolStripButton, this->toolStripSeparator9, this->helpToolStripButton});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(749, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::toolStrip1_ItemClicked);
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(23, 22);
			this->newToolStripButton->Text = L"&New";
			this->newToolStripButton->Click += gcnew System::EventHandler(this, &Form1::newToolStripButton_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Open";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &Form1::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(23, 22);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &Form1::saveToolStripButton_Click);
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(6, 25);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(23, 22);
			this->helpToolStripButton->Text = L"He&lp";
			this->helpToolStripButton->Click += gcnew System::EventHandler(this, &Form1::helpToolStripButton_Click);
			// 
			// saveDialog1
			// 
			this->saveDialog1->Filter = L"MEM files (*.mem)|*.mem|All files (*.*)|*.*";
			this->saveDialog1->Title = L"Save Location Optic Labratory";
			// 
			// openDialog1
			// 
			this->openDialog1->FileName = L"openFileDialog1";
			this->openDialog1->Filter = L"MEM files (*.mem)|*.mem";
			this->openDialog1->Title = L"Open File For Optic Labratory";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->removeToolStripMenuItem});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(114, 26);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::removeToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(749, 468);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->lab_panel);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->icon_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(757, 500);
			this->MinimumSize = System::Drawing::Size(757, 500);
			this->Name = L"Form1";
			this->Text = L"Optic Laboratory";
			this->Deactivate += gcnew System::EventHandler(this, &Form1::Form1_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->RegionChanged += gcnew System::EventHandler(this, &Form1::Form1_RegionChanged);
			this->EnabledChanged += gcnew System::EventHandler(this, &Form1::Form1_EnabledChanged);
			this->ParentChanged += gcnew System::EventHandler(this, &Form1::Form1_ParentChanged);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			this->ChangeUICues += gcnew System::Windows::Forms::UICuesEventHandler(this, &Form1::Form1_ChangeUICues);
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->Enter += gcnew System::EventHandler(this, &Form1::Form1_Enter);
			this->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &Form1::Form1_Layout);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->MdiChildActivate += gcnew System::EventHandler(this, &Form1::Form1_MdiChildActivate);
			this->Leave += gcnew System::EventHandler(this, &Form1::Form1_Leave);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->icon_panel->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 statusStrip1->Items[1]->Text=e->X.ToString()+ " , " + e->Y.ToString();
			 }

private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void parallelSourceToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void biconvexLensToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

		 bool cansave;
		 String^ savepath;
		 bool saved;

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 en=gcnew environment(lab_panel->Height,lab_panel->Width);
			 cansave=false;
			 saved=true;
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 About^ aboutform =gcnew About();
			 aboutform->Show();
		 }
private: System::Void optionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Option^ optionform=gcnew Option();
			 optionform->Show();
		 }
private: System::Void helpToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			aboutToolStripMenuItem_Click(sender, e);
		 }
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(!saved)
				 if(Windows::Forms::MessageBox::Show("Do You Want Save Current Labratory ?","Save Labratory",Windows::Forms::MessageBoxButtons::YesNo)==Windows::Forms::DialogResult::Yes)
					saveToolStripMenuItem_Click(sender,e);

			  en->clearall();
			  lab_panel->Controls->Clear();
			  lab_panel->Refresh();

			  openDialog1->ShowDialog();
			  if(openDialog1->FileName->Contains(".mem"))
			  {
			   	  openfromfile(openDialog1->FileName);
				  cansave=true;
				  savepath=openDialog1->FileName;
				  saved=true;
			  }
		 }

		
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				if(cansave==true)
				{				
					savetofile(savepath);
					saved=true;
				}
				else
					saveAsToolStripMenuItem_Click(sender,e);
			 
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 	saveDialog1->ShowDialog();
			if(saveDialog1->FileName->Contains(".mem"))
			{
				savetofile(saveDialog1->FileName);	
				cansave=true;
				savepath=openDialog1->FileName;
				saved=true;
			}
		 }
private: System::Void Form1_Deactivate(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void openToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			openToolStripMenuItem_Click(sender,e);
		 }
private: System::Void saveToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 saveToolStripMenuItem_Click(sender,e);
		 }
private: void openfromfile(String^ path)
		 {
			 
			 savefile^ f;
			 System::Runtime::Serialization::Formatters::Binary::BinaryFormatter^ binformatter = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
			 System::IO::FileStream^ fstream = gcnew IO::FileStream(path,IO::FileMode::Open,IO::FileAccess::Read);
			 
			 while(fstream->Position!=fstream->Length)
			 {
			 	f=(savefile^)binformatter->Deserialize(fstream);
				PictureBox^ p=gcnew PictureBox();
				if(f->type==1)
				{
					glum^ gptr = gcnew glum(f->x,f->y,f->width,f->height,f->key);
					en->add_element(gptr);
				    
					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i=gcnew System::Drawing::Bitmap("Black_object.bmp");
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==2)
				{
					cave_mirror^ gptr = gcnew cave_mirror(f->x,f->y,f->width,f->height,f->key,f->angle);
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
					if(gptr->get_angle()==0)
						i=gcnew System::Drawing::Bitmap("concave_mirror_0.bmp");
					else if(gptr->get_angle()==90)
						i=gcnew System::Drawing::Bitmap("concave_mirror_90.bmp");
					else if(gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("concave_mirror_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("concave_mirror_270.bmp");
					
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==3)
				{
					convex_mirror^ gptr = gcnew convex_mirror(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
					if(gptr->get_angle()==0)
						i=gcnew System::Drawing::Bitmap("convex_mirror_0.bmp");
					else if(gptr->get_angle()==90)
					    i=gcnew System::Drawing::Bitmap("convex_mirror_90.bmp");
					else if(gptr->get_angle()==180)
					    i=gcnew System::Drawing::Bitmap("convex_mirror_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("convex_mirror_270.bmp");
					
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==4)
				{
					onecave_lenz^ gptr = gcnew onecave_lenz(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
					if(gptr->get_angle()==0)
						i=gcnew System::Drawing::Bitmap("planoconcave_lens_0.bmp");
					else if(gptr->get_angle()==90)
						i=gcnew System::Drawing::Bitmap("planoconcave_lens_90.bmp");
					else if(gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("planoconcave_lens_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("planoconcave_lens_270.bmp");
					
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==5)
				{
					oneconvex_lenz^ gptr = gcnew oneconvex_lenz(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
				    if(gptr->get_angle()==0)
						i=gcnew System::Drawing::Bitmap("planoconvex_lens_0.bmp");
					else if(gptr->get_angle()==90)
						i=gcnew System::Drawing::Bitmap("planoconvex_lens_90.bmp");
					else if(gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("planoconvex_lens_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("planoconvex_lens_270.bmp");

					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==6)
				{
					twocave_lenz^ gptr = gcnew twocave_lenz(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
					if(gptr->get_angle()==0 || gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("biconcave_lens_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("biconcave_lens_90.bmp");

					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==7)
				{
					twoconvex_lenz^ gptr = gcnew twoconvex_lenz(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i;
					if(gptr->get_angle()==0 || gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("biconvex_lens_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("biconvex_lens_90.bmp");

					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==8)
				{
					sole_mirror^ gptr = gcnew sole_mirror(f->x,f->y,f->width,f->height,f->key,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();

					System::Drawing::Image^ i;
					if(gptr->get_angle()==0)
						i=gcnew System::Drawing::Bitmap("sole_mirror_0.bmp");
					else if(gptr->get_angle()==90)
						i=gcnew System::Drawing::Bitmap("sole_mirror_90.bmp");
					else if(gptr->get_angle()==180)
						i=gcnew System::Drawing::Bitmap("sole_mirror_180.bmp");
					else
						i=gcnew System::Drawing::Bitmap("sole_mirror_270.bmp");
					p->BackgroundImage=(System::Drawing::Image^)i;
				}

				else if(f->type==9)
				{
					solo_source^ gptr = gcnew solo_source(f->x,f->y,f->width,f->height,f->key,f->angle);
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i=gcnew System::Drawing::Bitmap("splay.bmp");
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==10)
				{
					parallel_source^ gptr = gcnew parallel_source(f->x,f->y,f->width,f->height,f->key,f->num,f->angle);
					
					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i=gcnew System::Drawing::Bitmap("parallel 2.bmp");
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				else if(f->type==11)
				{
					widespread_source^ gptr = gcnew widespread_source(f->x,f->y,f->width,f->height,f->key,f->num);

					en->add_element(gptr);

					p->Size=Drawing::Size(Convert::ToInt32(gptr->get_height()),Convert::ToInt32(gptr->get_width()));
					p->Location=Point(Convert::ToInt32(gptr->get_x()),Convert::ToInt32(gptr->get_y()));
					key=gptr->get_key();
					p->Tag=key.ToString();
					System::Drawing::Image^ i=gcnew System::Drawing::Bitmap("splay.bmp");
					p->BackgroundImage=(System::Drawing::Image^)i;
				}
				
					
					p->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
					p->ContextMenuStrip=contextMenuStrip2;
				    p->MouseDown +=gcnew MouseEventHandler(this, &Form1::pic1_MouseDown);
				    p->MouseMove +=gcnew MouseEventHandler(this, &Form1::pic1_MouseMove);
				    p->MouseUp +=gcnew MouseEventHandler(this, &Form1::pic1_MouseUp);
				    lab_panel->Controls->Add(p);
			 }
			 en->run();
			 draw();
		 }
		 
private: void savetofile(String^ path)
		 {
			 savefile^ f=gcnew savefile();
			 System::Runtime::Serialization::Formatters::Binary::BinaryFormatter^ binformatter = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
			 System::IO::FileStream^ fstream = gcnew IO::FileStream(path,IO::FileMode::Create,IO::FileAccess::Write);
			 
			 for(int i=0 ; i<en->ar1->Length ; i++)
			 {
				if(dynamic_cast<glum^>(en->ar1[i]))
				{
					glum^ gptr = dynamic_cast<glum^>(en->ar1[i]);
					f->type=1;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=0;
					f->num=0;
				}
				else if(dynamic_cast<cave_mirror^>(en->ar1[i]))
				{
					cave_mirror^ gptr = dynamic_cast<cave_mirror^>(en->ar1[i]);
					f->type=2;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<convex_mirror^>(en->ar1[i]))
				{
					convex_mirror^ gptr = dynamic_cast<convex_mirror^>(en->ar1[i]);
					f->type=3;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<onecave_lenz^>(en->ar1[i]))
				{
					onecave_lenz^ gptr = dynamic_cast<onecave_lenz^>(en->ar1[i]);
					f->type=4;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<oneconvex_lenz^>(en->ar1[i]))
				{
					oneconvex_lenz^ gptr = dynamic_cast<oneconvex_lenz^>(en->ar1[i]);
					f->type=5;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<twocave_lenz^>(en->ar1[i]))
				{
					twocave_lenz^ gptr = dynamic_cast<twocave_lenz^>(en->ar1[i]);
					f->type=6;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<twoconvex_lenz^>(en->ar1[i]))
				{
					twoconvex_lenz^ gptr = dynamic_cast<twoconvex_lenz^>(en->ar1[i]);
					f->type=7;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<sole_mirror^>(en->ar1[i]))
				{
					sole_mirror^ gptr = dynamic_cast<sole_mirror^>(en->ar1[i]);
					f->type=8;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}

				else if(dynamic_cast<solo_source^>(en->ar1[i]))
				{
					solo_source^ gptr = dynamic_cast<solo_source^>(en->ar1[i]);
					f->type=9;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=0;
				}
				else if(dynamic_cast<parallel_source^>(en->ar1[i]))
				{
					parallel_source^ gptr = dynamic_cast<parallel_source^>(en->ar1[i]);
					f->type=10;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=gptr->get_angle();
					f->num=gptr->get_num_beams();
				}
				else if(dynamic_cast<widespread_source^>(en->ar1[i]))
				{
					widespread_source^ gptr = dynamic_cast<widespread_source^>(en->ar1[i]);
					f->type=11;
					f->height=gptr->get_height();
					f->width=gptr->get_width();
					f->x=gptr->get_x();
					f->y=gptr->get_y();
					f->key=gptr->get_key();
					f->angle=0;
					f->num=gptr->get_num_beams();
				}
			    binformatter->Serialize(fstream,f);
				
			 }
			 fstream->Close();
		 }

private: System::Void convex_m_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("convex_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("convex_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void cave_m_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("cave_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("concave_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void sole_m_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Sole";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("sole0_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("sole_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void black_obj_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->angle_updown->Visible=false;
			setform->angle_label->Visible=false;
			setform->type_label->Text="Black Object";
			setform->subtype_label->Text="Black Object";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("glum.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("black_object.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void oneconvex_l_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Plano Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("oneconvex_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("planoconvex_lens_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void onecave_l_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Plano Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("onecove_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("planoconcave_lens_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void twoconvex_l_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Bi Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("twoconvex_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("biconvex_lens_180.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void twocave_l_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Bi Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("twocave_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("biconcave_lens_180.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void splay_s_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->angle_updown->Visible=false;
			setform->angle_label->Visible=false;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="WideSpread";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("splay_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("splay.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void solo_s_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->angle_updown->Increment=1;
			setform->angle_updown->Maximum=359;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="Solo";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("solo_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("splay.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void parallel_s_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->height_textBox->ReadOnly=true;
			setform->width_textBox->ReadOnly=true;
			setform->angle_updown->Increment=1;
			setform->angle_updown->Maximum=359;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="Parallel";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("parallel_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("parallel 1.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void parallelSourceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			parallel_s_button_Click(sender,e);
		 }
private: System::Void splaySToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 splay_s_button_Click(sender,e);
		 }
private: System::Void soloSourceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 solo_s_button_Click(sender,e);
		 }
private: System::Void biConvexLensToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 twoconvex_l_button_Click(sender,e);
		 }
private: System::Void planoConvextToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 twocave_l_button_Click(sender,e);
		 }
private: System::Void planoConvexLensToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 oneconvex_l_button_Click(sender,e);
		 }
private: System::Void planoConcaveLensToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 onecave_l_button_Click(sender,e);
		 }
private: System::Void soleMirrorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 sole_m_button_Click(sender,e);
		 }
private: System::Void concaveMirrorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cave_m_button_Click(sender,e);
		 }
private: System::Void convexMirrorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 convex_m_button_Click(sender,e);
		 }
private: System::Void blackObjectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  black_obj_button_Click(sender,e);
		 }
		
		environment^ en;
		int key;
		int click;
		int x_mouse;
		int y_mouse;
		String^ pic_tag;

private:void pic1_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
		{
			
			if(e->Button==Windows::Forms::MouseButtons::Right)
			{
				Windows::Forms::PictureBox^ pic=safe_cast<Windows::Forms::PictureBox^>(sender);
				pic_tag = pic->Tag->ToString();	
			}
			if(e->Button==Windows::Forms::MouseButtons::Left)
			{
				if(this->Cursor==Windows::Forms::Cursors::SizeNWSE)
					 click=1;
				else if(this->Cursor==Windows::Forms::Cursors::SizeWE)
					 click=2;
				else if(this->Cursor==Windows::Forms::Cursors::SizeNS)
					 click=3;
				else 
				{
					click = 4;
					x_mouse=e->X;
					y_mouse=e->Y;
				}
			}
		}
private:void pic1_MouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
		{
			   Windows::Forms::PictureBox^ pic=safe_cast<Windows::Forms::PictureBox^>(sender);
			
			    if(pic->Width>=100 && e->X>pic->Width)
					return;
				if(pic->Height>=100 && e->Y>pic->Height)
					return;

			    if(e->X>=pic->Width-1 && e->Y>=pic->Height-1)
				   this->Cursor=Windows::Forms::Cursors::SizeNWSE;
				else if(e->X>=pic->Width-1)
				   this->Cursor=Windows::Forms::Cursors::SizeWE;
				else if(e->Y>=pic->Height-1)
				   this->Cursor=Windows::Forms::Cursors::SizeNS;
				else 
				   this->Cursor=Windows::Forms::Cursors::Default;

			    if(click)
			    {
				     if(click==1)
				     {
						 pic->Width=e->X;
						 pic->Height=e->Y;
						 en->resize(Convert::ToInt32(pic->Tag->ToString()),pic->Width,pic->Height);	 
				     }
					 else if(click==2)
					 {
						 pic->Width=e->X;
						 en->resize(Convert::ToInt32(pic->Tag->ToString()),pic->Width,pic->Height);	 
					 }
					 else if(click==3)
					 {
						 pic->Height=e->Y;
						 en->resize(Convert::ToInt32(pic->Tag->ToString()),pic->Width,pic->Height);	 
					 }
					 else
					 {
						 pic->Left+=e->X-x_mouse;
						 pic->Top+=e->Y-y_mouse;
						 en->relocation(Convert::ToInt32(pic->Tag->ToString()),pic->Left,pic->Top);
					 }
	
					en->run();
					draw();
					saved=false;
				}
		}
private:void pic1_MouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
		{
			click=0;
		}

private:void pic1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
		{
			this->Cursor=Windows::Forms::Cursors::Default;
		}

		 
private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(SetOption::check)
			 {
				PictureBox^ p=gcnew PictureBox();
				p->Size=Drawing::Size(Convert::ToInt32(SetOption::width_textBox->Text),Convert::ToInt32(SetOption::height_textBox->Text));
				p->Location=Point(Convert::ToInt32(SetOption::x_textBox->Text),Convert::ToInt32(SetOption::y_textBox->Text));
				key++;
				p->Tag=key.ToString();
				p->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
				SetOption::check=false;
				
				if(!String::Compare(SetOption::subtype_label->Text,"Convex"))
				{
				 
				  convex_mirror^ obj=gcnew convex_mirror(Convert::ToDouble(SetOption::x_textBox->Text),
					   Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
					   Convert::ToDouble(SetOption::width_textBox->Text),key,
					   Convert::ToDouble(SetOption::angle_updown->Value));
				  en->add_element(obj);
				   
			    }
				else if(!String::Compare(SetOption::subtype_label->Text,"Concave"))
				{
					
				    cave_mirror^ obj=gcnew cave_mirror(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Sole"))
				 {
					 
					  sole_mirror^ obj=gcnew sole_mirror(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Black Object"))
				 {
					  
					  glum^ obj=gcnew glum(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key);
				      en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Plano Convex"))
				 {
					  
					  oneconvex_lenz^ obj=gcnew oneconvex_lenz(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Plano Concave"))
				 {
					  
					  onecave_lenz^ obj=gcnew onecave_lenz(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);	
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Bi Convex"))
				 {
					 
					  twoconvex_lenz^ obj=gcnew twoconvex_lenz(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Bi Concave"))
				 {
					
					  twocave_lenz^ obj=gcnew twocave_lenz(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
				   	  en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"WideSpread"))
				 {
					  
					  widespread_source^ obj=gcnew widespread_source(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
						 Convert::ToInt32(SetOption::num_textbox->Text));
					  en->add_element(obj);
					
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Solo"))
				 {
					 
					  solo_source^ obj=gcnew solo_source(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
					     Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);
				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Parallel"))
				 {
					 
					  parallel_source^ obj=gcnew parallel_source(Convert::ToDouble(SetOption::x_textBox->Text),
						 Convert::ToDouble(SetOption::y_textBox->Text),Convert::ToDouble(SetOption::height_textBox->Text),
						 Convert::ToDouble(SetOption::width_textBox->Text),key,
						 Convert::ToInt32(SetOption::num_textbox->Text),Convert::ToDouble(SetOption::angle_updown->Value));
					  en->add_element(obj);
				 }
	
				 p->BackgroundImage=(SetOption::angle_picturebox->BackgroundImage);
				 p->ContextMenuStrip=contextMenuStrip2;
				 p->MouseDown +=gcnew MouseEventHandler(this, &Form1::pic1_MouseDown);
				 p->MouseMove +=gcnew MouseEventHandler(this, &Form1::pic1_MouseMove);
				 p->MouseUp +=gcnew MouseEventHandler(this, &Form1::pic1_MouseUp);	
				 p->MouseLeave +=gcnew EventHandler(this, &Form1::pic1_MouseLeave);
				 lab_panel->Controls->Add(p);
				 
				 en->run();
				 saved=false;	 
			 }
			 draw();
		 }

private: System::Void Form1_Enter(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_EnabledChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_ParentChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_MdiChildActivate(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_RegionChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_Layout(System::Object^  sender, System::Windows::Forms::LayoutEventArgs^  e) 
		 {
			
		 }
private: System::Void Form1_ChangeUICues(System::Object^  sender, System::Windows::Forms::UICuesEventArgs^  e) 
		 {
			 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->toolStrip1->Visible=false;
		 }
private: System::Void parallelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->height_textBox->ReadOnly=true;
			setform->width_textBox->ReadOnly=true;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->angle_updown->Increment=1;
			setform->angle_updown->Maximum=359;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="Parallel";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("parallel_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("parallel 1.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();	 
		 }
		 
private: System::Void lab_panel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 if(e->Button==System::Windows::Forms::MouseButtons::Right)
			 {
				 optionfile::x=e->X;
				 optionfile::y=e->Y;
			 }
			 en->run();
			 draw();
			 
		 }
private: System::Void parallelSourceToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->angle_updown->Visible=false;
			setform->angle_label->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="WideSpread";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("splay_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("splay.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void parallelSourceToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->angle_updown->Increment=1;
			setform->angle_updown->Maximum=359;
			setform->type_label->Text="Source";
			setform->subtype_label->Text="Solo";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("solo_source.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("splay.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void biconvexLensToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Bi Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("twoconvex_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("biconvex_lens_180.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void biconcaveLensToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		    SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Bi Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("twocave_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("biconcave_lens_180.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void planoConvexToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Plano Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("oneconvex_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("planoconvex_lens_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void planoConcaveLensToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Lens";
			setform->subtype_label->Text="Plano Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("twocave_lens.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("planoconcave_lens_180.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void soleMirrorToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Sole";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("sole0_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("sole_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void concaveMirorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Convex";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("convex_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("convex_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();			
		 }
private: System::Void concaveMirorToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Mirror";
			setform->subtype_label->Text="Concave";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("cave_mirror.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("concave_mirror_0.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void blackObjectToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			SetOption^ setform=gcnew SetOption();
			setform->num_label->Visible=false;
			setform->num_textbox->Visible=false;
			setform->angle_updown->Visible=false;
			setform->angle_label->Visible=false;
			setform->x_textBox->Text=optionfile::x.ToString();
			setform->y_textBox->Text=optionfile::y.ToString();
			setform->x_textBox->ReadOnly=true;
			setform->y_textBox->ReadOnly=true;
			setform->type_label->Text="Black Object";
			setform->subtype_label->Text="Black Object";
			System::Drawing::Image^ pic=gcnew System::Drawing::Bitmap("glum.bmp"); 
			System::Drawing::Image^ pic2=gcnew System::Drawing::Bitmap("black_object.bmp");
			setform->type_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic);
			setform->angle_picturebox->BackgroundImage=static_cast<System::Drawing::Image^>(pic2);
			setform->type_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->angle_picturebox->BackgroundImageLayout=System::Windows::Forms::ImageLayout::Stretch;
			setform->Show();
		 }
private: System::Void removeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(Windows::Forms::MessageBox::Show("Do You Want Remove This Object From Labratory","Remove Element",System::Windows::Forms::MessageBoxButtons::YesNo,System::Windows::Forms::MessageBoxIcon::Question,
				 System::Windows::Forms::MessageBoxDefaultButton::Button1)==Windows::Forms::DialogResult::No)
				 return ;
			 en->remove_element(Convert::ToInt32(pic_tag));
			 for(int i=0;i<lab_panel->Controls->Count;i++)
				 if(lab_panel->Controls[i]->Tag==pic_tag)
					 lab_panel->Controls->Remove(lab_panel->Controls[i]);

			en->run();
			draw();
			saved=false;
		 }

private: void draw()
		 {
			 lab_panel->Refresh();
			 System::Drawing::Pen^ p=gcnew System::Drawing::Pen(optionfile::beamcolor,optionfile::beamwidth);
   			 System::Drawing::Graphics^ g;
			 g=lab_panel->CreateGraphics();
			 for(int i=0;i<en->ar2->Length;i++)
			 {
				 g->DrawLine(p,Convert::ToInt32(en->ar2[i]->get_start_point()->x),Convert::ToInt32(en->ar2[i]->get_start_point()->y)
					 ,Convert::ToInt32(en->ar2[i]->get_last_point()->x),Convert::ToInt32(en->ar2[i]->get_last_point()->y));
			 }
		 }
private: System::Void lab_panel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(!en->isempty() && saved==false )
				 if(Windows::Forms::MessageBox::Show("Do You Want Create A new Labratory?","New Labratory",System::Windows::Forms::MessageBoxButtons::YesNo,System::Windows::Forms::MessageBoxIcon::Question,
					 System::Windows::Forms::MessageBoxDefaultButton::Button1)==Windows::Forms::DialogResult::No)
					 return ;
				 else
				 {
					 cansave=false;
					 saved=true;
				 }
			  en->clearall();
		      lab_panel->Controls->Clear();
			  lab_panel->Refresh();

		 }
private: System::Void newToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  newToolStripMenuItem_Click(sender,e);
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			Close();
		 }
private: System::Void Form1_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
		 {
			
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			 if(!en->isempty() && saved==false)
			 {
				 Windows::Forms::DialogResult res;
				 res=Windows::Forms::MessageBox::Show("Do You Want Save Current Labratory ? ","Close Labratory",Windows::Forms::MessageBoxButtons::YesNoCancel);
				 if(res==Windows::Forms::DialogResult::Cancel)
					e->Cancel=true;
				 else if(res==Windows::Forms::DialogResult::Yes)
					saveToolStripMenuItem_Click(sender,e);
			 }
		 }
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) 
		 {	 
		 }
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
};
}

