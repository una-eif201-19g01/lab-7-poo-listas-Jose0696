#include "Vehiculo.h"

Vehiculo::Vehiculo(string ma, string pl, int an, string mod) {
	marca = ma;
	placa = pl;
	anio = an;
	modelo = mod;
}
Vehiculo::Vehiculo() {
	marca = "";
	placa = "";
	anio = 0;
	modelo = "";
}

void Vehiculo::setMarca(string ma) {
	marca = ma;
}
void Vehiculo::setPlaca(string pl) {
	placa = pl;
}
void Vehiculo::setAnio(int an) {
	anio = an;
}
void Vehiculo::setModelo(string mod) {
	modelo = mod;
}

string Vehiculo::getMarca() {
	return marca;
}
string Vehiculo::getPlaca() {
	return placa;
}
int Vehiculo::getAnio() {
	return anio;
}
string Vehiculo::getModelo() {
	return modelo;
}

string Vehiculo::toString() {
	stringstream s;
	s << "Marca del vehiculo...: " << marca << endl;
	s << "Numero de placa......: " << placa << endl;
	s << "Anio del vehiculo....: " << anio << endl;
	s << "Modelo del vehiculo..: " << modelo << endl;
	return s.str();
}
Vehiculo::~Vehiculo() {}