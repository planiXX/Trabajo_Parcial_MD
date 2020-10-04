#pragma once
#include "Entidad.h"
using namespace std;
#ifndef __FIGURA_H__
#define __FIGURA_H__

class Figura :Entidad
{
public:
	Figura(float xc, float yc, float fac) {


		if (fac >= 1) {
			final_incre = false; razon = fac;
			centro_x = xc + 320; centro_y = yc + 200;
			ax = xc + 100 + 320; ay = yc - 50 + 200;
			bx = xc + 100 + 320; by = yc + 100 + 200;

			cx = xc + 150 + 320; cy = yc - 20 + 200;
			dx = xc + 150 + 320; dy = yc + 200;

			aux_ax = ax; aux_ay = ay;
			aux_bx = bx; aux_by = by;
			aux_cx = cx; aux_cy = cy;
			aux_dx = dx; aux_dy = dy;

			cout << "         YC=" << yc << endl;
			cout << "          fac=" << fac << endl;
			diferencia_final = fac * ((yc + 100.0 + 200.0) - (yc - 50.0 + 200.0));
			if (diferencia_final < 0)diferencia_final *= -1.0;

		}
		else if (fac < 1) {
			final_decre = false; razon = fac;
			centro_x = xc + 320; centro_y = yc + 200;
			ax = xc + 100 + 320; ay = yc - 50 + 200;
			bx = xc + 100 + 320; by = yc + 100 + 200;

			cx = xc + 150 + 320; cy = yc - 20 + 200;
			dx = xc + 150 + 320; dy = yc + 200;

			aux_ax = ax; aux_ay = ay;
			aux_bx = bx; aux_by = by;
			aux_cx = cx; aux_cy = cy;
			aux_dx = dx; aux_dy = dy;

			cout << "         YC=" << yc << endl;
			cout << "          fac=" << fac << endl;

			diferencia_final = fac * ((yc + 100.0 + 200.0) - (yc - 50.0 + 200.0));
			if (diferencia_final < 0)diferencia_final *= -1.0;
		}
		
	}
	~Figura();

	void dibujar(Graphics^ g);
	void dibujar2(Graphics^ g);

protected:


	bool final_incre;
	bool final_decre;
	float razon;
	double diferencia;
	double diferencia_final;
	float centro_x, centro_y;
	float ax, ay, bx, by, cx, cy, dx, dy;

	float aux_ax, aux_ay, aux_bx, aux_by, aux_cx, aux_cy, aux_dx, aux_dy;
	float aux_ax2, aux_ay2, aux_bx2, aux_by2, aux_cx2, aux_cy2, aux_dx2, aux_dy2;


};

#endif // !__FIGURA_H__