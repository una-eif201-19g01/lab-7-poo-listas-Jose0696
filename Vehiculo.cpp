#include "Vehiculo.h"

Vehiculo::Vehiculo(string ma, string pl, int an) {
	marca = ma;
	placa = pl;
	anio = an;
}
Vehiculo::Vehiculo() {
	marca = "";
	placa = "";
	anio = 0;
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

string Vehiculo::getMarca() {
	return marca;
}
string Vehiculo::getPlaca() {
	return placa;
}
int Vehiculo::getAnio() {
	return anio;
}


string Vehiculo::toString() {
	stringstream s;
	s << "\nMarca del vehiculo...: " << marca << endl;
	s << "Numero de placa......: " << placa << endl;
	s << "Anio del vehiculo....: " << anio << endl;
	return s.str();
}
Vehiculo::~Vehiculo() {}