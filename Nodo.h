#ifndef NODO_H
#define NODO_H
#include "Vehiculo.h"

class nodo
{
public:
public:
	nodo(Vehiculo& vehiculo, nodo* sig);
	nodo();
	Vehiculo& getVehiculo();
	nodo* getSig();
	void setSig(nodo* sig);
	void setVehiculo(Vehiculo& vehiculo);
	string toString();
	~nodo();

private:
	Vehiculo vehiculo;
	nodo* sig;
};


#endif // NODO_H
