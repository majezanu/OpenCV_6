#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include "IntensityTransForm.h"
#include "ContrastStretching.h"
#include "Histogram.h"
#include "LocalHist.h"
#include "LocalHistogramStatistics.h"
#include "NonlinearFilter.h"
#include "LaplacianForm.h"
#include "FuzzyFilterForm.h"
#include "About.h"

namespace OpenCVTemplateUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de MyainForm
	/// </summary>
	public ref class MyainForm : public System::Windows::Forms::Form
	{
		public:
			MyainForm(void)
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
			~MyainForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^  menuStrip1;
				 
		protected:




				 IntensityTransForm^ h;





		private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^  histogramProcessingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  histogramToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  manualToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  automaticToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  localHistogramToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  localHistogramStatisticsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  negativeTransformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  negativeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gammaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig307ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig308ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig309ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logaritmicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contrastStrechingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  spatialFilteringToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nonlinearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  medianFilterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  laplacianToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fuzzyFilterToolStripMenuItem;



		protected:

		protected:

		private:
		///		<summary>
		/// Variable del diseñador necesaria.
		///		</summary>
				System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		///		<summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		///		</summary>
				void InitializeComponent(void)
		{
					this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
					this->negativeTransformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->negativeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->gammaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig307ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig308ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig309ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->logaritmicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->contrastStrechingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->histogramProcessingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->histogramToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->manualToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->automaticToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->localHistogramToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->localHistogramStatisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->spatialFilteringToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->nonlinearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->medianFilterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->laplacianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fuzzyFilterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->menuStrip1->SuspendLayout();
					this->SuspendLayout();
					// 
					// menuStrip1
					// 
					this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
						this->negativeTransformationToolStripMenuItem,
							this->histogramProcessingToolStripMenuItem, this->spatialFilteringToolStripMenuItem, this->fuzzyFilterToolStripMenuItem, this->aboutToolStripMenuItem
					});
					this->menuStrip1->Location = System::Drawing::Point(0, 0);
					this->menuStrip1->Name = L"menuStrip1";
					this->menuStrip1->Size = System::Drawing::Size(1385, 24);
					this->menuStrip1->TabIndex = 0;
					this->menuStrip1->Text = L"menuStrip1";
					// 
					// negativeTransformationToolStripMenuItem
					// 
					this->negativeTransformationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
						this->negativeToolStripMenuItem,
							this->gammaToolStripMenuItem, this->logaritmicToolStripMenuItem, this->contrastStrechingToolStripMenuItem
					});
					this->negativeTransformationToolStripMenuItem->Name = L"negativeTransformationToolStripMenuItem";
					this->negativeTransformationToolStripMenuItem->Size = System::Drawing::Size(148, 20);
					this->negativeTransformationToolStripMenuItem->Text = L"Intensity Transformation";
					this->negativeTransformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::negativeTransformationToolStripMenuItem_Click);
					// 
					// negativeToolStripMenuItem
					// 
					this->negativeToolStripMenuItem->Name = L"negativeToolStripMenuItem";
					this->negativeToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->negativeToolStripMenuItem->Text = L"Negative";
					this->negativeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::negativeToolStripMenuItem_Click);
					// 
					// gammaToolStripMenuItem
					// 
					this->gammaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
						this->fig307ToolStripMenuItem,
							this->fig308ToolStripMenuItem, this->fig309ToolStripMenuItem
					});
					this->gammaToolStripMenuItem->Name = L"gammaToolStripMenuItem";
					this->gammaToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->gammaToolStripMenuItem->Text = L"Gamma";
					this->gammaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::gammaToolStripMenuItem_Click);
					// 
					// fig307ToolStripMenuItem
					// 
					this->fig307ToolStripMenuItem->Name = L"fig307ToolStripMenuItem";
					this->fig307ToolStripMenuItem->Size = System::Drawing::Size(118, 22);
					this->fig307ToolStripMenuItem->Text = L"Fig_3_07";
					this->fig307ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig307ToolStripMenuItem_Click);
					// 
					// fig308ToolStripMenuItem
					// 
					this->fig308ToolStripMenuItem->Name = L"fig308ToolStripMenuItem";
					this->fig308ToolStripMenuItem->Size = System::Drawing::Size(118, 22);
					this->fig308ToolStripMenuItem->Text = L"Fig_3_08";
					this->fig308ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig308ToolStripMenuItem_Click);
					// 
					// fig309ToolStripMenuItem
					// 
					this->fig309ToolStripMenuItem->Name = L"fig309ToolStripMenuItem";
					this->fig309ToolStripMenuItem->Size = System::Drawing::Size(118, 22);
					this->fig309ToolStripMenuItem->Text = L"Fig_3_09";
					this->fig309ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig309ToolStripMenuItem_Click);
					// 
					// logaritmicToolStripMenuItem
					// 
					this->logaritmicToolStripMenuItem->Name = L"logaritmicToolStripMenuItem";
					this->logaritmicToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->logaritmicToolStripMenuItem->Text = L"Logaritmic";
					this->logaritmicToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::logaritmicToolStripMenuItem_Click);
					// 
					// contrastStrechingToolStripMenuItem
					// 
					this->contrastStrechingToolStripMenuItem->Name = L"contrastStrechingToolStripMenuItem";
					this->contrastStrechingToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->contrastStrechingToolStripMenuItem->Text = L"Contrast Streching";
					this->contrastStrechingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::contrastStrechingToolStripMenuItem_Click);
					// 
					// histogramProcessingToolStripMenuItem
					// 
					this->histogramProcessingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
						this->histogramToolStripMenuItem1,
							this->localHistogramToolStripMenuItem1, this->localHistogramStatisticsToolStripMenuItem
					});
					this->histogramProcessingToolStripMenuItem->Name = L"histogramProcessingToolStripMenuItem";
					this->histogramProcessingToolStripMenuItem->Size = System::Drawing::Size(135, 20);
					this->histogramProcessingToolStripMenuItem->Text = L"Histogram Processing";
					// 
					// histogramToolStripMenuItem1
					// 
					this->histogramToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
						this->manualToolStripMenuItem1,
							this->automaticToolStripMenuItem1
					});
					this->histogramToolStripMenuItem1->Name = L"histogramToolStripMenuItem1";
					this->histogramToolStripMenuItem1->Size = System::Drawing::Size(210, 22);
					this->histogramToolStripMenuItem1->Text = L"Histogram";
					// 
					// manualToolStripMenuItem1
					// 
					this->manualToolStripMenuItem1->Name = L"manualToolStripMenuItem1";
					this->manualToolStripMenuItem1->Size = System::Drawing::Size(130, 22);
					this->manualToolStripMenuItem1->Text = L"Manual";
					this->manualToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyainForm::manualToolStripMenuItem1_Click);
					// 
					// automaticToolStripMenuItem1
					// 
					this->automaticToolStripMenuItem1->Name = L"automaticToolStripMenuItem1";
					this->automaticToolStripMenuItem1->Size = System::Drawing::Size(130, 22);
					this->automaticToolStripMenuItem1->Text = L"Automatic";
					this->automaticToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyainForm::automaticToolStripMenuItem1_Click);
					// 
					// localHistogramToolStripMenuItem1
					// 
					this->localHistogramToolStripMenuItem1->Name = L"localHistogramToolStripMenuItem1";
					this->localHistogramToolStripMenuItem1->Size = System::Drawing::Size(210, 22);
					this->localHistogramToolStripMenuItem1->Text = L"Local Histogram";
					this->localHistogramToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyainForm::localHistogramToolStripMenuItem1_Click);
					// 
					// localHistogramStatisticsToolStripMenuItem
					// 
					this->localHistogramStatisticsToolStripMenuItem->Name = L"localHistogramStatisticsToolStripMenuItem";
					this->localHistogramStatisticsToolStripMenuItem->Size = System::Drawing::Size(210, 22);
					this->localHistogramStatisticsToolStripMenuItem->Text = L"Local Histogram Statistics";
					this->localHistogramStatisticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::localHistogramStatisticsToolStripMenuItem_Click);
					// 
					// spatialFilteringToolStripMenuItem
					// 
					this->spatialFilteringToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
						this->nonlinearToolStripMenuItem,
							this->laplacianToolStripMenuItem
					});
					this->spatialFilteringToolStripMenuItem->Name = L"spatialFilteringToolStripMenuItem";
					this->spatialFilteringToolStripMenuItem->Size = System::Drawing::Size(100, 20);
					this->spatialFilteringToolStripMenuItem->Text = L"Spatial Filtering";
					// 
					// nonlinearToolStripMenuItem
					// 
					this->nonlinearToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->medianFilterToolStripMenuItem });
					this->nonlinearToolStripMenuItem->Name = L"nonlinearToolStripMenuItem";
					this->nonlinearToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->nonlinearToolStripMenuItem->Text = L"Nonlinear Filtering";
					this->nonlinearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::nonlinearToolStripMenuItem_Click);
					// 
					// medianFilterToolStripMenuItem
					// 
					this->medianFilterToolStripMenuItem->Name = L"medianFilterToolStripMenuItem";
					this->medianFilterToolStripMenuItem->Size = System::Drawing::Size(143, 22);
					this->medianFilterToolStripMenuItem->Text = L"Median Filter";
					this->medianFilterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::medianFilterToolStripMenuItem_Click);
					// 
					// laplacianToolStripMenuItem
					// 
					this->laplacianToolStripMenuItem->Name = L"laplacianToolStripMenuItem";
					this->laplacianToolStripMenuItem->Size = System::Drawing::Size(172, 22);
					this->laplacianToolStripMenuItem->Text = L"Laplacian";
					this->laplacianToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::laplacianToolStripMenuItem_Click);
					// 
					// fuzzyFilterToolStripMenuItem
					// 
					this->fuzzyFilterToolStripMenuItem->Name = L"fuzzyFilterToolStripMenuItem";
					this->fuzzyFilterToolStripMenuItem->Size = System::Drawing::Size(77, 20);
					this->fuzzyFilterToolStripMenuItem->Text = L"Fuzzy Filter";
					this->fuzzyFilterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fuzzyFilterToolStripMenuItem_Click);
					// 
					// aboutToolStripMenuItem
					// 
					this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
					this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
					this->aboutToolStripMenuItem->Text = L"About";
					this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::aboutToolStripMenuItem_Click);
					// 
					// MyainForm
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(1385, 674);
					this->Controls->Add(this->menuStrip1);
					this->IsMdiContainer = true;
					this->KeyPreview = true;
					this->MainMenuStrip = this->menuStrip1;
					this->Name = L"MyainForm";
					this->Text = L"Digital Image Processing";
					this->Load += gcnew System::EventHandler(this, &MyainForm::MyainForm_Load);
					this->menuStrip1->ResumeLayout(false);
					this->menuStrip1->PerformLayout();
					this->ResumeLayout(false);
					this->PerformLayout();

				}
		#pragma endregion
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void MyainForm_Load(System::Object^  sender, System::EventArgs^  e) 
		{
			selectTransform(1);
	
		}
		private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		{

		}
		private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void negativeTransformationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void negativeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			selectTransform(1);	
		
		}
		private: System::Void gammaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			
		}
		private: System::Void logaritmicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			selectTransform(3);
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	
		}

		private: System::Void selectTransform(int caso)
		{
			clearMDI();
			IntensityTransForm^ h =gcnew IntensityTransForm(caso);
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
				
			
			
		}
		private: System::Void contrastStretchingView()
		{
			clearMDI();
			ContrastStretching^ h = gcnew ContrastStretching();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void HistogramProcessingView(int caso)
		{
			clearMDI();
			Histogram^ h = gcnew Histogram(caso);
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void LocalHistView()
		{
			clearMDI();
			LocalHist^ h = gcnew LocalHist();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void LocalHistStatsView()
		{
			clearMDI();
			LocalHistogramStatistics^ h = gcnew LocalHistogramStatistics();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void NonLinearFilteringView()
		{
			clearMDI();
			NonlinearFilter^ h = gcnew NonlinearFilter();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void LaplacianView()
		{
			clearMDI();
			LaplacianForm^ h = gcnew LaplacianForm();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void FuzzyView()
		{
			clearMDI();
			FuzzyFilterForm^ h = gcnew FuzzyFilterForm();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}
		private: System::Void aboutView()
		{
			clearMDI();
			About^ h = gcnew About();
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
		}

		private: System::Void clearMDI()
		{
			for each(Form^ c in MdiChildren)
			{
				c->Close();
			}
		}

				 
		
private: System::Void fig308ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(2);
}
private: System::Void fig307ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(4);
}
private: System::Void fig309ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(5);
}
private: System::Void contrastStrechingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	contrastStretchingView();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	aboutView();

}


private: System::Void manualToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	HistogramProcessingView(2);
}

private: System::Void automaticToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	HistogramProcessingView(1);
}
private: System::Void localHistogramToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	LocalHistView();
}
private: System::Void localHistogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void localHistogramStatisticsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LocalHistStatsView();
}
private: System::Void nonlinearToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void medianFilterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NonLinearFilteringView();
}
private: System::Void laplacianToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LaplacianView();
}
private: System::Void fuzzyFilterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FuzzyView();
}
};
}
