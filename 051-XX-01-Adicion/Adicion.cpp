/*
 * Adicion.cpp
 * Luego de pedir dos numeros enteros al usuario, imprime en pantalla la suma de estos
 * Paula Encinas
 * 03092017
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int a,b;
int main() {
	cout<<"Ingrese primer numero: ";
	cin>>a;
	cout<<"Ingrese segundo numero: ";
	cin>>b;
	cout<<"El resultado es: "<<a+b;
	system("pause");
	return 0;
}
