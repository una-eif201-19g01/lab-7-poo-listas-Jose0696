#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H

#include"nodo.h"

class ListaVehiculos
{
public:
public:
	ListaVehiculos();
	bool eliminarInicio();
	string toString();
	void agregarFinal(Vehiculo& vehiculo);
	~ListaVehiculos();

private:
	nodo* Ppio;
	nodo* actual;
};

#endif // LISTAVEHICULOS_H
