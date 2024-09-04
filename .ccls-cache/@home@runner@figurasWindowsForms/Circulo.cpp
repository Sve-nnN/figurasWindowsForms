#include "Circulo.h"

Circulo::Circulo(): Figura() {
	this->y = 120;
}

void Circulo::mostrar(Graphics^ panel) {
	
	//panel->DrawEllipse(Pens::Cyan, x, y, ancho, alto);
	panel->FillEllipse(asignarColorRelleno(), x, y, ancho, alto);
	panel->DrawString(puntaje.ToString(), gcnew Font("Arial", 10), Brushes::Black, x + 10, y + 10);
}