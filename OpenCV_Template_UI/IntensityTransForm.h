#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "Img.h"
 

namespace OpenCVTemplateUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	
	

	/// <summary>
	/// Resumen de IntensityTransForms
	/// </summary>
	public ref class IntensityTransForm : public System::Windows::Forms::Form
	{
	public:
		IntensityTransForm(int caso2)
		{
			caso = caso2;
			
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IntensityTransForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		int caso;
		int constant;
		int gamma;

		
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(837, 536);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Vary Constants";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(422, 527);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(391, 45);
			this->trackBar1->TabIndex = 11;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &IntensityTransForm::trackBar1_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 527);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Apply Transformation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IntensityTransForm::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(628, 104);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(543, 402);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 104);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(533, 402);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(526, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Transformation";
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(422, 579);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(391, 45);
			this->trackBar3->TabIndex = 14;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &IntensityTransForm::trackBar3_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(837, 579);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Vary Gamma";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(922, 536);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L".";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(919, 579);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L".";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Original";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(628, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Transformed";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Show Original";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IntensityTransForm::button2_Click);
			// 
			// IntensityTransForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1239, 646);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"IntensityTransForm";
			this->ShowInTaskbar = false;
			this->Text = L"IntensityTransForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &IntensityTransForm::IntensityTransForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat img;
		Img im = Img();
		Img new_Image = Img();
		
		
		switch (caso)
		{
		case 1:
			label1->Text = "Applyng Negative Transform";
			img = imread("images/Fig3_4.tif");
			
			if (img.data)
			{
				im.setMat(img);
				new_Image.setMat(im.Image2Negative());
			}

			break;
		case 2:
			label1->Text = "Applyng Gamma Transform";
			img = imread("images/Fig3_8.tif");
			if (img.data)
			{
				im.setMat(img);
				new_Image.setMat(im.Image2Gamma(constant, gamma));
		
			}

			break;
		case 3:
			label1->Text = "Applyng Logaritmic Transform";
			img = imread("images/Fig3_5.tif");
			
			if (img.data)
			{
				im.setMat(img);
				new_Image.setMat(im.Image2Log(constant));
			
			}

			break;
		case 4:
			label1->Text = "Applyng Gamma Transform";
			img = imread("images/Fig3_7.tif");
			
			if (img.data)
			{

				im.setMat(img);
				new_Image.setMat(im.Image2Gamma(constant, gamma));
				
			}
			
			break;
		case 5:
			label1->Text = "Applyng Gamma Transform";
			img = imread("images/Fig3_9.tif");
			
			if (img.data)
			{
				im.setMat(img);
				new_Image.setMat(im.Image2Gamma(constant, gamma));
				
			}
			break;
		}
		new_Image.DrawCvImageColor(pictureBox2);
		button1->Enabled = false;
		
	}
					

private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			
			switch (caso)
			{
			case 1:
				
				break;
			case 2:
				
				button1->Enabled = true;
				constant = trackBar1->Value;
				break;
			case 3:
				
				button1->Enabled = true;
				constant = trackBar1->Value;
				break;
			case 4:

				button1->Enabled = true;
				constant = trackBar1->Value;
				break;
			case 5:

				button1->Enabled = true;
				constant = trackBar1->Value;
				break;

			}
			label6->Text = System::Convert::ToString(constant);
			
}
private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {

	
		gamma = trackBar3->Value;
		label7->Text = System::Convert::ToString(gamma);
		button1->Enabled = true;
	
}
private: System::Void IntensityTransForm_Load(System::Object^  sender, System::EventArgs^  e) {
	switch (caso)
	{
	case 1:
		trackBar1->Enabled = false;
		trackBar3 -> Enabled = false;
		label1->Text = "Negative Transform";
		break;
	case 2:
		trackBar1->Enabled = true;
		trackBar3->Enabled = true;
		label1->Text = "Gamma Transform";
		break;
	case 3:
		trackBar1->Enabled = true;
		trackBar3->Enabled = false;
		label1->Text = "Logaritmic Transform";
		break;
	case 4:
		trackBar1->Enabled = true;
		trackBar3->Enabled = true;
		label1->Text = "Gamma Transform";
		break;
	case 5:
		trackBar1->Enabled = true;
		trackBar3->Enabled = true;
		label1->Text = "Gamma Transform";
		break;
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im = Img();
	cv::String path;
	label1->Text = "Showing Original";
	switch (caso)
	{
	case 1:
		path = "images/Fig3_4.tif";
		break;
	case 2:
		path = "images/Fig3_8.tif";
		break;
	case 3:
		path = "images/Fig3_5.tif";
		break;
	case 4:
		path = "images/Fig3_7.tif";
		break;
	case 5:
		path = "images/Fig3_9.tif";
		break;
	}
	img = imread(path);
	if (img.data)
	{
		im.setMat(img);
		im.DrawCvImageColor(pictureBox1);
	}
	button2->Enabled = false;

}
};
}
