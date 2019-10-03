#include "ListaVehiculos.h"

ListaVehiculos::ListaVehiculos() {
	Ppio = NULL;
}


bool ListaVehiculos::eliminarInicio() {
	if (Ppio == nullptr) {
		return false;
	}
	else {
		actual = Ppio;
		Ppio = Ppio->getSig();
		delete actual;
		return true;
	}
}

string ListaVehiculos::toString() {
	string informe;
	actual = Ppio;
	while (actual != nullptr) {
		informe += actual->toString();
		actual = actual->getSig();
	}
	return informe;
}

void ListaVehiculos::agregarFinal(Vehiculo& vehiculo) {
	actual = Ppio;
	if (Ppio == nullptr) {
		Ppio = new nodo(vehiculo, nullptr);
	}
	else {
		while (actual->getSig() != nullptr) {
			actual = actual->getSig();
		}
		actual->setSig(new nodo(vehiculo, nullptr));
	}
}


ListaVehiculos::~ListaVehiculos() {

}