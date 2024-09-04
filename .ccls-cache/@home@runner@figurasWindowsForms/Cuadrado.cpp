#include "Cuadrado.h"

Cuadrado::Cuadrado() {
	this->y = 20;
}

void Cuadrado::mostrar(Graphics^ panel) {
	//panel->DrawRectangle(Pens::DarkRed, x, y, ancho, alto);
	panel->FillRectangle(asignarColorRelleno(), x, y, ancho, alto);
	panel->DrawString(puntaje.ToString(), gcnew Font("Arial", 10), Brushes::Brown, x + (ancho / 2 - 5), y + (alto / 2 - 5));
}