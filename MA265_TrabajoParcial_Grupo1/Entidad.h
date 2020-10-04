#pragma once
#include <iostream>
#include <vector>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using std::vector;
#ifndef __ENTIDAD_H__
#define __ENTIDAD_H__

class Entidad
{
public:
	Entidad();
	~Entidad();

	int getX();
	int getY();
	int getDX();
	int getDY();
	int getAncho();
	int getAlto();
	int getIndiceX();
	int getIndiceY();
	int getCantidad();
	Rectangle Area();
	void setCantidad(int v);
	void setX(int v);
	void setY(int v);
	void setDX(int v);
	void setDY(int v);
	void setAncho(int v);
	void setAlto(int v);
	void setIndiceX(int v);
	void setIndiceY(int v);
	virtual void dibujar(Graphics^ g, Bitmap^ img);

protected:
	int x, y, dx, dy, ancho, alto, indicex, indicey, cantidad;

};

#endif // !__ENTIDAD_H__