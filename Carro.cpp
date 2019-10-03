#include "Carro.h"

Carro::Carro(string ma, string pl, int an, float& cos, int& di, float& pre) :Vehiculo(ma, pl, an) {
	costo = cos;
	dia = di;
	precio = pre;
}
Carro::Carro() : Vehiculo("", "", 0) {
	costo = 0;
	dia = 0;
	precio = 0;
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

float Carro::CalcularDia(float& cos, int& di, float& pre) {
	float precio;
	precio = costo * dia;
	return precio;
}

void Carro::setCalcularDia(float& pre) {
	precio = pre;
}
float Carro::getCalcularDia() {
	return precio;
}

string Carro::toString() {
	stringstream s;
	s << Vehiculo::toString() << endl;
	s << "El precio del carro es de:---" << getCalcularDia() << endl;
	return s.str();

}