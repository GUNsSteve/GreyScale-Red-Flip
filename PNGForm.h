#pragma once
#include <WinUser.h>


//#include "pngwiter.h"
namespace GUIpngProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PNGForm
	/// </summary>
	public ref class PNGForm : public System::Windows::Forms::Form
	{
	public:
		PNGForm(void)
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
		~PNGForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ originalPictureBox;
	protected:

	private: System::Windows::Forms::Button^ openImage;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ HelpButton;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ flipHorizontallyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ flipVerticallyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redGreyScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ FileNameTextBox;

	private: System::Windows::Forms::Label^ nameLabel;




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
			this->originalPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->openImage = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flipHorizontallyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flipVerticallyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redGreyScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HelpButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->FileNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// originalPictureBox
			// 
			this->originalPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->originalPictureBox->Location = System::Drawing::Point(55, 60);
			this->originalPictureBox->Name = L"originalPictureBox";
			this->originalPictureBox->Size = System::Drawing::Size(300, 300);
			this->originalPictureBox->TabIndex = 0;
			this->originalPictureBox->TabStop = false;
			this->originalPictureBox->Click += gcnew System::EventHandler(this, &PNGForm::pictureBox1_Click);
			// 
			// openImage
			// 
			this->openImage->BackColor = System::Drawing::Color::LimeGreen;
			this->openImage->Location = System::Drawing::Point(156, 361);
			this->openImage->Name = L"openImage";
			this->openImage->Size = System::Drawing::Size(75, 23);
			this->openImage->TabIndex = 1;
			this->openImage->Text = L"Open Image";
			this->openImage->UseVisualStyleBackColor = false;
			this->openImage->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PNGForm::button1_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(560, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Flip Horizontally";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PNGForm::OnClickHorizon);
			this->button2->MouseCaptureChanged += gcnew System::EventHandler(this, &PNGForm::button2_MouseCaptureChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(156, 696);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Flip Vertically";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PNGForm::onFlipVert);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->Location = System::Drawing::Point(560, 696);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Red-GreyScale";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &PNGForm::onClickGreyScale);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Crimson;
			this->button5->Location = System::Drawing::Point(697, 726);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &PNGForm::button5_Click);
			this->button5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PNGForm::red);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(453, 60);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 300);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &PNGForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(55, 390);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 300);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(453, 390);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(300, 300);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &PNGForm::pictureBox4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->HelpButton
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->flipHorizontallyToolStripMenuItem, this->flipVerticallyToolStripMenuItem, this->redGreyScaleToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(40, 20);
			this->toolStripMenuItem1->Text = L"File ";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &PNGForm::toolStripMenuItem1_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open...";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::OnFileOpen);
			// 
			// flipHorizontallyToolStripMenuItem
			// 
			this->flipHorizontallyToolStripMenuItem->Name = L"flipHorizontallyToolStripMenuItem";
			this->flipHorizontallyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->flipHorizontallyToolStripMenuItem->Text = L"Flip Horizontally";
			this->flipHorizontallyToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::OnFileFlipHorizontal);
			// 
			// flipVerticallyToolStripMenuItem
			// 
			this->flipVerticallyToolStripMenuItem->Name = L"flipVerticallyToolStripMenuItem";
			this->flipVerticallyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->flipVerticallyToolStripMenuItem->Text = L"Flip Vertically";
			this->flipVerticallyToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::OnFileFlipVert);
			// 
			// redGreyScaleToolStripMenuItem
			// 
			this->redGreyScaleToolStripMenuItem->Name = L"redGreyScaleToolStripMenuItem";
			this->redGreyScaleToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->redGreyScaleToolStripMenuItem->Text = L"Red-Grey-Scale";
			this->redGreyScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::onFileRedGreyScale);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::onFileClose);
			// 
			// HelpButton
			// 
			this->HelpButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(44, 20);
			this->HelpButton->Text = L"Help";
			this->HelpButton->Click += gcnew System::EventHandler(this, &PNGForm::toolStripMenuItem2_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &PNGForm::OnAbout);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &PNGForm::openFileDialog1_FileOk);
			// 
			// FileNameTextBox
			// 
			this->FileNameTextBox->Location = System::Drawing::Point(156, 28);
			this->FileNameTextBox->Name = L"FileNameTextBox";
			this->FileNameTextBox->Size = System::Drawing::Size(497, 20);
			this->FileNameTextBox->TabIndex = 10;
			this->FileNameTextBox->TextChanged += gcnew System::EventHandler(this, &PNGForm::textBox1_TextChanged);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(69, 31);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(81, 13);
			this->nameLabel->TabIndex = 11;
			this->nameLabel->Text = L"PNG FIle Name";
			// 
			// PNGForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 761);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->FileNameTextBox);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->openImage);
			this->Controls->Add(this->originalPictureBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PNGForm";
			this->Text = L"PNGForm";
			this->Load += gcnew System::EventHandler(this, &PNGForm::PNGForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PNGForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void red(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

}
private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Define openFileDialog object
	OpenFileDialog^ ofd;
	ofd = gcnew OpenFileDialog;


	//Define files to be displayed
	ofd->Filter = "PNG Files(*.png)|*.png|""All Files(*.*)|*.*";

	//identify the default file type to be displayed
	ofd->FilterIndex = 1;

	//Display the caption for the Open File dialog (ofd)
	ofd->Title = "Select the PNG Image file";

	//Display the ofd object
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		//Clear the filename
		this->FileNameTextBox->Clear();

		//Copy the name of the file selected into the textbox

		this->FileNameTextBox->Text = ofd->FileName;

		//Load the picture into picturebox
		originalPictureBox->Load(ofd->FileName);

		//Stretch the image in the picturebox
		originalPictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	savedFileName = (char*)(void*)(Marshal::StringToHGlobalAnsi(ofd->FileName));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void onClickGreyScale(System::Object^ sender, System::EventArgs^ e) {
	pngwriter* original = new pngwriter();
	original->readfromfile(savedFileName);
	int width = original->getwidth();
	int height = original->getheight();
	int red, green, blue, gray;

	pngwriter* grey = new pngwriter(width, height, 0, "Grey.png");
	for (int x = 1; x <= width; x++) {
		for (int y = 1; y < height; y++) {
			red = original->read(x, y, 1);
			green = original->read(x, y, 2);
			blue = original->read(x, y, 3);

			gray = (red + green + blue) / 3;

			if (red >= green && red >= blue) {
				grey->plot(x, y, red, gray, gray);
			}
			else {
				grey->plot(x, y, gray, gray, gray);
			}

		}
	}
	original->close();
	grey->close();
	pictureBox4->Load("Grey.png");
	pictureBox4->SizeMode = PictureBoxSizeMode::Zoom;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OnClickHorizon(System::Object^ sender, System::EventArgs^ e) {

	Bitmap^ HoriFlip = gcnew Bitmap(originalPictureBox->Image);
	HoriFlip->RotateFlip(RotateFlipType::RotateNoneFlipX);
	pictureBox2->Image = HoriFlip;
	pictureBox2->SizeMode = PictureBoxSizeMode::Zoom;



}
private: System::Void onFlipVert(System::Object^ sender, System::EventArgs^ e) {
	Bitmap^ VertFlip = gcnew Bitmap(originalPictureBox->Image);
	VertFlip->RotateFlip(RotateFlipType::RotateNoneFlipY);
	pictureBox3->Image = VertFlip;
	pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
}
private: System::Void OnFileOpen(System::Object^ sender, System::EventArgs^ e) {
	//Define openFileDialog object
	OpenFileDialog^ ofd;
	ofd = gcnew OpenFileDialog;


	//Define files to be displayed
	ofd->Filter = "PNG Files(*.png)|*.png|""All Files(*.*)|*.*";

	//identify the default file type to be displayed
	ofd->FilterIndex = 1;

	//Display the caption for the Open File dialog (ofd)
	ofd->Title = "Select the PNG Image file";

	//Display the ofd object
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		//Clear the filename
		this->FileNameTextBox->Clear();

		//Copy the name of the file selected into the textbox

		this->FileNameTextBox->Text = ofd->FileName;

		//Load the picture into picturebox
		originalPictureBox->Load(ofd->FileName);

		//Stretch the image in the picturebox
		originalPictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	savedFileName = (char*)(void*)(Marshal::StringToHGlobalAnsi(ofd->FileName));
}
private: System::Void OnAbout(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ian Francis\nStudent ID Number: 400007085\nCOMP3420 Project #2\nPNGWriter Version: "+pngwriter::version(), "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
		
}
private: System::Void onFileClose(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void onFileRedGreyScale(System::Object^ sender, System::EventArgs^ e) {
	pngwriter* original = new pngwriter();
	original->readfromfile(savedFileName);
	int width = original->getwidth();
	int height = original->getheight();
	int red, green, blue, gray;

	pngwriter* grey = new pngwriter(width, height, 0, "Grey.png");
	for (int x = 1; x <= width; x++) {
		for (int y = 1; y < height; y++) {
			red = original->read(x, y, 1);
			green = original->read(x, y, 2);
			blue = original->read(x, y, 3);

			gray = (red + green + blue) / 3;

			if (red >= green && red >= blue) {
				grey->plot(x, y, red, gray, gray);
			}
			else {
				grey->plot(x, y, gray, gray, gray);
			}

		}
	}
	original->close();
	grey->close();
	pictureBox4->Load("Grey.png");
	pictureBox4->SizeMode = PictureBoxSizeMode::Zoom;
}
private: System::Void OnFileFlipVert(System::Object^ sender, System::EventArgs^ e) {
	Bitmap^ VertFlip = gcnew Bitmap(originalPictureBox->Image);
	VertFlip->RotateFlip(RotateFlipType::RotateNoneFlipY);
	pictureBox3->Image = VertFlip;
	pictureBox3->SizeMode = PictureBoxSizeMode::Zoom;
}
private: System::Void OnFileFlipHorizontal(System::Object^ sender, System::EventArgs^ e) {
	Bitmap^ HoriFlip = gcnew Bitmap(originalPictureBox->Image);
	HoriFlip->RotateFlip(RotateFlipType::RotateNoneFlipX);
	pictureBox2->Image = HoriFlip;
	pictureBox2->SizeMode = PictureBoxSizeMode::Zoom;
}
};
}
