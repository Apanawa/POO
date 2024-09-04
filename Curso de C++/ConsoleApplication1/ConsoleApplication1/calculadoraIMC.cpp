/*
Realizar un programa que calcule el indice de masa corportal o IMC
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	// Variables
	float peso = 0;
	float altura = 0;
	float resultado = 0;

	// Input
	cout << "Calculadora de Indice de Masa Corporal\n";
	cout << "Ingrese su peso en kilogramos: ";
	cin >> peso;
	cout << "Ingrese su altura en metros: ";
	cin >> altura;

	// Proceso
	resultado = peso / pow(altura, 2);
	cout << "Su IMC es: " << resultado;

	return 0;
}