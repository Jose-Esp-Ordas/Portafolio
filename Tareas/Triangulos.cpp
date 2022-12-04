// Triangulos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
string Identificar(double lado1, double lado2, double lado3)
{
	string Tipo;
	if (lado2 == lado1)
	{
		if (lado3 == lado2)
		{
			cout << "Tu triangulo es equilatero";
			Tipo = 1;
		}
		else
		{
			cout << "Tu triangulo es isosceles";
			Tipo = 2;
		}
	}
	if (lado3 == lado2)
	{
		if (lado1 == lado2)
		{
			cout << " ";
			Tipo = 1;
		}
		else
		{
			cout << "Tu triangulo es isosceles";
			Tipo = 2;
		}
	}
	if (lado1 == lado3)
	{
		if (lado3 == lado2)
		{
			cout << " ";
			Tipo = 1;
		}
		else
		{
			cout << "Tu triangulo es isosceles";
			Tipo = 2;
		}
	}
	if (lado1 != lado2 && lado2 != lado3 && lado3 !=lado1)
	{
		cout << "Tu triangulo es escaleno";
		Tipo = 3;
	}
	return Tipo;
}
double Perimetro( double lado1, double lado2, double lado3)
{
	double Perimetro;
	Perimetro = lado1 + lado2 + lado3;
	cout << "El perimetro es: " ;
		cout << Perimetro << "\n";
         return Perimetro;
}
double area(double lado1, double lado2, double lado3)
{
	float Perimetro, Area;
	Perimetro = lado1 + lado2 + lado3;
	Perimetro = Perimetro / 2;
	Area = sqrt( Perimetro * (Perimetro - lado1)*(Perimetro - lado2)*(Perimetro - lado3));
	cout << "El Area es: ";
	cout << Area << "\n";
	return Area;
}
void angulos(double lado1, double lado2, double lado3)
{
	double Angulo1, Angulo2, Angulo3;
	Angulo1 = acos((lado1*lado1 + lado2*lado2 - lado3*lado3)/(2*lado2*lado1));
	Angulo1 = (Angulo1*180)/3.14159265 ;
	Angulo2 = acos((lado1*lado1 + lado3*lado3 - lado2*lado2)/(2*lado3*lado1));
	Angulo2 = (Angulo2*180)/3.14159265;
	Angulo3 = acos((lado3*lado3 + lado2*lado2 - lado1*lado1)/(2*lado2*lado3));
	Angulo3 = (Angulo3*180)/3.14159265;
	cout << "Estos son los angulos:  " << "\n";
	cout << Angulo1 << "\n";
	cout << Angulo2 << "\n"; 
	cout << Angulo3 << "\n";
}
int main()
{
	string opcion = "s";
	while (opcion != "n")
	{
		double  lado1 = 0, lado2 = 0, lado3 = 0;
		cout << "Introduce tus datos: " << "\n";
		cout << " primer lado" << "\n";
		cin >> lado1;
		cout << " segundo lado" << "\n";
		cin >> lado2;
		cout << " tercer lado" << "\n";
		cin >> lado3;
		Identificar(lado1, lado2, lado3);
		cout << "\n";
		Perimetro(lado1, lado2, lado3);
		area(lado1, lado2, lado3);
		angulos(lado1, lado2, lado3);
		cout << "Quieres ingresar otros datos= si(s) no(n)";
		cin >> opcion;
	}
}
