#pragma once
using namespace std;
#include<iostream>
#include"Fecha.h"
#include<string>
//#include<vector>
class Empleado {

private:
	string Nombre;
	string Apellido;
	Fecha* FechaContratacion;
	Fecha* FechaNacimiento;

public:

	Empleado(void);
	~Empleado();
	string Mostrar();
	string GetMostrarEmpleado(string,string);
	void SetNombre(string);
	string GetNombre();
	void SetApellido(string);
	string GetApellido();

	void EmpleadosApril();
	int Contrataciones();
};
Empleado::Empleado(void) {

	//Nombre = _Nombre;
	//Apellido = _Apellido;
	this->FechaContratacion = FechaContratacion;
	this->FechaNacimiento =FechaNacimiento;

}
Empleado::~Empleado() {

	
	delete[]FechaContratacion;
	delete[]FechaNacimiento;

}
void Empleado::SetNombre(string _Nombre) {

	Nombre = _Nombre;

}
string Empleado::GetNombre() {

	return Nombre;

}
void Empleado::SetApellido(string _Apellido){

	Apellido = _Apellido;

}
string Empleado::GetApellido() {

	return Apellido;

}

string Empleado::GetMostrarEmpleado(string _apellido,string _nombre) {


	return 0;
}
void Empleado::EmpleadosApril() {

}
int Empleado::Contrataciones() {
	return 0;
}
