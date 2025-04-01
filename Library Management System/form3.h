#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		form3(void)
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
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Fields_lbl;
	private: System::Windows::Forms::Label^  BorrowedBooks_lbl;
	private: System::Windows::Forms::ListView^  Books_listView;

	protected: 

	protected: 


	private: System::Windows::Forms::ColumnHeader^  Name;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::TextBox^  Notes_txtBox;

	private: System::Windows::Forms::Label^  Notes_lbl;
	private: System::Windows::Forms::ListBox^  BorrowedBooks_lBox;
	private: System::Windows::Forms::Button^  OK_btn;
	private: System::Windows::Forms::Button^  Save_btn;












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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"AlQuran Alkareem", 
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
			System::Windows::Forms::ListViewItem^  listViewItem25 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Disorders of the Rotator Cuff and Biceps Tendon E‑Book: The Surgeon’s Guide to .." 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->Fields_lbl = (gcnew System::Windows::Forms::Label());
			this->BorrowedBooks_lbl = (gcnew System::Windows::Forms::Label());
			this->Books_listView = (gcnew System::Windows::Forms::ListView());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Notes_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->Notes_lbl = (gcnew System::Windows::Forms::Label());
			this->BorrowedBooks_lBox = (gcnew System::Windows::Forms::ListBox());
			this->OK_btn = (gcnew System::Windows::Forms::Button());
			this->Save_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Fields_lbl
			// 
			this->Fields_lbl->AutoSize = true;
			this->Fields_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Fields_lbl->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Fields_lbl->Location = System::Drawing::Point(37, 28);
			this->Fields_lbl->Name = L"Fields_lbl";
			this->Fields_lbl->Size = System::Drawing::Size(275, 31);
			this->Fields_lbl->TabIndex = 0;
			this->Fields_lbl->Text = L"All Books In All Fields";
			// 
			// BorrowedBooks_lbl
			// 
			this->BorrowedBooks_lbl->AutoSize = true;
			this->BorrowedBooks_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BorrowedBooks_lbl->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BorrowedBooks_lbl->Location = System::Drawing::Point(424, 28);
			this->BorrowedBooks_lbl->Name = L"BorrowedBooks_lbl";
			this->BorrowedBooks_lbl->Size = System::Drawing::Size(211, 31);
			this->BorrowedBooks_lbl->TabIndex = 1;
			this->BorrowedBooks_lbl->Text = L"Borrowed Books";
			// 
			// Books_listView
			// 
			this->Books_listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->Name, this->columnHeader1, 
				this->columnHeader2, this->columnHeader3});
			this->Books_listView->Font = (gcnew System::Drawing::Font(L"Poor Richard", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			listViewItem2->ToolTipText = L"Vertigo";
			this->Books_listView->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(30) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11, 
				listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18, listViewItem19, 
				listViewItem20, listViewItem21, listViewItem22, listViewItem23, listViewItem24, listViewItem25, listViewItem26, listViewItem27, 
				listViewItem28, listViewItem29, listViewItem30});
			this->Books_listView->Location = System::Drawing::Point(37, 72);
			this->Books_listView->Name = L"Books_listView";
			this->Books_listView->Size = System::Drawing::Size(367, 357);
			this->Books_listView->TabIndex = 7;
			this->Books_listView->UseCompatibleStateImageBehavior = false;
			this->Books_listView->View = System::Windows::Forms::View::Details;
			this->Books_listView->SelectedIndexChanged += gcnew System::EventHandler(this, &form3::listView1_SelectedIndexChanged);
			// 
			// Name
			// 
			this->Name->Text = L"Name";
			this->Name->Width = 109;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Type";
			this->columnHeader1->Width = 84;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Publication year";
			this->columnHeader2->Width = 69;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Book\'s Code";
			this->columnHeader3->Width = 85;
			// 
			// Notes_txtBox
			// 
			this->Notes_txtBox->Location = System::Drawing::Point(424, 361);
			this->Notes_txtBox->Multiline = true;
			this->Notes_txtBox->Name = L"Notes_txtBox";
			this->Notes_txtBox->Size = System::Drawing::Size(248, 104);
			this->Notes_txtBox->TabIndex = 8;
			// 
			// Notes_lbl
			// 
			this->Notes_lbl->AutoSize = true;
			this->Notes_lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Notes_lbl->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Notes_lbl->Location = System::Drawing::Point(424, 333);
			this->Notes_lbl->Name = L"Notes_lbl";
			this->Notes_lbl->Size = System::Drawing::Size(66, 25);
			this->Notes_lbl->TabIndex = 9;
			this->Notes_lbl->Text = L"Notes";
			// 
			// BorrowedBooks_lBox
			// 
			this->BorrowedBooks_lBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BorrowedBooks_lBox->FormattingEnabled = true;
			this->BorrowedBooks_lBox->ItemHeight = 18;
			this->BorrowedBooks_lBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"Diamond Dust            \t142  ", L"Vertigo                         \t144", 
				L"God Land                     \t145", L"1919                             \t147", L"Physics for Scientists  \t148", L"Student Solutions         \t150", 
				L"Physics                         \t151", L"College Physics            \t152", L"The Blue Elephant         \t143", L"Deer hunting season     \t146"});
			this->BorrowedBooks_lBox->Location = System::Drawing::Point(424, 79);
			this->BorrowedBooks_lBox->Name = L"BorrowedBooks_lBox";
			this->BorrowedBooks_lBox->Size = System::Drawing::Size(248, 238);
			this->BorrowedBooks_lBox->TabIndex = 10;
			// 
			// OK_btn
			// 
			this->OK_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->OK_btn->Location = System::Drawing::Point(175, 471);
			this->OK_btn->Name = L"OK_btn";
			this->OK_btn->Size = System::Drawing::Size(107, 40);
			this->OK_btn->TabIndex = 11;
			this->OK_btn->Text = L"Ok";
			this->OK_btn->UseVisualStyleBackColor = true;
			this->OK_btn->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			// 
			// Save_btn
			// 
			this->Save_btn->Location = System::Drawing::Point(591, 471);
			this->Save_btn->Name = L"Save_btn";
			this->Save_btn->Size = System::Drawing::Size(81, 31);
			this->Save_btn->TabIndex = 12;
			this->Save_btn->Text = L"Save";
			this->Save_btn->UseVisualStyleBackColor = true;
			this->Save_btn->Click += gcnew System::EventHandler(this, &form3::Save_btn_Click);
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 523);
			this->Controls->Add(this->Save_btn);
			this->Controls->Add(this->OK_btn);
			this->Controls->Add(this->BorrowedBooks_lBox);
			this->Controls->Add(this->Notes_lbl);
			this->Controls->Add(this->Notes_txtBox);
			this->Controls->Add(this->Books_listView);
			this->Controls->Add(this->BorrowedBooks_lbl);
			this->Controls->Add(this->Fields_lbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Text = L"Library books";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();				
			 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Save_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^ sr= gcnew StreamWriter("Notes.txt",true);
			String^ Notes= Notes_txtBox->Text;
			 sr->WriteLine(Notes);
			 sr->Close();
		 }
};
}

