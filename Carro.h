#ifndef CARRO_H
#define CARRO_H

#include "Vehiculo.h"

class Carro :public Vehiculo {
private:
	float costo;
	int dia;
	float precio;

public:
	Carro(string, string, int, float&, int&, float&);
	Carro();

	void setCosto(float);
	float getCosto();

	void setDia(int);
	int getDia();

	float CalcularDia(float&, int&, float&);
	void setCalcularDia(float&);
	float getCalcularDia();

	string toString();
};

#endif // CARRO_H
