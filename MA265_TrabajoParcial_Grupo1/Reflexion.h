#pragma once
class Reflexion: Entidad

{
private:

	int punto_xi, punto_xf, punto_yi, punto_yf;

	


public:

	Reflexion(int recta);
	~Reflexion();

	void dibujar(Graphics^g);
	

};

