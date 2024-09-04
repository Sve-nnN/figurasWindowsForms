#include "Rombo.h"

Rombo::Rombo() {
	this->y = 220;
}

void Rombo::mostrar(Graphics^ panel) {
	array<Point>^ puntos = gcnew array<Point>{
		Point(x + (ancho / 2), y),
		Point(x + ancho, y + (alto / 2)),
		Point(x + (ancho / 2), y + alto),
		Point(x, y + (alto / 2))};
	//panel->DrawPolygon(Pens::Red, puntos);
	panel->FillPolygon(asignarColorRelleno(), puntos);
	panel->DrawString(puntaje.ToString(), gcnew Font("Arial", 10), Brushes::Brown, x + 10, y + 10);
}