#include "ListaVehiculos.h"

ListaVehiculos::ListaVehiculos() {
	Ppio = NULL;
}

void ListaVehiculos::agregar(Vehiculo* vehiculo) {
	Ppio = new nodo(vehiculo, Ppio);

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

void ListaVehiculos::agregarFinal(Vehiculo* vehiculo) {
	nodo* p = Ppio;
	if (p == NULL) {
		agregar(vehiculo);
	}
	else {
		nodo* aux = p->getSig();
		while (aux != NULL) {
			p = aux;
			aux = p->getSig();
		}
		nodo* nuevo = new nodo(vehiculo, NULL);
		p->setSig(nuevo);
	}
}
string ListaVehiculos::toString()const {
	stringstream s;
	nodo* p = Ppio;
	Vehiculo* aux;
	while (p != NULL) {
		aux = p->getObj();
		s << aux->toString() << endl;
		p = p->getSig();

	}
	return s.str();
}

ListaVehiculos::~ListaVehiculos() {

}