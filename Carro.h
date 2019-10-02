#ifndef CARRO_H
#define CARRO_H

#include "Vehiculo.h"

class Carro :public Vehiculo {
private:
	float costo;
	int dia;

public:
	Carro(string, string, int, float, int);
	Carro();

	void setCosto(float);
	float getCosto();

	void setDia(int);
	int getDia();

	CalcularDia();
};

#endif // CARRO_H
