#include "Entidad.h"



Entidad::Entidad() {

}

Entidad::~Entidad() {

}

int Entidad::getX() { return x; }
int Entidad::getY() { return y; }
int Entidad::getDX() { return dx; }
int Entidad::getDY() { return dy; }
int Entidad::getAncho() { return ancho; }
int Entidad::getAlto() { return alto; }
int Entidad::getIndiceX() { return indicex; }
int Entidad::getIndiceY() { return indicey; }
int Entidad::getCantidad() { return cantidad; }
Rectangle Entidad::Area() { return Rectangle(x, y, ancho, alto); }

void Entidad::setCantidad(int v) { cantidad = v; }
void Entidad::setX(int v) { x = v; }
void Entidad::setY(int v) { y = v; }
void Entidad::setDX(int v) { dx = v; }
void Entidad::setDY(int v) { dy = v; }
void Entidad::setAncho(int v) { ancho = v; }
void Entidad::setAlto(int v) { alto = v; }
void Entidad::setIndiceX(int v) { indicex = v; }
void Entidad::setIndiceY(int v) { indicey = v; }
void Entidad::dibujar(Graphics^ g, Bitmap^ img) {}