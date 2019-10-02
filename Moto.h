#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"

class Moto :public Vehiculo
{
private:
	float costo;
	int hora;
public:
	Moto(string, string, int, float, int);
	Moto();
	void setCosto(float);
	float getCosto();

	void setHora(int);
	int getHora();

	CalcularHora();
};

#endif // MOTO_H
