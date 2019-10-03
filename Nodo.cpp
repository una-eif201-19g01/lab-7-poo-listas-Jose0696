#include "nodo.h"

nodo::nodo(Vehiculo& veh, nodo* si) {
	vehiculo = veh;
	sig = si;
}
nodo::nodo() {
	sig = nullptr;
}

Vehiculo& nodo::getVehiculo() {
	return vehiculo;
}
nodo* nodo::getSig() {
	return sig;
}

void nodo::setSig(nodo* si) {
	sig = si;
}
void nodo::setVehiculo(Vehiculo& vehiculo) {
	vehiculo = vehiculo;
}

string nodo::toString() {
	return vehiculo.toString();
}

nodo::~nodo() {

}