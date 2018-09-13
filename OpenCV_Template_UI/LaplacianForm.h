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
	/// Resumen de LaplacianForm
	/// </summary>
	public ref class LaplacianForm : public System::Windows::Forms::Form
	{
	public:
		LaplacianForm(void)
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
		~LaplacianForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(704, 620);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 97;
			this->label4->Text = L"Sharpened With Mask A";
			this->label4->Click += gcnew System::EventHandler(this, &LaplacianForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1193, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 96;
			this->label3->Text = L"Sharpened With Mask B";
			this->label3->Click += gcnew System::EventHandler(this, &LaplacianForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1175, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 95;
			this->label2->Text = L"Laplacian Without Scaling";
			this->label2->Click += gcnew System::EventHandler(this, &LaplacianForm::label2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(964, 317);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(344, 300);
			this->pictureBox5->TabIndex = 94;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &LaplacianForm::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(825, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(344, 300);
			this->pictureBox1->TabIndex = 93;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LaplacianForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(393, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 92;
			this->label1->Text = L"Original";
			this->label1->Click += gcnew System::EventHandler(this, &LaplacianForm::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(244, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 91;
			this->label7->Text = L"Laplacian with Scaling";
			this->label7->Click += gcnew System::EventHandler(this, &LaplacianForm::label7_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(128, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 90;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &LaplacianForm::button7_Click);
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(128, 166);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 89;
			this->applyContrast->Text = L"Start Process";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &LaplacianForm::applyContrast_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(601, 317);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 88;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LaplacianForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(441, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 87;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &LaplacianForm::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(247, 317);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 86;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LaplacianForm::pictureBox2_Click);
			// 
			// LaplacianForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"LaplacianForm";
			this->Text = L"LaplacianForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		img = imread("images/Fig0338(a)(blurry_moon).tif");
		if (img.data)
		{
			im.setMat(img);
			im.DrawCvImageColor(pictureBox4);

		}
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat kernelA = (Mat_<float>(3, 3) <<			//Kernel 3.37 (a)
		0, 1, 0,
		1, -4, 1,
		0, 1, 0);
	Mat kernelB = (Mat_<float>(3, 3) <<			//Kernel 3.37 (b)
		1, 1, 1,
		1, -8, 1,
		1, 1, 1);
	Mat img, temp;
	Img im, lapA, lapAS, tempIm, lapA2, lapB, lapB2;
	img = imread("images/Fig0338(a)(blurry_moon).tif", IMREAD_COLOR);
	if (img.data)
	{
		im.setMat(img);
		lapA.setMat(im.lapFilter(kernelA));
		lapA.getMat().convertTo(temp, CV_8U);
		cvtColor(temp, temp, COLOR_GRAY2BGR);
		tempIm.setMat(temp);
		tempIm.DrawCvImageColor(pictureBox1);

		lapAS.setMat(lapA.getMat());
		lapAS.setMat(lapAS.lapFilterSCaled());
		lapAS.DrawCvImageColor(pictureBox2);

		lapA2.setMat(img);
		lapA2.setMat(lapA2.sumLap(lapA.getMat()));
		lapA2.DrawCvImageColor(pictureBox3);

		im.setMat(img);
		lapB.setMat(im.lapFilter(kernelB));
		lapB2.setMat(img);
		lapB2.setMat(lapB2.sumLap(lapB.getMat()));
		lapB2.DrawCvImageColor(pictureBox5);
		

	}
	}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
};
}
