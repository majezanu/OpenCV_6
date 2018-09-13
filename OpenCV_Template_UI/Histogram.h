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
	/// Resumen de Histogram
	/// </summary>
	public ref class Histogram : public System::Windows::Forms::Form
	{
	public:
		Histogram(int caso2)
		{
			caso = caso2;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Histogram()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: int caso;

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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(178, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(300, 300);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(484, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1096, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 300);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(790, 28);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 300);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(1096, 334);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(300, 300);
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(790, 334);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(300, 300);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(484, 334);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(300, 300);
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(178, 334);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(300, 300);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 67);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Show Original";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Histogram::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 67);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Histogram Processing";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Histogram::button2_Click);
			// 
			// Histogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox4);
			this->Name = L"Histogram";
			this->Text = L"Histogram";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Histogram::Histogram_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat img, img2, img3, img4;
		Img im;
		img = imread("images/Fig0320(1)(top_left).tif");
		img2 = imread("images/Fig0320(2)(2nd_from_top).tif");
		img3 = imread("images/Fig0320(3)(third_from_top).tif");
		img4 = imread("images/Fig0320(4)(bottom_left).tif");
		if (img.data && img2.data && img3.data && img4.data)
		{
			im.setMat(img); 
			im.DrawCvImageColor(pictureBox4);
			
			im.setMat(img2);
			im.DrawCvImageColor(pictureBox1);
			
			im.setMat(img3);
			im.DrawCvImageColor(pictureBox3);
			
			im.setMat(img4);
			im.DrawCvImageColor(pictureBox2);
			
			
			

		}
		
		button1->Enabled = false;
		
	}
	
	

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img,img2,img3,img4;
	Img im;

	img = imread("images/Fig0320(1)(top_left).tif");
	img2 = imread("images/Fig0320(2)(2nd_from_top).tif");
	img3 = imread("images/Fig0320(3)(third_from_top).tif");
	img4 = imread("images/Fig0320(4)(bottom_left).tif");
	if (img.data && img2.data && img3.data && img4.data)
	{
		
		
		
		
		if (caso == 1)
		{
			im.setMat(img);
			im.setMat(im.cvHistogramEqu());
			im.DrawCvImageColor(pictureBox8);

			im.setMat(img2);
			im.setMat(im.cvHistogramEqu());
			im.DrawCvImageColor(pictureBox7);

			im.setMat(img3);
			im.setMat(im.cvHistogramEqu());
			im.DrawCvImageColor(pictureBox6);

			im.setMat(img4);
			im.setMat(im.cvHistogramEqu());
			im.DrawCvImageColor(pictureBox5);
			
		}
		else if(caso ==2)
		{

			im.setMat(img);
			im.setMat(im.histogramProcessingManual());
			im.DrawCvImageColor(pictureBox8);

			im.setMat(img2);
			im.setMat(im.histogramProcessingManual());
			im.DrawCvImageColor(pictureBox7);

			im.setMat(img3);
			im.setMat(im.histogramProcessingManual());
			im.DrawCvImageColor(pictureBox6);

			im.setMat(img4);
			im.setMat(im.histogramProcessingManual());
			im.DrawCvImageColor(pictureBox5);
			
			
		}
		
		
		
	}
	
	
	
	
	
	button2->Enabled = false;

}

private: System::Void Histogram_Load(System::Object^  sender, System::EventArgs^  e) {
	if (caso == 1)
	{
		button2->Text = "Histogram Processing Automatic";
	}
	else if (caso ==2)
	{
		button2->Text = "Histogram Processing Manual";
	}
	
}
};
}
