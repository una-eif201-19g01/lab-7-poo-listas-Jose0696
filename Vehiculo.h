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
	string modelo;

public:
	Vehiculo(string, string, int, string);
	Vehiculo();

	void setMarca(string);
	void setPlaca(string);
	void setAnio(int);
	void setModelo(string);

	string getMarca();
	string getPlaca();
	int getAnio();
	string getModelo();

	virtual string toString();
	~Vehiculo();
};

#endif // VEHICULO_H