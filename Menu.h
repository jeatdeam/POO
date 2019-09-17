#pragma once
#include<iostream>
#include<conio.h>
using namespace std;

int Menu() {

	int opcion;
	do {

	cout << "\t\tMenu\n"<<endl;
	cout << "Ingrese la opcion\n\n";
	cout << "1.Mostrar Empleado\n";
	cout << "2.Agregar Empleado\n";
	cout << "Opcion: ";
	cin >> opcion;

	} while ( opcion<1 ||opcion>2);

	_getch();
	return opcion;
}