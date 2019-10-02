#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H

#include"nodo.h"

class ListaVehiculos
{
public:
	ListaVehiculos();
	void agregar(Vehiculo*);
	bool eliminarInicio();
	string toString()const;
	void agregarFinal(Vehiculo*);
	~ListaVehiculos();

private:
	nodo* Ppio;
	nodo* actual;
};

#endif // LISTAVEHICULOS_H
