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
	/// Resumen de FuzzyFilterForm
	/// </summary>
	public ref class FuzzyFilterForm : public System::Windows::Forms::Form
	{
	public:
		FuzzyFilterForm(void)
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
		~FuzzyFilterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  applyThreshold;
	private: System::Windows::Forms::Button^  applyContrast;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->applyThreshold = (gcnew System::Windows::Forms::Button());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(291, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 78;
			this->label1->Text = L"Original";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(696, 307);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 77;
			this->label8->Text = L"Fuzzy Filter";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(142, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 76;
			this->label7->Text = L"Histogram";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1032, 176);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 75;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &FuzzyFilterForm::button7_Click);
			// 
			// applyThreshold
			// 
			this->applyThreshold->Location = System::Drawing::Point(1032, 302);
			this->applyThreshold->Name = L"applyThreshold";
			this->applyThreshold->Size = System::Drawing::Size(170, 44);
			this->applyThreshold->TabIndex = 74;
			this->applyThreshold->Text = L"Fuzzy Filter";
			this->applyThreshold->UseVisualStyleBackColor = true;
			this->applyThreshold->Click += gcnew System::EventHandler(this, &FuzzyFilterForm::applyThreshold_Click);
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(1032, 235);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 73;
			this->applyContrast->Text = L"Histogram";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &FuzzyFilterForm::applyContrast_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(499, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 72;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(339, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 71;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(129, 326);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 70;
			this->pictureBox2->TabStop = false;
			// 
			// FuzzyFilterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyThreshold);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"FuzzyFilterForm";
			this->Text = L"FuzzyFilterForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
		img = imread("images/Fig0354(a)(einstein_orig).tif");
		if (img.data)
		{
			im.setMat(img);
			im.DrawCvImageColor(pictureBox4);

		}
	}
private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	Img im;
	img = imread("images/Fig0354(a)(einstein_orig).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.cvHistogramEqu());
		im.DrawCvImageColor(pictureBox2);

	}
}
private: System::Void applyThreshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img, temp;
	Img im, tempIm;
	img = imread("images/Fig0354(a)(einstein_orig).tif");
	if (img.data)
	{
		im.setMat(img);
		im.setMat(im.fuzzyFilter(0, 127, 255));
		im.getMat().convertTo(temp, CV_8U);
		cvtColor(temp, temp, COLOR_GRAY2BGR);
		im.setMat(temp);
		im.DrawCvImageColor(pictureBox3);

	}
}
};
}
