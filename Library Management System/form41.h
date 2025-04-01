#pragma once

namespace summercourse2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Name;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;







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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"«·ﬁ—¬‰ «·ﬂ—Ì„ ", 
				L"Islamic", L"___", L"141"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Diamond Dust", 
				L"Novel", L"2010", L"142"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The Blue Elephant", 
				L"Novel", L"2012", L"143"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Vertigo", 
				L"Novel", L"2007", L"144"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"God Land", 
				L"Novel", L"2016", L"145"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Deer hunting season", 
				L"Novel", L"2017", L"146"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"1919", 
				L"Novel", L"2014", L"147"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Physics for Scientists and Engineers, Volume 5", 
				L"scientific", L"1982", L"148"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Essentials of College Physics", 
				L"scientific", L"2006", L"149"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Student Solutions Manual with Study Guide", 
				L"scientific", L"2008", L"150"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Physics", 
				L"scientific", L"1986", L"151"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"College Physics", 
				L"scientific", L"1976", L"152"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Calculus: Early Transcendentals", 
				L"Mathematical", L"1983", L"153"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Advanced Engineering Mathematics", 
				L"Mathematical", L"1962", L"154"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Modern Engineering Mathematics", 
				L"Mathematical", L"1992", L"155"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Discrete mathematics and its applications", 
				L"Mathematical", L"1988", L"156"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ for Computer Science and Engineering", 
				L"Computer Science", L"2000", L"157"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Digital Signal Processing - A Modern Introduction", 
				L"Computer Science", L"2006", L"158"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ Primer", 
				L"Computer Science", L"1989", L"159"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem20 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The C++ Standard Library: A Tutorial and Reference", 
				L"Computer Science", L"1999", L"160"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem21 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ Templates: The Complete Guide", 
				L"Computer Science", L"2002", L"161"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem22 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The Design and Evolution of C++", 
				L"Computer Science", L"1994", L"162"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem23 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Oxford Handbook of Geriatric Medicine", 
				L"medical", L"2006", L"163"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem24 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Medical Medium Liver Rescue: Answers to Eczema, Psoriasis, Diabetes, Strep, ...", 
				L"medical", L"2018", L"164"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem25 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Disorders of the Rotator Cuff and Biceps Tendon E?Book: The Surgeonís Guide to .." 
				L".", 
				L"medical", L"2019", L"165"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem26 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Clinical medicine", 
				L"medical", L"1987", L"166"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem27 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Clinical Medical Assisting", 
				L"medical", L"2008", L"167"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem28 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Medical-surgical Nursing: Critical Thinking in Client Care", 
				L"medical", L"1993", L"168"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem29 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"First Aid for the USMLE Step 2 CS", 
				L"medical", L"2004", L"169"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem30 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Sociology as Applied to Medicine", 
				L"medical", L"1982", L"170"}, -1));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"All Books In All Fields";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(386, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Borrowed Books";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->Name, this->columnHeader1, 
				this->columnHeader2, this->columnHeader3});
			listViewItem2->ToolTipText = L"Vertigo";
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(30) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11, 
				listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18, listViewItem19, 
				listViewItem20, listViewItem21, listViewItem22, listViewItem23, listViewItem24, listViewItem25, listViewItem26, listViewItem27, 
				listViewItem28, listViewItem29, listViewItem30});
			this->listView1->Location = System::Drawing::Point(37, 72);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(275, 312);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Name
			// 
			this->Name->Text = L"Name";
			this->Name->Width = 109;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Type";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Publication year";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Book\'s Code";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(386, 361);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 104);
			this->textBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(386, 333);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Notes";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(386, 72);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(211, 251);
			this->listBox1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(516, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 523);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			
			this->Text = L"  ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

