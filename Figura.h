#pragma once


using namespace System;
using namespace System::Drawing;

class Figura {
protected:
	int x, y;
	int ancho, alto;
	int dx;
	int color;
	int puntaje;

public:
	Figura();
	int obtenerPuntaje();
	void asignarPuntaje();
	void ubicarAlInicio();
	Rectangle obtenerArea();
	Brush^ asignarColorRelleno();
	void mover();	
	virtual void mostrar(Graphics^ panel) = 0;

};
