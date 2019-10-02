#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Vehiculo
{
private:
	string marca;
	string placa;
	int anio;

public:
	Vehiculo(string, string, int);
	Vehiculo();

	void setMarca(string);
	void setPlaca(string);
	void setAnio(int);

	string getMarca();
	string getPlaca();
	int getAnio();

	virtual string toString();
	virtual~Vehiculo();
};

#endif // VEHICULO_H