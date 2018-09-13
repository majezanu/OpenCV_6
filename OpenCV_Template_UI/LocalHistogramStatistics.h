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
	/// Resumen de LocalHistogramStatistics
	/// </summary>
	public ref class LocalHistogramStatistics : public System::Windows::Forms::Form
	{
	public:
		LocalHistogramStatistics(void)
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
		~LocalHistogramStatistics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  applyThreshold;
	private: System::Windows::Forms::Button^  applyContrast;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TrackBar^  trackBar5;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->applyThreshold = (gcnew System::Windows::Forms::Button());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1312, 514);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 83;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1104, 562);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Vary E";
			this->label2->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label2_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(958, 514);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(348, 45);
			this->trackBar1->TabIndex = 81;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &LocalHistogramStatistics::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 80;
			this->label1->Text = L"Original";
			this->label1->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(687, 307);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 13);
			this->label8->TabIndex = 79;
			this->label8->Text = L"Local Histogram Statistics";
			this->label8->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(133, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 78;
			this->label7->Text = L"Histogram";
			this->label7->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label7_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1023, 42);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 77;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::button7_Click);
			// 
			// applyThreshold
			// 
			this->applyThreshold->Location = System::Drawing::Point(1023, 169);
			this->applyThreshold->Name = L"applyThreshold";
			this->applyThreshold->Size = System::Drawing::Size(170, 44);
			this->applyThreshold->TabIndex = 76;
			this->applyThreshold->Text = L"Local Histogram";
			this->applyThreshold->UseVisualStyleBackColor = true;
			this->applyThreshold->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::applyThreshold_Click);
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(1023, 102);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 75;
			this->applyContrast->Text = L"Histogram";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::applyContrast_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(490, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 74;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(330, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 73;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(120, 326);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 72;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::pictureBox2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1312, 445);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 86;
			this->label4->Text = L"0";
			this->label4->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1104, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 85;
			this->label5->Text = L"Vary K2";
			this->label5->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label5_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(958, 445);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(348, 45);
			this->trackBar2->TabIndex = 84;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &LocalHistogramStatistics::trackBar2_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1312, 375);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 89;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1104, 423);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 88;
			this->label9->Text = L"Vary K1";
			this->label9->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label9_Click);
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(958, 375);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(348, 45);
			this->trackBar3->TabIndex = 87;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &LocalHistogramStatistics::trackBar3_Scroll);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1312, 307);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 92;
			this->label10->Text = L"0";
			this->label10->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1104, 355);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 91;
			this->label11->Text = L"Vary K0";
			this->label11->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label11_Click);
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 1;
			this->trackBar4->Location = System::Drawing::Point(958, 307);
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(348, 45);
			this->trackBar4->TabIndex = 90;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &LocalHistogramStatistics::trackBar4_Scroll);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1312, 243);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 95;
			this->label12->Text = L"0";
			this->label12->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1066, 291);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 13);
			this->label13->TabIndex = 94;
			this->label13->Text = L"Vary Neighborhood Level";
			this->label13->Click += gcnew System::EventHandler(this, &LocalHistogramStatistics::label13_Click);
			// 
			// trackBar5
			// 
			this->trackBar5->LargeChange = 1;
			this->trackBar5->Location = System::Drawing::Point(958, 243);
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(348, 45);
			this->trackBar5->TabIndex = 93;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &LocalHistogramStatistics::trackBar5_Scroll);
			// 
			// LocalHistogramStatistics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyThreshold);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"LocalHistogramStatistics";
			this->Text = L"LocalHistogramStatistics";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat img;
		Img im;
		img = imread("images/Fig0327(a)(tungsten_original).tif");
		if (img.data)
		{
			im.setMat(img);
			im.DrawCvImageColor(pictureBox4);

		}
	}
private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im;
	img = imread("images/Fig0327(a)(tungsten_original).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.cvHistogramEqu());
		im.DrawCvImageColor(pictureBox2);

	}
}
private: System::Void applyThreshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im, new_image;
	img = imread("images/Fig0327(a)(tungsten_original).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.LocalHistorgramStatistics(trackBar5->Value,(trackBar4->Value/10)/10,
			(trackBar3->Value/100)/200,
			(trackBar2->Value/10)/10,trackBar1->Value));
		im.DrawCvImageColor(pictureBox3);
		//DrawCvImageColor(cvEqualizeLocalHist(img, trackBar1->Value), pictureBox3);
	}
	applyThreshold->Enabled = false;
}
private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled =true;
}
private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled =true;
}
private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
