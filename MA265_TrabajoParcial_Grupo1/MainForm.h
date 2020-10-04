#pragma once
#include "Entity2D.h"
#include "Drawer.h"
#include "Figure2D.h"
#include "Figura.h"
#include "Reflexion.h"
namespace MA265TrabajoParcialGrupo1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Timer^ timer1;
		Figure2D* mainFigure;
		Reflexion* reflexion;
	private: System::Windows::Forms::Button^ button1;
		   Drawer^ mainDrawer;
	public:
		MainForm(void)
		{
			InitializeComponent();
			dib = 0;
			alargar = false;
			g = pictureBoxGraphics->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, this->ClientRectangle);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:

		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDraw;
	private: System::Windows::Forms::DataGridView^ dataGridVertices;
	protected:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VertixX;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VertixY;
	private: System::Windows::Forms::GroupBox^ groupVertices;
	private: System::Windows::Forms::PictureBox^ pictureBoxGraphics;


	private: System::Windows::Forms::GroupBox^ groupSettings;

	private: System::Windows::Forms::Button^ btnClean;
	private: System::Windows::Forms::GroupBox^ groupRotation;
	private: System::Windows::Forms::GroupBox^ groupReflection;
	private: System::Windows::Forms::Label^ lblReflectionLine;
	private: System::Windows::Forms::TextBox^ txtReflectionLineX;
	private: System::Windows::Forms::Label^ lblReflectionLineX;
	private: System::Windows::Forms::Button^ btnShowReflection;
	private: System::Windows::Forms::GroupBox^ groupHomothecy;
	private: System::Windows::Forms::TextBox^ txtHomothecyCenterY;
	private: System::Windows::Forms::TextBox^ txtHomothecyCenterX;
	private: System::Windows::Forms::Label^ lblHomothecyCenterY;
	private: System::Windows::Forms::Label^ lblHomothecyCenterX;
	private: System::Windows::Forms::Label^ lblHomothecyCenter;
	private: System::Windows::Forms::Label^ lblHomothecyFactor;
	private: System::Windows::Forms::TextBox^ txtHomothecyFactor;
	private: System::Windows::Forms::RadioButton^ radioHomothecyDecrease;
	private: System::Windows::Forms::RadioButton^ radioHomothecyIncrease;
	private: System::Windows::Forms::Button^ btnShowHomothecy;
	private: System::Windows::Forms::Label^ lblRotationAngle;
	private: System::Windows::Forms::TextBox^ txtRotationAngle;
	private: System::Windows::Forms::RadioButton^ radioNonClockwise;
	private: System::Windows::Forms::RadioButton^ radioClockwise;
	private: System::Windows::Forms::Button^ btnShowRotation;


	protected:
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		float xC, yC;
		float fact;
		int dib;
		bool alargar=true;
		Figura* figura;
		Graphics^ g;
		BufferedGraphics^ buffer;
		BufferedGraphicsContext^ espacio;

		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnDraw = (gcnew System::Windows::Forms::Button());
			this->dataGridVertices = (gcnew System::Windows::Forms::DataGridView());
			this->VertixX = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VertixY = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupVertices = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxGraphics = (gcnew System::Windows::Forms::PictureBox());
			this->groupSettings = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupReflection = (gcnew System::Windows::Forms::GroupBox());
			this->lblReflectionLine = (gcnew System::Windows::Forms::Label());
			this->txtReflectionLineX = (gcnew System::Windows::Forms::TextBox());
			this->lblReflectionLineX = (gcnew System::Windows::Forms::Label());
			this->btnShowReflection = (gcnew System::Windows::Forms::Button());
			this->groupHomothecy = (gcnew System::Windows::Forms::GroupBox());
			this->txtHomothecyCenterY = (gcnew System::Windows::Forms::TextBox());
			this->txtHomothecyCenterX = (gcnew System::Windows::Forms::TextBox());
			this->lblHomothecyCenterY = (gcnew System::Windows::Forms::Label());
			this->lblHomothecyCenterX = (gcnew System::Windows::Forms::Label());
			this->lblHomothecyCenter = (gcnew System::Windows::Forms::Label());
			this->lblHomothecyFactor = (gcnew System::Windows::Forms::Label());
			this->txtHomothecyFactor = (gcnew System::Windows::Forms::TextBox());
			this->radioHomothecyDecrease = (gcnew System::Windows::Forms::RadioButton());
			this->radioHomothecyIncrease = (gcnew System::Windows::Forms::RadioButton());
			this->btnShowHomothecy = (gcnew System::Windows::Forms::Button());
			this->groupRotation = (gcnew System::Windows::Forms::GroupBox());
			this->lblRotationAngle = (gcnew System::Windows::Forms::Label());
			this->txtRotationAngle = (gcnew System::Windows::Forms::TextBox());
			this->radioNonClockwise = (gcnew System::Windows::Forms::RadioButton());
			this->radioClockwise = (gcnew System::Windows::Forms::RadioButton());
			this->btnShowRotation = (gcnew System::Windows::Forms::Button());
			this->btnClean = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridVertices))->BeginInit();
			this->groupVertices->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraphics))->BeginInit();
			this->groupSettings->SuspendLayout();
			this->groupReflection->SuspendLayout();
			this->groupHomothecy->SuspendLayout();
			this->groupRotation->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// btnDraw
			// 
			this->btnDraw->Location = System::Drawing::Point(258, 296);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(132, 39);
			this->btnDraw->TabIndex = 0;
			this->btnDraw->Text = L"Dibujar";
			this->btnDraw->UseVisualStyleBackColor = true;
			this->btnDraw->Click += gcnew System::EventHandler(this, &MainForm::btnDraw_Click);
			// 
			// dataGridVertices
			// 
			this->dataGridVertices->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridVertices->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->VertixX,
					this->VertixY
			});
			this->dataGridVertices->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridVertices->Location = System::Drawing::Point(3, 18);
			this->dataGridVertices->Name = L"dataGridVertices";
			this->dataGridVertices->RowHeadersWidth = 51;
			this->dataGridVertices->RowTemplate->Height = 24;
			this->dataGridVertices->Size = System::Drawing::Size(353, 238);
			this->dataGridVertices->TabIndex = 1;
			// 
			// VertixX
			// 
			this->VertixX->HeaderText = L"x";
			this->VertixX->MinimumWidth = 6;
			this->VertixX->Name = L"VertixX";
			this->VertixX->Width = 125;
			// 
			// VertixY
			// 
			this->VertixY->HeaderText = L"y";
			this->VertixY->MinimumWidth = 6;
			this->VertixY->Name = L"VertixY";
			this->VertixY->Width = 125;
			// 
			// groupVertices
			// 
			this->groupVertices->Controls->Add(this->dataGridVertices);
			this->groupVertices->Location = System::Drawing::Point(31, 31);
			this->groupVertices->Name = L"groupVertices";
			this->groupVertices->Size = System::Drawing::Size(359, 259);
			this->groupVertices->TabIndex = 2;
			this->groupVertices->TabStop = false;
			this->groupVertices->Text = L"Vértices";
			// 
			// pictureBoxGraphics
			// 
			this->pictureBoxGraphics->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxGraphics->Location = System::Drawing::Point(0, 0);
			this->pictureBoxGraphics->Name = L"pictureBoxGraphics";
			this->pictureBoxGraphics->Size = System::Drawing::Size(1794, 930);
			this->pictureBoxGraphics->TabIndex = 3;
			this->pictureBoxGraphics->TabStop = false;
			// 
			// groupSettings
			// 
			this->groupSettings->Controls->Add(this->button1);
			this->groupSettings->Controls->Add(this->groupReflection);
			this->groupSettings->Controls->Add(this->groupHomothecy);
			this->groupSettings->Controls->Add(this->groupRotation);
			this->groupSettings->Controls->Add(this->btnClean);
			this->groupSettings->Controls->Add(this->groupVertices);
			this->groupSettings->Controls->Add(this->btnDraw);
			this->groupSettings->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupSettings->Location = System::Drawing::Point(0, 0);
			this->groupSettings->Name = L"groupSettings";
			this->groupSettings->Size = System::Drawing::Size(423, 930);
			this->groupSettings->TabIndex = 4;
			this->groupSettings->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(178, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 47);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// groupReflection
			// 
			this->groupReflection->Controls->Add(this->lblReflectionLine);
			this->groupReflection->Controls->Add(this->txtReflectionLineX);
			this->groupReflection->Controls->Add(this->lblReflectionLineX);
			this->groupReflection->Controls->Add(this->btnShowReflection);
			this->groupReflection->Location = System::Drawing::Point(12, 659);
			this->groupReflection->Name = L"groupReflection";
			this->groupReflection->Size = System::Drawing::Size(405, 123);
			this->groupReflection->TabIndex = 6;
			this->groupReflection->TabStop = false;
			this->groupReflection->Text = L"Reflejo";
			// 
			// lblReflectionLine
			// 
			this->lblReflectionLine->AutoSize = true;
			this->lblReflectionLine->Location = System::Drawing::Point(16, 38);
			this->lblReflectionLine->Name = L"lblReflectionLine";
			this->lblReflectionLine->Size = System::Drawing::Size(133, 17);
			this->lblReflectionLine->TabIndex = 4;
			this->lblReflectionLine->Text = L"Recta de referencia";
			// 
			// txtReflectionLineX
			// 
			this->txtReflectionLineX->Location = System::Drawing::Point(46, 58);
			this->txtReflectionLineX->Name = L"txtReflectionLineX";
			this->txtReflectionLineX->Size = System::Drawing::Size(100, 22);
			this->txtReflectionLineX->TabIndex = 3;
			// 
			// lblReflectionLineX
			// 
			this->lblReflectionLineX->AutoSize = true;
			this->lblReflectionLineX->Location = System::Drawing::Point(16, 61);
			this->lblReflectionLineX->Name = L"lblReflectionLineX";
			this->lblReflectionLineX->Size = System::Drawing::Size(29, 17);
			this->lblReflectionLineX->TabIndex = 2;
			this->lblReflectionLineX->Text = L"X =";
			// 
			// btnShowReflection
			// 
			this->btnShowReflection->Location = System::Drawing::Point(302, 78);
			this->btnShowReflection->Name = L"btnShowReflection";
			this->btnShowReflection->Size = System::Drawing::Size(97, 39);
			this->btnShowReflection->TabIndex = 1;
			this->btnShowReflection->Text = L"Mostrar";
			this->btnShowReflection->UseVisualStyleBackColor = true;
			this->btnShowReflection->Click += gcnew System::EventHandler(this, &MainForm::btnShowReflection_Click);
			// 
			// groupHomothecy
			// 
			this->groupHomothecy->Controls->Add(this->txtHomothecyCenterY);
			this->groupHomothecy->Controls->Add(this->txtHomothecyCenterX);
			this->groupHomothecy->Controls->Add(this->lblHomothecyCenterY);
			this->groupHomothecy->Controls->Add(this->lblHomothecyCenterX);
			this->groupHomothecy->Controls->Add(this->lblHomothecyCenter);
			this->groupHomothecy->Controls->Add(this->lblHomothecyFactor);
			this->groupHomothecy->Controls->Add(this->txtHomothecyFactor);
			this->groupHomothecy->Controls->Add(this->radioHomothecyDecrease);
			this->groupHomothecy->Controls->Add(this->radioHomothecyIncrease);
			this->groupHomothecy->Controls->Add(this->btnShowHomothecy);
			this->groupHomothecy->Location = System::Drawing::Point(12, 511);
			this->groupHomothecy->Name = L"groupHomothecy";
			this->groupHomothecy->Size = System::Drawing::Size(405, 123);
			this->groupHomothecy->TabIndex = 5;
			this->groupHomothecy->TabStop = false;
			this->groupHomothecy->Text = L"Escala - Homotecia";
			// 
			// txtHomothecyCenterY
			// 
			this->txtHomothecyCenterY->Location = System::Drawing::Point(244, 97);
			this->txtHomothecyCenterY->Name = L"txtHomothecyCenterY";
			this->txtHomothecyCenterY->Size = System::Drawing::Size(52, 22);
			this->txtHomothecyCenterY->TabIndex = 13;
			// 
			// txtHomothecyCenterX
			// 
			this->txtHomothecyCenterX->Location = System::Drawing::Point(244, 75);
			this->txtHomothecyCenterX->Name = L"txtHomothecyCenterX";
			this->txtHomothecyCenterX->Size = System::Drawing::Size(52, 22);
			this->txtHomothecyCenterX->TabIndex = 12;
			// 
			// lblHomothecyCenterY
			// 
			this->lblHomothecyCenterY->AutoSize = true;
			this->lblHomothecyCenterY->Location = System::Drawing::Point(221, 100);
			this->lblHomothecyCenterY->Name = L"lblHomothecyCenterY";
			this->lblHomothecyCenterY->Size = System::Drawing::Size(21, 17);
			this->lblHomothecyCenterY->TabIndex = 11;
			this->lblHomothecyCenterY->Text = L"Y:";
			// 
			// lblHomothecyCenterX
			// 
			this->lblHomothecyCenterX->AutoSize = true;
			this->lblHomothecyCenterX->Location = System::Drawing::Point(221, 78);
			this->lblHomothecyCenterX->Name = L"lblHomothecyCenterX";
			this->lblHomothecyCenterX->Size = System::Drawing::Size(21, 17);
			this->lblHomothecyCenterX->TabIndex = 10;
			this->lblHomothecyCenterX->Text = L"X:";
			// 
			// lblHomothecyCenter
			// 
			this->lblHomothecyCenter->AutoSize = true;
			this->lblHomothecyCenter->Location = System::Drawing::Point(163, 78);
			this->lblHomothecyCenter->Name = L"lblHomothecyCenter";
			this->lblHomothecyCenter->Size = System::Drawing::Size(54, 17);
			this->lblHomothecyCenter->TabIndex = 9;
			this->lblHomothecyCenter->Text = L"Centro:";
			// 
			// lblHomothecyFactor
			// 
			this->lblHomothecyFactor->AutoSize = true;
			this->lblHomothecyFactor->Location = System::Drawing::Point(163, 28);
			this->lblHomothecyFactor->Name = L"lblHomothecyFactor";
			this->lblHomothecyFactor->Size = System::Drawing::Size(133, 17);
			this->lblHomothecyFactor->TabIndex = 8;
			this->lblHomothecyFactor->Text = L"Factor de escalado:";
			// 
			// txtHomothecyFactor
			// 
			this->txtHomothecyFactor->Location = System::Drawing::Point(175, 48);
			this->txtHomothecyFactor->Name = L"txtHomothecyFactor";
			this->txtHomothecyFactor->Size = System::Drawing::Size(121, 22);
			this->txtHomothecyFactor->TabIndex = 7;
			// 
			// radioHomothecyDecrease
			// 
			this->radioHomothecyDecrease->AutoSize = true;
			this->radioHomothecyDecrease->Location = System::Drawing::Point(19, 66);
			this->radioHomothecyDecrease->Name = L"radioHomothecyDecrease";
			this->radioHomothecyDecrease->Size = System::Drawing::Size(78, 21);
			this->radioHomothecyDecrease->TabIndex = 6;
			this->radioHomothecyDecrease->TabStop = true;
			this->radioHomothecyDecrease->Text = L"Reducir";
			this->radioHomothecyDecrease->UseVisualStyleBackColor = true;
			// 
			// radioHomothecyIncrease
			// 
			this->radioHomothecyIncrease->AutoSize = true;
			this->radioHomothecyIncrease->Location = System::Drawing::Point(19, 39);
			this->radioHomothecyIncrease->Name = L"radioHomothecyIncrease";
			this->radioHomothecyIncrease->Size = System::Drawing::Size(75, 21);
			this->radioHomothecyIncrease->TabIndex = 5;
			this->radioHomothecyIncrease->TabStop = true;
			this->radioHomothecyIncrease->Text = L"Alargar";
			this->radioHomothecyIncrease->UseVisualStyleBackColor = true;
			// 
			// btnShowHomothecy
			// 
			this->btnShowHomothecy->Location = System::Drawing::Point(302, 78);
			this->btnShowHomothecy->Name = L"btnShowHomothecy";
			this->btnShowHomothecy->Size = System::Drawing::Size(97, 39);
			this->btnShowHomothecy->TabIndex = 1;
			this->btnShowHomothecy->Text = L"Mostrar";
			this->btnShowHomothecy->UseVisualStyleBackColor = true;
			this->btnShowHomothecy->Click += gcnew System::EventHandler(this, &MainForm::btnShowHomothecy_Click);
			// 
			// groupRotation
			// 
			this->groupRotation->Controls->Add(this->lblRotationAngle);
			this->groupRotation->Controls->Add(this->txtRotationAngle);
			this->groupRotation->Controls->Add(this->radioNonClockwise);
			this->groupRotation->Controls->Add(this->radioClockwise);
			this->groupRotation->Controls->Add(this->btnShowRotation);
			this->groupRotation->Location = System::Drawing::Point(12, 369);
			this->groupRotation->Name = L"groupRotation";
			this->groupRotation->Size = System::Drawing::Size(405, 123);
			this->groupRotation->TabIndex = 4;
			this->groupRotation->TabStop = false;
			this->groupRotation->Text = L"Rotación";
			// 
			// lblRotationAngle
			// 
			this->lblRotationAngle->AutoSize = true;
			this->lblRotationAngle->Location = System::Drawing::Point(181, 38);
			this->lblRotationAngle->Name = L"lblRotationAngle";
			this->lblRotationAngle->Size = System::Drawing::Size(56, 17);
			this->lblRotationAngle->TabIndex = 4;
			this->lblRotationAngle->Text = L"Ángulo:";
			// 
			// txtRotationAngle
			// 
			this->txtRotationAngle->Location = System::Drawing::Point(184, 64);
			this->txtRotationAngle->Name = L"txtRotationAngle";
			this->txtRotationAngle->Size = System::Drawing::Size(112, 22);
			this->txtRotationAngle->TabIndex = 3;
			// 
			// radioNonClockwise
			// 
			this->radioNonClockwise->AutoSize = true;
			this->radioNonClockwise->Location = System::Drawing::Point(19, 65);
			this->radioNonClockwise->Name = L"radioNonClockwise";
			this->radioNonClockwise->Size = System::Drawing::Size(98, 21);
			this->radioNonClockwise->TabIndex = 2;
			this->radioNonClockwise->TabStop = true;
			this->radioNonClockwise->Text = L"Antihorario";
			this->radioNonClockwise->UseVisualStyleBackColor = true;
			// 
			// radioClockwise
			// 
			this->radioClockwise->AutoSize = true;
			this->radioClockwise->Location = System::Drawing::Point(19, 38);
			this->radioClockwise->Name = L"radioClockwise";
			this->radioClockwise->Size = System::Drawing::Size(76, 21);
			this->radioClockwise->TabIndex = 1;
			this->radioClockwise->TabStop = true;
			this->radioClockwise->Text = L"Horario";
			this->radioClockwise->UseVisualStyleBackColor = true;
			// 
			// btnShowRotation
			// 
			this->btnShowRotation->Location = System::Drawing::Point(302, 78);
			this->btnShowRotation->Name = L"btnShowRotation";
			this->btnShowRotation->Size = System::Drawing::Size(97, 39);
			this->btnShowRotation->TabIndex = 0;
			this->btnShowRotation->Text = L"Mostrar";
			this->btnShowRotation->UseVisualStyleBackColor = true;
			// 
			// btnClean
			// 
			this->btnClean->Location = System::Drawing::Point(153, 873);
			this->btnClean->Name = L"btnClean";
			this->btnClean->Size = System::Drawing::Size(101, 45);
			this->btnClean->TabIndex = 3;
			this->btnClean->Text = L"Limpiar";
			this->btnClean->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1794, 930);
			this->Controls->Add(this->groupSettings);
			this->Controls->Add(this->pictureBoxGraphics);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trabajo Parcial - Grupo 1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridVertices))->EndInit();
			this->groupVertices->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraphics))->EndInit();
			this->groupSettings->ResumeLayout(false);
			this->groupReflection->ResumeLayout(false);
			this->groupReflection->PerformLayout();
			this->groupHomothecy->ResumeLayout(false);
			this->groupHomothecy->PerformLayout();
			this->groupRotation->ResumeLayout(false);
			this->groupRotation->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::White);

		if (dib==1)
			figura->dibujar(buffer->Graphics);
		if (dib == 2)
			reflexion->dibujar(buffer->Graphics);
		buffer->Render(g);
	}

	private:
		Figure2D* generateFigureFromVertixTable()
		{
			if (dataGridVertices->Rows->Count <= 2)
			{
				MessageBox::Show("Ingrese al menos tres vértices.");
				return new Figure2D();
			}

			Point2D tempPoint;
			vector<Point2D> vertices;

			for (int i = 0; i < dataGridVertices->Rows->Count - 1; ++i)
			{
				try
				{
					tempPoint.x = Convert::ToInt32(dataGridVertices->Rows[i]->Cells[0]->Value->ToString());
					tempPoint.y = Convert::ToInt32(dataGridVertices->Rows[i]->Cells[1]->Value->ToString());
				}
				catch (...)
				{
					MessageBox::Show("Dato inválido en la columna " + (i + 1));
					return new Figure2D();
				}

				vertices.push_back(tempPoint);
			}

			return new Figure2D(vertices);
		}
	private: System::Void btnDraw_Click(System::Object^ sender, System::EventArgs^ e)
	{
		mainFigure = generateFigureFromVertixTable();

		if (mainFigure->getPointCount() == 0)
			return;
		
		mainDrawer->drawEntity(*mainFigure);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mainDrawer = gcnew Drawer(pictureBoxGraphics);
	mainDrawer->drawGrid(Color::Red);
}
private: System::Void btnShowHomothecy_Click(System::Object^ sender, System::EventArgs^ e) {


	//if (radioHomothecyIncrease->Checked == true) {
	//	radioHomothecyDecrease->Checked = false;
	//	radioHomothecyDecrease->Enabled = false;

	xC = Convert::ToDouble(txtHomothecyCenterX->Text);
	yC = Convert::ToDouble(txtHomothecyCenterY->Text);
	fact = Convert::ToDouble(txtHomothecyFactor->Text);
	figura = new Figura(xC, yC, fact);
	dib = 1;

	/*}*/
	
	//if(radioHomothecyDecrease->Checked==true){
	//	radioHomothecyIncrease->Checked = false;
	//	radioHomothecyIncrease->Enabled = false;
	//	///////////////////////////////////////


	//	dib = 2;
	//}


}
private: System::Void btnShowReflection_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (txtReflectionLineX->Text != "") {

		reflexion = new Reflexion(Convert::ToInt32(txtReflectionLineX->Text));
		dib = 2;
	}
}
};
}
