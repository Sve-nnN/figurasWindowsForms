#include "Figura.h"

Figura::Figura() {
	x = 20;
	alto = ancho = 40;
	puntaje = 0;
	Random r;
	dx = r.Next(5, 16);
	color = r.Next(0, 7);
	System::Threading::Thread::Sleep(10);
}

int Figura::obtenerPuntaje() { return puntaje; }

void Figura::asignarPuntaje(){
	puntaje++;
}

void Figura::ubicarAlInicio() {
	x = 20;
	Random valor;
	dx = valor.Next(5, 16);
	System::Threading::Thread::Sleep(10);
}

Rectangle Figura::obtenerArea() {  return Rectangle(x, y, ancho, alto); }

void Figura::mover(){
	x += dx;
}


Brush^ Figura::asignarColorRelleno() {
	switch (color)
	{
	case 1: return Brushes::Red;		break;
	case 2: return Brushes::Orange;		break;
	case 3: return Brushes::Yellow;		break;
	case 4: return Brushes::Blue;		break;
	case 5: return Brushes::Green;		break;
	case 6: return Brushes::Violet;		break;
	}
}