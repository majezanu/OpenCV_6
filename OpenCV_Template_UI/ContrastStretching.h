#pragma once
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
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
	/// Resumen de ContrastStretching
	/// </summary>
	public ref class ContrastStretching : public System::Windows::Forms::Form
	{
	public:
		ContrastStretching(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ContrastStretching()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;













	private: System::Windows::Forms::Button^  applyContrast;
	private: System::Windows::Forms::Button^  applyThreshold;
	private: System::Windows::Forms::Button^  button7;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  S2;

	private: System::Windows::Forms::TrackBar^  S1;

	private: System::Windows::Forms::TrackBar^  R2;
	private: System::Windows::Forms::TrackBar^  R1;
	private: System::Windows::Forms::Label^  r1_val;
	private: System::Windows::Forms::Label^  r2_val;
	private: System::Windows::Forms::Label^  s1_val;
	private: System::Windows::Forms::Label^  s2_val;
	private: System::Windows::Forms::Label^  k_val;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	protected:

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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->applyThreshold = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->S2 = (gcnew System::Windows::Forms::TrackBar());
			this->S1 = (gcnew System::Windows::Forms::TrackBar());
			this->R2 = (gcnew System::Windows::Forms::TrackBar());
			this->R1 = (gcnew System::Windows::Forms::TrackBar());
			this->r1_val = (gcnew System::Windows::Forms::Label());
			this->r2_val = (gcnew System::Windows::Forms::Label());
			this->s1_val = (gcnew System::Windows::Forms::Label());
			this->s2_val = (gcnew System::Windows::Forms::Label());
			this->k_val = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(12, 309);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(382, 309);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(222, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(751, 96);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 22;
			this->applyContrast->Text = L"Apply Contrast Stretching";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &ContrastStretching::applyContrast_Click);
			// 
			// applyThreshold
			// 
			this->applyThreshold->Location = System::Drawing::Point(927, 96);
			this->applyThreshold->Name = L"applyThreshold";
			this->applyThreshold->Size = System::Drawing::Size(170, 44);
			this->applyThreshold->TabIndex = 23;
			this->applyThreshold->Text = L"Apply Thresholding";
			this->applyThreshold->UseVisualStyleBackColor = true;
			this->applyThreshold->Click += gcnew System::EventHandler(this, &ContrastStretching::applyThreshold_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(835, 46);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ContrastStretching::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(886, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"R1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(886, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"R2";
			this->label3->Click += gcnew System::EventHandler(this, &ContrastStretching::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(886, 383);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"S2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(886, 336);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"S1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(886, 428);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"K";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(927, 428);
			this->trackBar1->Maximum = 30;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(165, 45);
			this->trackBar1->TabIndex = 31;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &ContrastStretching::trackBar1_Scroll);
			// 
			// S2
			// 
			this->S2->Location = System::Drawing::Point(927, 366);
			this->S2->Maximum = 255;
			this->S2->Name = L"S2";
			this->S2->Size = System::Drawing::Size(165, 45);
			this->S2->SmallChange = 5;
			this->S2->TabIndex = 32;
			this->S2->Scroll += gcnew System::EventHandler(this, &ContrastStretching::S2_Scroll);
			// 
			// S1
			// 
			this->S1->Location = System::Drawing::Point(927, 326);
			this->S1->Maximum = 255;
			this->S1->Name = L"S1";
			this->S1->Size = System::Drawing::Size(165, 45);
			this->S1->SmallChange = 5;
			this->S1->TabIndex = 33;
			this->S1->Scroll += gcnew System::EventHandler(this, &ContrastStretching::S1_Scroll);
			// 
			// R2
			// 
			this->R2->Location = System::Drawing::Point(927, 275);
			this->R2->Maximum = 255;
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(165, 45);
			this->R2->SmallChange = 5;
			this->R2->TabIndex = 34;
			this->R2->Scroll += gcnew System::EventHandler(this, &ContrastStretching::R2_Scroll);
			// 
			// R1
			// 
			this->R1->Location = System::Drawing::Point(929, 224);
			this->R1->Maximum = 255;
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(165, 45);
			this->R1->SmallChange = 5;
			this->R1->TabIndex = 35;
			this->R1->Scroll += gcnew System::EventHandler(this, &ContrastStretching::R1_Scroll);
			// 
			// r1_val
			// 
			this->r1_val->AutoSize = true;
			this->r1_val->Location = System::Drawing::Point(1100, 236);
			this->r1_val->Name = L"r1_val";
			this->r1_val->Size = System::Drawing::Size(13, 13);
			this->r1_val->TabIndex = 36;
			this->r1_val->Text = L"1";
			// 
			// r2_val
			// 
			this->r2_val->AutoSize = true;
			this->r2_val->Location = System::Drawing::Point(1100, 283);
			this->r2_val->Name = L"r2_val";
			this->r2_val->Size = System::Drawing::Size(13, 13);
			this->r2_val->TabIndex = 37;
			this->r2_val->Text = L"1";
			// 
			// s1_val
			// 
			this->s1_val->AutoSize = true;
			this->s1_val->Location = System::Drawing::Point(1100, 336);
			this->s1_val->Name = L"s1_val";
			this->s1_val->Size = System::Drawing::Size(13, 13);
			this->s1_val->TabIndex = 38;
			this->s1_val->Text = L"1";
			// 
			// s2_val
			// 
			this->s2_val->AutoSize = true;
			this->s2_val->Location = System::Drawing::Point(1100, 383);
			this->s2_val->Name = L"s2_val";
			this->s2_val->Size = System::Drawing::Size(13, 13);
			this->s2_val->TabIndex = 39;
			this->s2_val->Text = L"1";
			// 
			// k_val
			// 
			this->k_val->AutoSize = true;
			this->k_val->Location = System::Drawing::Point(1098, 428);
			this->k_val->Name = L"k_val";
			this->k_val->Size = System::Drawing::Size(13, 13);
			this->k_val->TabIndex = 40;
			this->k_val->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(164, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Original";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Contrast Stretching Transform";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(579, 290);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Threshold Transform";
			// 
			// ContrastStretching
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1239, 646);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->k_val);
			this->Controls->Add(this->s2_val);
			this->Controls->Add(this->s1_val);
			this->Controls->Add(this->r2_val);
			this->Controls->Add(this->r1_val);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->R2);
			this->Controls->Add(this->S1);
			this->Controls->Add(this->S2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyThreshold);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"ContrastStretching";
			this->Text = L"ContrastStretching";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ContrastStretching::ContrastStretching_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat img;
		Img im, new_Image;
		img = imread("images/Fig3_10.tif");
		if (img.data)
		{
			im.setMat(img);
			new_Image.setMat(im.contrastStretching(R1->Value, S1->Value, R2->Value, S2->Value));
		
		}
		new_Image.DrawCvImageColor(pictureBox2);
		applyContrast->Enabled = false;
		

	}
	



private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im;
	img = imread("images/Fig3_10.tif");
	if (img.data)
	{
		im.setMat(img);
		im.DrawCvImageColor(pictureBox4);
	}
	button7->Enabled = false;

	applyContrast->Enabled = true;
	applyThreshold->Enabled = true;
	
}



private: System::Void ContrastStretching_Load(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = false;
	applyThreshold->Enabled = false;
	R1->Value = 1;
	R2->Value = 1;
	S1->Value = 1;
	S2->Value = 1;
	trackBar1->Value = 1;
}


private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void applyThreshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im = Img();
	Img new_Image;
	img = imread("images/Fig3_10.tif");
	if (img.data)
	{
		im.setMat(img);
		new_Image.setMat(im.threshold(trackBar1->Value + 100));
		new_Image.DrawCvImageColor(pictureBox3);
	}
	applyThreshold->Enabled = false;
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
	k_val->Text = System::Convert::ToString(trackBar1->Value);
}
private: System::Void R1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = true;
	r1_val->Text = System::Convert::ToString(R1->Value);
}
private: System::Void R2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = true;
	r2_val->Text = System::Convert::ToString(R2->Value);
}
private: System::Void S1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = true;
	s1_val->Text = System::Convert::ToString(S1->Value);
}
private: System::Void S2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = true;
	s2_val->Text = System::Convert::ToString(S2->Value);
}
};
}
