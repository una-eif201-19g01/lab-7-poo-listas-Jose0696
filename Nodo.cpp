#include "nodo.h"

nodo::nodo(Vehiculo* art, nodo* si) {
	obj = art;
	sig = si;
}
nodo::nodo() {
	obj = NULL;
	sig = NULL;
}

Vehiculo* nodo::getObj() {
	return obj;
}
nodo* nodo::getSig() {
	return sig;
}

void nodo::setSig(nodo* si) {
	sig = si;
}
void nodo::setObj(Vehiculo* art) {
	obj = art;
}
nodo::~nodo() {
	delete obj;
	delete sig;
}