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
	/// Summary for Option
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Option : public System::Windows::Forms::Form
	{
	public:
		Option(void)
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
		~Option()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 































	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;



	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  beam_button;
	private: System::Windows::Forms::NumericUpDown^  width_textbox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;















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
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->beam_button = (gcnew System::Windows::Forms::Button());
			this->width_textbox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->width_textbox))->BeginInit();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(188, 58);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 20);
			this->button9->TabIndex = 5;
			this->button9->Text = L"...";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(83, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Open Location :";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(188, 29);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 20);
			this->button10->TabIndex = 2;
			this->button10->Text = L"...";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(99, 30);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(83, 20);
			this->textBox4->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Save Location :";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(180, 164);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 36);
			this->button7->TabIndex = 8;
			this->button7->Text = L"&Ok";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Option::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(99, 164);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 36);
			this->button8->TabIndex = 9;
			this->button8->Text = L"&Close";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Option::button8_Click_1);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->beam_button);
			this->groupBox3->Controls->Add(this->width_textbox);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(12, 21);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(242, 123);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Default Beam :";
			// 
			// beam_button
			// 
			this->beam_button->BackColor = System::Drawing::Color::Yellow;
			this->beam_button->Location = System::Drawing::Point(98, 26);
			this->beam_button->Name = L"beam_button";
			this->beam_button->Size = System::Drawing::Size(77, 26);
			this->beam_button->TabIndex = 5;
			this->beam_button->Text = L"Select Color";
			this->beam_button->UseVisualStyleBackColor = false;
			this->beam_button->Click += gcnew System::EventHandler(this, &Option::beam_button_Click);
			// 
			// width_textbox
			// 
			this->width_textbox->Location = System::Drawing::Point(98, 61);
			this->width_textbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->width_textbox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->width_textbox->Name = L"width_textbox";
			this->width_textbox->Size = System::Drawing::Size(77, 20);
			this->width_textbox->TabIndex = 4;
			this->width_textbox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Beam Width :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Beam Color :";
			// 
			// Option
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(266, 206);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->groupBox3);
			this->MaximizeBox = false;
			this->Name = L"Option";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Option";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Option::Option_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->width_textbox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Option_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->beam_button->BackColor=optionfile::beamcolor;
				 this->width_textbox->Value=Convert::ToDecimal(optionfile::beamwidth);			
			 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			beam_button->BackColor=optionfile::beamcolor;
			width_textbox->Text=optionfile::beamwidth.ToString();
		 }
		 private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog1->ShowDialog();
			 beam_button->BackColor=colorDialog1->Color;
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {			
			 
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button5_Click(sender,e);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button6_Click(sender,e);
		 }
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 optionfile::beamcolor=beam_button->BackColor;
			 optionfile::beamwidth=float::Parse(width_textbox->Text);
			 this->Close();
		 }
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Close();
		 }
private: System::Void beam_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog1->ShowDialog();
			 beam_button->BackColor=colorDialog1->Color;
		 }
};
}
