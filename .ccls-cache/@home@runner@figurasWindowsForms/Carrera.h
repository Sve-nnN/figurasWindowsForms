#pragma once
#include "Circulo.h"
#include "Cuadrado.h"
#include "Rombo.h"

#include <vector>

using namespace std;

class Carrera
{
private:
	Figura* cuadrado;
	Figura* circulo;
	Figura* rombo;
	vector<Figura*> figuras;

	int xMeta;
	int numeroCarrera;
public:
	Carrera();
	~Carrera();
	
	void reiniciarCarrera();
	int obtenerNumeroCarrera();

	void dibujarFiguras(Graphics^ panel);
	void moverFiguras();

	
};

