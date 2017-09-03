/*
 * mayor.cpp
 * Luego de pedir dos numeros enteros al usuario, imprime en pantalla cual es el mayor
 * Paula Encinas
 * 03092017
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int a, b;
int main() {
	cout<<"Ingresar pirmer numero: ";
	cin>>a;
	cout<<"Ingresar segundo numero: ";
	cin>>b;
	if(a>b){
		cout<<a<<" Es mayor que "<<b;
	}else if(a=b){
		cout<<a<<" y "<<b<<" son igales";
	}else{
		cout<<b<<" Es mayor que "<<a;
	}
	return 0;
}
