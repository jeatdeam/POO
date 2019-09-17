#pragma once

class Fecha {
private:

	int Day;
	int Month;
	int Year;

public:
	Fecha(int, int, int);
	~Fecha();
	void SetDay(int _Day);
	void SetMonth(int _Month);
	void SetYear(int _Year);
	//void SetFecha();
	int GetDay();
	int GetMonth();
	int GetYear();
	char* GetDescubrir(int Month);
	bool bisiesto();
	bool validarfecha();

};

Fecha::Fecha(int _Day, int _Month, int _Year) {

	Day = 0;
	Month = 0;
	Year = 0;

}
Fecha::~Fecha() {

}
void Fecha::SetDay(int _Day) {

	Day = _Day;

}
void Fecha::SetMonth(int _Month) {

	Month = _Month;

}
void Fecha::SetYear(int _Year) {

	Year = _Year;

}
int Fecha::GetDay() {

	return Day;

}
int Fecha::GetMonth() {

	return Month;
}
int Fecha::GetYear() {

	return Year;

}
char* Fecha::GetDescubrir(int _Month) {

	char* mesletras = new char[15];
	switch (_Month)
	{
	case 1:

		mesletras = "Enero";

		return mesletras;
		break;
	case 2:
		mesletras = "Febrero";
		return mesletras;
		break;
	case 3:
		mesletras = "Marzo";
		return mesletras;
		break;

	case 4:
		mesletras = "Abril";
		return mesletras;
		break;
	case 5:
		mesletras = "Mayo";
		return mesletras;
		break;
	case 6:
		mesletras = "Junio";
		return mesletras;
		break;
	case 7:
		mesletras = "Julio";
		return mesletras;
		break;
	case 8:
		mesletras = "Agosto";
		return mesletras;
		break;
	case 9:
		mesletras = "Setiembre";
		return mesletras;
		break;
	case 10:
		mesletras = "Octubre";
		return mesletras;
		break;
	case 11:
		mesletras = "Noviembre";
		return mesletras;
		break;
	case 12:
		mesletras = "Diciembre";
		return mesletras;
		break;

	default:
		break;
	}

}
