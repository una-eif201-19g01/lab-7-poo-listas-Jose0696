#include "Carro.h"

Carro::Carro(string ma, string pl, int an, float cos, int di) :Vehiculo(ma, pl, an) {
	costo = cos;
	dia = di;
}
Carro::Carro() : Vehiculo("", "", 0) {
	costo = 0;
	dia = 0;
}

void Carro::setCosto(float cos) {
	costo = cos;
}
float Carro::getCosto() {
	return costo;
}

void Carro::setDia(int di) {
	dia = di;
}
int Carro::getDia() {
	return dia;
}

Carro::CalcularDia() {
	return costo * dia;
}