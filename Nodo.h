#ifndef NODO_H
#define NODO_H
#include "Vehiculo.h"

class nodo
{
public:
	nodo(Vehiculo*, nodo*);
	nodo();

	Vehiculo* getObj();
	nodo* getSig();

	void setSig(nodo*);
	void setObj(Vehiculo*);
	~nodo();

private:
	Vehiculo* obj;
	nodo* sig;
};


#endif // NODO_H
