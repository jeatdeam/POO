#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include"Menu.h"
#include"Fecha.h"
#include"Empleado.h"
#include"Arregloempleados.h"
using namespace System;

int main()
{
	int num,dia,mes,año;

	Fecha*  fecha;
	/*fecha = new Fecha();*/
	Empleado* empleado;
	/*empleado = new Empleado();*/
	ArregloEmpleados* vectorempleado;
	vectorempleado = new ArregloEmpleados();

	string apellido, nombre;

	while (1) {

		num=Menu();

		if(num==1){
		
			cout << "Datos Empleado : " << endl;

			cout << "-" << empleado->GetApellido();cout<< " " << empleado->GetNombre();
			cout << "Fecha de contrato: " << fecha->GetDay(); cout << "-" << fecha->GetMonth(); cout << "-" << fecha->GetYear();cout << endl;
		
		}

		if (num == 2) {


			empleado = new Empleado();


				cout << "Datos Nuevo Empleado\n";
				cout << "Ingrese El Apellido: "; cin >> apellido;
				cout << "\nIngrese El Nombre:  "; cin >> nombre;
				cout << "\nIngrese La fecha de nacimiento: \n";
				cout << "\nDía: "; cin >> dia;
				cout << "\nMes: "; cin >> mes;
				cout << "\nAño: "; cin >> año;
				empleado->SetApellido(apellido);
				empleado->SetNombre(nombre);
				fecha->SetDay(dia);
				fecha->SetMonth(mes);
				fecha->SetYear(año);

				vectorempleado->AgregarContacto(empleado);


		}
	}

     




    return 0;
}
