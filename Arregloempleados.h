#pragma once
#include"Empleado.h"
#include<vector>
#include<string>
using namespace std;

class ArregloEmpleados {
private:
	vector<Empleado*>arregloempleados;

public:
	ArregloEmpleados();
	~ArregloEmpleados();
	void GetMostrarEmpleado(int indice);
	void AgregarContacto(Empleado *dato);
	Empleado* GetEmpleado(int indice);
	int GetN();
};

ArregloEmpleados::ArregloEmpleados() {

	arregloempleados = vector<Empleado*>();
}
ArregloEmpleados::~ArregloEmpleados() {


}

void ArregloEmpleados::GetMostrarEmpleado(int indice) {



}
void ArregloEmpleados::AgregarContacto(Empleado *dato) {

	arregloempleados.push_back(dato);

}
Empleado* ArregloEmpleados::GetEmpleado(int indice) {

	return arregloempleados.at(indice);

}
int ArregloEmpleados::GetN() {

	return arregloempleados.size();
}