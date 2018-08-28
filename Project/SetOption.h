#pragma once
#include"optionfile.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project {
	
	/// <summary>
	/// Summary for SetOption
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class SetOption : public System::Windows::Forms::Form
	{
	public:
		SetOption(void)
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
		~SetOption()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  cancel_button;
	private: System::Windows::Forms::Button^  ok_button;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public: static System::Windows::Forms::Label^  angle_label;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	public: static System::Windows::Forms::Label^  subtype_label;
	private: 
	public: static System::Windows::Forms::Label^  type_label;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: static System::Windows::Forms::TextBox^  x_textBox;
 
	public: static  System::Windows::Forms::TextBox^  width_textBox;
	public: static  System::Windows::Forms::TextBox^  height_textBox;
	public: static  System::Windows::Forms::TextBox^  y_textBox;

	private: System::Windows::Forms::Panel^  panel1;
	public:static  System::Windows::Forms::PictureBox^  angle_picturebox;
	private: 
	public:static  System::Windows::Forms::TextBox^  num_textbox;
	public:static  System::Windows::Forms::Label^  num_label;
	public:static  System::Windows::Forms::NumericUpDown^  angle_updown;
	public:static System::Windows::Forms::PictureBox^  type_picturebox;


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
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->angle_updown = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_textbox = (gcnew System::Windows::Forms::TextBox());
			this->num_label = (gcnew System::Windows::Forms::Label());
			this->width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->height_textBox = (gcnew System::Windows::Forms::TextBox());
			this->y_textBox = (gcnew System::Windows::Forms::TextBox());
			this->x_textBox = (gcnew System::Windows::Forms::TextBox());
			this->angle_label = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->subtype_label = (gcnew System::Windows::Forms::Label());
			this->type_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->angle_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->type_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->angle_updown))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->angle_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->type_picturebox))->BeginInit();
			this->SuspendLayout();
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(110, 266);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(70, 29);
			this->cancel_button->TabIndex = 12;
			this->cancel_button->Text = L"&Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &SetOption::cancel_button_Click);
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(186, 266);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(73, 29);
			this->ok_button->TabIndex = 13;
			this->ok_button->Text = L"&Ok";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &SetOption::ok_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->angle_updown);
			this->groupBox1->Controls->Add(this->num_textbox);
			this->groupBox1->Controls->Add(this->num_label);
			this->groupBox1->Controls->Add(this->width_textBox);
			this->groupBox1->Controls->Add(this->height_textBox);
			this->groupBox1->Controls->Add(this->y_textBox);
			this->groupBox1->Controls->Add(this->x_textBox);
			this->groupBox1->Controls->Add(this->angle_label);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->subtype_label);
			this->groupBox1->Controls->Add(this->type_label);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(8, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(195, 242);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Property : ";
			// 
			// angle_updown
			// 
			this->angle_updown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {90, 0, 0, 0});
			this->angle_updown->Location = System::Drawing::Point(97, 188);
			this->angle_updown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {270, 0, 0, 0});
			this->angle_updown->Name = L"angle_updown";
			this->angle_updown->Size = System::Drawing::Size(92, 20);
			this->angle_updown->TabIndex = 36;
			this->angle_updown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->angle_updown->ValueChanged += gcnew System::EventHandler(this, &SetOption::numericUpDown1_ValueChanged);
			// 
			// num_textbox
			// 
			this->num_textbox->Location = System::Drawing::Point(97, 214);
			this->num_textbox->Name = L"num_textbox";
			this->num_textbox->Size = System::Drawing::Size(92, 20);
			this->num_textbox->TabIndex = 35;
			this->num_textbox->Text = L"1";
			this->num_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->num_textbox->Leave += gcnew System::EventHandler(this, &SetOption::num_textbox_Leave);
			this->num_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SetOption::num_textbox_KeyPress);
			// 
			// num_label
			// 
			this->num_label->AutoSize = true;
			this->num_label->Location = System::Drawing::Point(6, 217);
			this->num_label->Name = L"num_label";
			this->num_label->Size = System::Drawing::Size(94, 13);
			this->num_label->TabIndex = 34;
			this->num_label->Text = L"Number Of Beam :";
			// 
			// width_textBox
			// 
			this->width_textBox->Location = System::Drawing::Point(97, 163);
			this->width_textBox->Name = L"width_textBox";
			this->width_textBox->Size = System::Drawing::Size(92, 20);
			this->width_textBox->TabIndex = 32;
			this->width_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->width_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SetOption::width_textBox_KeyPress);
			// 
			// height_textBox
			// 
			this->height_textBox->Location = System::Drawing::Point(97, 137);
			this->height_textBox->Name = L"height_textBox";
			this->height_textBox->Size = System::Drawing::Size(92, 20);
			this->height_textBox->TabIndex = 31;
			this->height_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->height_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SetOption::height_textBox_KeyPress);
			// 
			// y_textBox
			// 
			this->y_textBox->Location = System::Drawing::Point(97, 110);
			this->y_textBox->Name = L"y_textBox";
			this->y_textBox->Size = System::Drawing::Size(92, 20);
			this->y_textBox->TabIndex = 30;
			this->y_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->y_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SetOption::y_textBox_KeyPress);
			// 
			// x_textBox
			// 
			this->x_textBox->Location = System::Drawing::Point(97, 84);
			this->x_textBox->Name = L"x_textBox";
			this->x_textBox->Size = System::Drawing::Size(92, 20);
			this->x_textBox->TabIndex = 29;
			this->x_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->x_textBox->TextChanged += gcnew System::EventHandler(this, &SetOption::x_textBox_TextChanged);
			this->x_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SetOption::x_textBox_KeyPress);
			// 
			// angle_label
			// 
			this->angle_label->AutoSize = true;
			this->angle_label->Location = System::Drawing::Point(6, 191);
			this->angle_label->Name = L"angle_label";
			this->angle_label->Size = System::Drawing::Size(39, 13);
			this->angle_label->TabIndex = 28;
			this->angle_label->Text = L"angle :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Width : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Height : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Y : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"X : ";
			// 
			// subtype_label
			// 
			this->subtype_label->AutoSize = true;
			this->subtype_label->Location = System::Drawing::Point(94, 55);
			this->subtype_label->Name = L"subtype_label";
			this->subtype_label->Size = System::Drawing::Size(41, 13);
			this->subtype_label->TabIndex = 19;
			this->subtype_label->Text = L"Default";
			// 
			// type_label
			// 
			this->type_label->AutoSize = true;
			this->type_label->Location = System::Drawing::Point(94, 33);
			this->type_label->Name = L"type_label";
			this->type_label->Size = System::Drawing::Size(41, 13);
			this->type_label->TabIndex = 18;
			this->type_label->Text = L"Default";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Sub Type : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Type : ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->angle_picturebox);
			this->panel1->Location = System::Drawing::Point(207, 154);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(97, 90);
			this->panel1->TabIndex = 15;
			// 
			// angle_picturebox
			// 
			this->angle_picturebox->Location = System::Drawing::Point(3, 20);
			this->angle_picturebox->Name = L"angle_picturebox";
			this->angle_picturebox->Size = System::Drawing::Size(91, 47);
			this->angle_picturebox->TabIndex = 1;
			this->angle_picturebox->TabStop = false;
			// 
			// type_picturebox
			// 
			this->type_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->type_picturebox->Location = System::Drawing::Point(209, 24);
			this->type_picturebox->Name = L"type_picturebox";
			this->type_picturebox->Size = System::Drawing::Size(91, 83);
			this->type_picturebox->TabIndex = 18;
			this->type_picturebox->TabStop = false;
			// 
			// SetOption
			// 
			this->AcceptButton = this->ok_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 307);
			this->Controls->Add(this->type_picturebox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->cancel_button);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(323, 345);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(323, 345);
			this->Name = L"SetOption";
			this->ShowInTaskbar = false;
			this->Text = L"SetOption";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &SetOption::SetOption_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->angle_updown))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->angle_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->type_picturebox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SetOption_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(!String::Compare(SetOption::subtype_label->Text,"Parallel")
					|| !String::Compare(SetOption::subtype_label->Text,"Solo") 
					|| !String::Compare(SetOption::subtype_label->Text,"WideSpread"))
				{
					this->width_textBox->Text="8";
					this->height_textBox->Text="8";
				}
				else
				{
					this->width_textBox->Text="60";
					this->height_textBox->Text="10";
				}
			 }
public: 
	    
	    static bool check=false;

private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(!x_textBox->Text->Trim()->CompareTo("") || int::Parse(x_textBox->Text)>600 || int::Parse(x_textBox->Text)<=0 )
			 {
				 System::Windows::Forms::MessageBox::Show("Invalid Value For 'X' ");
				 x_textBox->Focus();
				 x_textBox->SelectAll();
				 return ;
			 }
			 if(!y_textBox->Text->Trim()->CompareTo("")|| int::Parse(y_textBox->Text)>400 || int::Parse(y_textBox->Text)<=0 )
			 {
				 System::Windows::Forms::MessageBox::Show("Invalid Value For 'Y' ");
				 y_textBox->Focus();
				 y_textBox->SelectAll();
				 return ;
			 }
			 if(!height_textBox->Text->Trim()->CompareTo("")|| int::Parse(height_textBox->Text)>100 || int::Parse(height_textBox->Text)<5 )
			 {
				 System::Windows::Forms::MessageBox::Show("Invalid Value For 'Height' ");
				 height_textBox->Focus();
				 height_textBox->SelectAll();
				 return ;
			 }
			 if(!width_textBox->Text->Trim()->CompareTo("")|| int::Parse(width_textBox->Text)>100 || int::Parse(width_textBox->Text)<5 )
			 {
				 System::Windows::Forms::MessageBox::Show("Invalid Value For 'Width' ");
				 width_textBox->Focus();
				 width_textBox->SelectAll();
				 return ;
			 }

			 check=true;
			 this->Close();
		 }
		 private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			if(!String::Compare(subtype_label->Text,"Parallel"))
			{	
				if(angle_updown->Value<90)
				 {
					 width_textBox->Text="5";
					 height_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
				 }
				 else if(angle_updown->Value<180)
				 {
					 width_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
					 height_textBox->Text="5";
				 }
				 else if(angle_updown->Value<270)
				 {
					 width_textBox->Text="5";
					 height_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
				 }
				 else
				 {
					 width_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
					 height_textBox->Text="5";
				 }
			}
			
			if(String::Compare(subtype_label->Text,"Solo") &&
			   String::Compare(subtype_label->Text,"WideSpread")
			   && String::Compare(subtype_label->Text,"Parallel"))
			{
				if(angle_updown->Value==90 || angle_updown->Value==270)
				{
					height_textBox->Text="60";
					width_textBox->Text="10";
				}
				else
				{
					height_textBox->Text="10";
					width_textBox->Text="60";
				}

			}

			if(this->angle_updown->Value%180==0
				&& String::Compare(subtype_label->Text,"Parallel") && 
				String::Compare(subtype_label->Text,"Solo") &&
				String::Compare(subtype_label->Text,"WideSpread"))
			{
				this->angle_picturebox->Left=3;
				this->angle_picturebox->Top=20;
				this->angle_picturebox->Width=91;
				this->angle_picturebox->Height=47;
			}
			else if((this->angle_updown->Value==90 || this->angle_updown->Value==270) && 
				String::Compare(subtype_label->Text,"Parallel") && 
				String::Compare(subtype_label->Text,"Solo") &&
				String::Compare(subtype_label->Text,"WideSpread"))
			{
				this->angle_picturebox->Left=25;
				this->angle_picturebox->Top=3;
				this->angle_picturebox->Width=47;
				this->angle_picturebox->Height=91;
			}

				System::Drawing::Image^ i;
				if(!String::Compare(SetOption::subtype_label->Text,"Convex"))
				{
					   if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("convex_mirror_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("convex_mirror_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("convex_mirror_270.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("convex_mirror_0.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;
			    }
				else if(!String::Compare(SetOption::subtype_label->Text,"Concave"))
				{
					if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("concave_mirror_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("concave_mirror_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("concave_mirror_270.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("concave_mirror_0.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Sole"))
				 {
					  if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("sole_mirror_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("sole_mirror_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("sole_mirror_270.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("sole_mirror_0.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Plano Convex"))
				 {
					   if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("planoconvex_lens_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("planoconvex_lens_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("planoconvex_lens_270.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("planoconvex_lens_0.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Plano Concave"))
				 {
					   if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("planoconcave_lens_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("planoconcave_lens_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("planoconcave_lens_270.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("planoconcave_lens_0.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Bi Convex"))
				 {
					   if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("biconvex_lens_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("biconvex_lens_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("biconvex_lens_90.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("biconvex_lens_180.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 else if(!String::Compare(SetOption::subtype_label->Text,"Bi Concave"))
				 {
					   if(this->angle_updown->Value==90)
						    i=gcnew System::Drawing::Bitmap("biconcave_lens_90.bmp");
					   else if(this->angle_updown->Value==180)
						    i=gcnew System::Drawing::Bitmap("biconcave_lens_180.bmp");
					   else if(this->angle_updown->Value==270)
						    i=gcnew System::Drawing::Bitmap("biconcave_lens_90.bmp");
					   else
						    i=gcnew System::Drawing::Bitmap("biconcave_lens_180.bmp");
					   this->angle_picturebox->BackgroundImage=(Drawing::Image^)i;

				 }
				 

		 }
		 
private: System::Void cancel_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 check=false;
			 this->Close();
		 }
private: System::Void num_textbox_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(!String::Compare(subtype_label->Text,"Parallel"))
				 if(angle_updown->Value<90)
				 {
					 width_textBox->Text="5";
					 height_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
				 }
				 else if(angle_updown->Value<180)
				 {
					 width_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
					 height_textBox->Text="5";
				 }
				 else if(angle_updown->Value<270)
				 {
					 width_textBox->Text="5";
					 height_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
				 }
				 else
				 {
					 width_textBox->Text=(int::Parse(num_textbox->Text)*5).ToString();
					 height_textBox->Text="5";
				 }
				 
		 }
private: System::Void x_textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 int i;
			 if((int)e->KeyChar!=8)
				e->Handled=!int::TryParse(e->KeyChar.ToString(),i);
		 }
private: System::Void y_textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 int i;
			 if((int)e->KeyChar!=8)
				e->Handled=!int::TryParse(e->KeyChar.ToString(),i);
		 }
private: System::Void height_textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 int i;
			 if((int)e->KeyChar!=8)
				e->Handled=!int::TryParse(e->KeyChar.ToString(),i);
		 }
private: System::Void width_textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 int i;
			 if((int)e->KeyChar!=8)
				e->Handled=!int::TryParse(e->KeyChar.ToString(),i);
		 }
private: System::Void num_textbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 int i;
			 if((int)e->KeyChar!=8)
				e->Handled=!int::TryParse(e->KeyChar.ToString(),i);

		 }
private: System::Void x_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
};
}
