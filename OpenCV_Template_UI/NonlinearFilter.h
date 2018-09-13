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
	/// Resumen de NonlinearFilter
	/// </summary>
	public ref class NonlinearFilter : public System::Windows::Forms::Form
	{
	public:
		NonlinearFilter(void)
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
		~NonlinearFilter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label12;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  applyThreshold;
	private: System::Windows::Forms::Button^  applyContrast;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;

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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->applyThreshold = (gcnew System::Windows::Forms::Button());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1312, 243);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 119;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1066, 364);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 13);
			this->label13->TabIndex = 118;
			this->label13->Text = L"Vary Neighborhood Level";
			// 
			// trackBar5
			// 
			this->trackBar5->LargeChange = 1;
			this->trackBar5->Location = System::Drawing::Point(958, 243);
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(348, 45);
			this->trackBar5->TabIndex = 117;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &NonlinearFilter::trackBar5_Scroll);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1312, 380);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 116;
			this->label10->Text = L"0";
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 1;
			this->trackBar4->Location = System::Drawing::Point(958, 380);
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(348, 45);
			this->trackBar4->TabIndex = 114;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &NonlinearFilter::trackBar4_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 104;
			this->label1->Text = L"Original";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(687, 307);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 103;
			this->label8->Text = L"Median Filtered";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(133, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 102;
			this->label7->Text = L"Average Filtered";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1044, 50);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 101;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &NonlinearFilter::button7_Click);
			// 
			// applyThreshold
			// 
			this->applyThreshold->Location = System::Drawing::Point(1044, 307);
			this->applyThreshold->Name = L"applyThreshold";
			this->applyThreshold->Size = System::Drawing::Size(170, 44);
			this->applyThreshold->TabIndex = 100;
			this->applyThreshold->Text = L"Apply Median Filter";
			this->applyThreshold->UseVisualStyleBackColor = true;
			this->applyThreshold->Click += gcnew System::EventHandler(this, &NonlinearFilter::applyThreshold_Click);
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(1044, 167);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 99;
			this->applyContrast->Text = L"Apply Average Filter";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &NonlinearFilter::applyContrast_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(490, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 98;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(330, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 97;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(120, 326);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 96;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1066, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 120;
			this->label2->Text = L"Vary Neighborhood Level";
			// 
			// NonlinearFilter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyThreshold);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"NonlinearFilter";
			this->Text = L"NonlinearFilter";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat img;
		Img im;
		img = imread("images/Fig0335(a)(ckt_board_saltpep_prob_pt05).tif");
		if (img.data)
		{
			im.setMat(img);
			im.DrawCvImageColor(pictureBox4);

		}
	}
private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im;
	img = imread("images/Fig0335(a)(ckt_board_saltpep_prob_pt05).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.avgFilter(trackBar5->Value));
		im.DrawCvImageColor(pictureBox2);

	}
	applyContrast->Enabled = false;
}
private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyContrast->Enabled = true;
}
private: System::Void applyThreshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im;
	img = imread("images/Fig0335(a)(ckt_board_saltpep_prob_pt05).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.medFilter(trackBar4->Value));
		im.DrawCvImageColor(pictureBox3);

	}
	applyThreshold->Enabled = false;
}
private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
}
};
}
