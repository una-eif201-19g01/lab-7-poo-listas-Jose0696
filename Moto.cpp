#include "Moto.h"

Moto::Moto(string ma, string pl, int an, float& cos, int& ho) :Vehiculo(ma, pl, an) {
	costo = cos;
	hora = ho;
}
Moto::Moto() : Vehiculo("", "", 0) {
	costo = 0;
	hora = 0;
}

void Moto::setCosto(float cos) {
	costo = cos;
}
float Moto::getCosto() {
	return costo;
}

void Moto::setHora(int ho) {
	hora = ho;
}
int Moto::getHora() {
	return hora;
}

float Moto::CalcularHora(float& cos, int& ho) {
	return costo * hora;
}

void Moto::setCalcularHora(float precio) {
	Moto::precio = precio;
}
float Moto::getCalcularHora() {
	return precio;
}