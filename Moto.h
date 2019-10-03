#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"

class Moto :public Vehiculo
{
private:
	float costo;
	int hora;
	float precio;

public:
	Moto(string, string, int, float&, int&);
	Moto();
	void setCosto(float);
	float getCosto();

	void setHora(int);
	int getHora();

	float CalcularHora(float&, int&);
	void setCalcularHora(float);
	float getCalcularHora();
};

#endif // MOTO_H
