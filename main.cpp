#include "ListaVehiculos.h"
#include "Vehiculo.h"
#include "Carro.h"
#include "Moto.h"

struct coleccion {
	string marca;
	string placa;
	int anio;
	float costo;
	int dia;
	int hora;
	float precio;

};

int main() {
	struct coleccion carro, moto;
	int numeroVehiculo = 0;
	int vehiculos = 0;

	ListaVehiculos* lista1 = new ListaVehiculos();
	cout << "Cantidad de vehiculos:   ";
	cin >> numeroVehiculo;

	for (int i = 0; i < numeroVehiculo; i++) {
		cout << "1-Carro" << endl;
		cout << "2-Moto" << endl;
		cin >> vehiculos;

		if (vehiculos == 1) {
			cout << "Placa del carro: ";
			cin >> carro.placa;

			cout << "Marca del carro :";
			cin >> carro.marca;

			cout << "Anio del carro: ";
			cin >> carro.anio;

			cout << "Precio del carro: ";
			cin >> carro.costo;

			cout << "Tiempo en dias: ";
			cin >> carro.dia;

			Carro carro1(carro.placa, carro.marca, carro.anio, carro.costo, carro.dia, carro.precio);

			float precio = carro1.CalcularDia(carro.costo, carro.dia, carro.precio);
			carro1.setCalcularDia(precio);

			lista1->agregarFinal(carro1);

		}
		else if (vehiculos == 2) {
			cout << "Placa de la moto: ";
			cin >> moto.placa;

			cout << "Marca de la moto :";
			cin >> moto.marca;

			cout << "Anio de la moto: ";
			cin >> moto.anio;

			cout << "Precio de la moto: ";
			cin >> moto.costo;

			cout << "Tiempo en horas: ";
			cin >> moto.hora;

			Moto moto1(moto.placa, moto.marca, moto.anio, moto.costo, moto.hora);
			float precio = moto1.CalcularHora(moto.costo, moto.hora);
			moto1.setCalcularHora(precio);

			lista1->agregarFinal(moto1);
		}
	}

	cout << lista1->toString();

	return 0;