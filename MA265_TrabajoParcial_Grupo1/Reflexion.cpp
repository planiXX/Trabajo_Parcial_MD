#include "Entidad.h"
#include "Reflexion.h"



Reflexion::Reflexion(int recta){

	punto_xi = 322+recta;
	punto_xf = 322+recta;
	punto_yi = 300;
	punto_yf = 850;


}
Reflexion::~Reflexion(){}

void Reflexion::dibujar(Graphics^ g) {



	g->DrawLine(gcnew Pen(Color::Black,3),punto_xi, punto_yi, punto_xf, punto_yf);

	g->DrawLine(gcnew Pen(Color::Black, 3), 0, 700, 1400, 700);




	///LADO DERECHO
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi+100+320-300, punto_yi-50+200, punto_xi+100+320-300, punto_yi+100+200);
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi+150+320-300, punto_yi-20+200, punto_xi+150+320-300, punto_yi+200);
														   
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi+100+320-300, punto_yi-50+200, punto_xi+150+320-300, punto_yi-20+200);
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi+100+320-300, punto_yi+100+200, punto_xi+150+320-300, punto_yi+200);



	
	//LADO IZQUIERDO
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi-100-320+300, punto_yi-50+200, punto_xi-100-320+300, punto_yi+100+200);
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi-150-320+300, punto_yi-20+200, punto_xi-150-320+300, punto_yi+200);
																								  
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi-100-320+300, punto_yi-50+200, punto_xi-150-320+300, punto_yi-20+200);
	g->DrawLine(gcnew Pen(Color::Red, 5), punto_xi-100-320+300, punto_yi+100+200,punto_xi-150-320+300, punto_yi+200);



}
