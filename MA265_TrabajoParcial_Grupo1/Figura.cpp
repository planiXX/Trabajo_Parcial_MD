#include "Figura.h"


Figura::~Figura() {}

void Figura::dibujar2(Graphics^ g) {


}

void Figura::dibujar(Graphics^ g) {


	diferencia = by - ay;
	
	

	g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax, aux_ay, aux_bx, aux_by);
	g->DrawLine(gcnew Pen(Color::Red, 5), aux_cx, aux_cy, aux_dx, aux_dy);

	g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax, aux_ay, aux_cx, aux_cy);
	g->DrawLine(gcnew Pen(Color::Red, 5), aux_bx, aux_by, aux_dx, aux_dy);

	g->FillEllipse(Brushes::Red, centro_x, centro_y, 5.0, 5.0);

	g->DrawLine(gcnew Pen(Color::Green, 3), centro_x, centro_y, aux_ax, aux_ay);
	g->DrawLine(gcnew Pen(Color::Green, 3), centro_x, centro_y, aux_bx, aux_by);

	g->DrawLine(gcnew Pen(Color::Green, 3), centro_x, centro_y, aux_cx, aux_cy);
	g->DrawLine(gcnew Pen(Color::Green, 3), centro_x, centro_y, aux_dx, aux_dy);

	std::cout << diferencia <<"                     "<<diferencia_final<<  endl;

	if (razon >= 1) {
		if (diferencia < diferencia_final)
		{
			ax += 2;	ay--;

			bx += 2;	by += 2;

			cx += 3;

			dx += 3;

			if ((int)cx % 2 == 0) {

				cy--;
			}

			g->DrawLine(gcnew Pen(Color::Red, 5), ax, ay, bx, by);
			g->DrawLine(gcnew Pen(Color::Red, 5), cx, cy, dx, dy);
		}
		g->DrawLine(gcnew Pen(Color::Red, 5), ax, ay, cx, cy);
		g->DrawLine(gcnew Pen(Color::Red, 5), bx, by, dx, dy);


		if (diferencia >= diferencia_final) {
			aux_ax2 = ax; aux_ay2 = ay;
			aux_bx2 = bx; aux_by2 = by;
			aux_cx2 = cx; aux_cy2 = cy;
			aux_dx2 = dx; aux_dy2 = dy;
			final_incre = true;

			ax = centro_x + 100; ay = centro_y - 50;
			bx = centro_x + 100; by = centro_y + 100;

			cx = centro_x + 150; cy = centro_y - 20;
			dx = centro_x + 150; dy = centro_y;
		}

		if (final_incre == true) {

			g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax2, aux_ay2, aux_bx2, aux_by2);
			g->DrawLine(gcnew Pen(Color::Red, 5), aux_cx2, aux_cy2, aux_dx2, aux_dy2);

			g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax2, aux_ay2, aux_cx2, aux_cy2);
			g->DrawLine(gcnew Pen(Color::Red, 5), aux_bx2, aux_by2, aux_dx2, aux_dy2);

			g->DrawLine(gcnew Pen(Color::Green, 3), aux_ax, aux_ay, aux_ax2, aux_ay2);
			g->DrawLine(gcnew Pen(Color::Green, 3), aux_bx, aux_by, aux_bx2, aux_by2);

			g->DrawLine(gcnew Pen(Color::Green, 3), aux_cx, aux_cy, aux_cx2, aux_cy2);
			g->DrawLine(gcnew Pen(Color::Green, 3), aux_dx, aux_dy, aux_dx2, aux_dy2);

		}
	}

	if (razon < 1) {
		if (diferencia >= diferencia_final)
		{
			ax -= 2;	ay++;

			bx -= 2;	by -= 2;

			cx -= 3;

			dx -= 3;

			if ((int)cx % 2 == 0) {

				cy++;
			}

			g->DrawLine(gcnew Pen(Color::Red, 5), ax, ay, bx, by);
			g->DrawLine(gcnew Pen(Color::Red, 5), cx, cy, dx, dy);
		}
		g->DrawLine(gcnew Pen(Color::Red, 5), ax, ay, cx, cy);
		g->DrawLine(gcnew Pen(Color::Red, 5), bx, by, dx, dy);


		if (diferencia < diferencia_final) {
			aux_ax2 = ax; aux_ay2 = ay;
			aux_bx2 = bx; aux_by2 = by;
			aux_cx2 = cx; aux_cy2 = cy;
			aux_dx2 = dx; aux_dy2 = dy;
			final_decre = true;

			ax = centro_x + 100; ay = centro_y - 50;
			bx = centro_x + 100; by = centro_y + 100;

			cx = centro_x + 150; cy = centro_y - 20;
			dx = centro_x + 150; dy = centro_y;
		}

		if (final_decre == true) {

			g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax2, aux_ay2, aux_bx2, aux_by2);
			g->DrawLine(gcnew Pen(Color::Red, 5), aux_cx2, aux_cy2, aux_dx2, aux_dy2);

			g->DrawLine(gcnew Pen(Color::Red, 5), aux_ax2, aux_ay2, aux_cx2, aux_cy2);
			g->DrawLine(gcnew Pen(Color::Red, 5), aux_bx2, aux_by2, aux_dx2, aux_dy2);

			g->DrawLine(gcnew Pen(Color::Green, 3), aux_ax, aux_ay, aux_ax2, aux_ay2);
			g->DrawLine(gcnew Pen(Color::Green, 3), aux_bx, aux_by, aux_bx2, aux_by2);

			g->DrawLine(gcnew Pen(Color::Green, 3), aux_cx, aux_cy, aux_cx2, aux_cy2);
			g->DrawLine(gcnew Pen(Color::Green, 3), aux_dx, aux_dy, aux_dx2, aux_dy2);

		}



	}
	

}
