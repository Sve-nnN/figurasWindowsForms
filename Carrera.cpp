#include "Carrera.h"

Carrera::Carrera() {
    figuras.push_back(new Cuadrado());
    figuras.push_back(new Circulo());
    figuras.push_back(new Rombo());
    this->xMeta = 600;
    this->numeroCarrera = 1;
}

Carrera::~Carrera() {
    for (auto figura : figuras) {
        delete figura;
    }
}

void Carrera::reiniciarCarrera() {
    this->numeroCarrera++;
    for (auto figura : figuras) {
        figura->ubicarAlInicio();
    }
}

int Carrera::obtenerNumeroCarrera() {
    return this->numeroCarrera;
}

void Carrera::dibujarFiguras(Graphics^ panel) {
    panel->Clear(Color::White);
    panel->DrawString("Numero Carrera: " + this->numeroCarrera.ToString(), gcnew Font("Arial", 10), Brushes::Black, 0, 0);
    Rectangle meta = Rectangle(xMeta, 0, 20, panel->VisibleClipBounds.Bottom);
    panel->FillRectangle(Brushes::Black, meta);

    for (Figura* figura : figuras) {
        figura->mostrar(panel);
        if (meta.IntersectsWith(figura->obtenerArea())) {
            figura->asignarPuntaje();
            reiniciarCarrera();
        }
    }
}

void Carrera::moverFiguras() {
    for (Figura* figura : figuras) {
        figura->mover();
    }
}
