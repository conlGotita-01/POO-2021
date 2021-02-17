// Realice un programa que lea los siguientes datos de una persona: 
// Edad: dato de tipo entero. 
// Sexo: dato de tipo caracter.  
// Altura en metros: dato de tipo flotante. 
// Muestre los datos leidos.  Desarrolle su programa usando funciones.  



#include <iostream>
#include <string.h>


using namespace std;

struct Datos{
	int edad;
	string sexo;
	float altura;
	
}datos;

void agregarInformacion(){
	
	int respuesta;
	
	cout << "Digite su edad: ";
	cin >> datos.edad;
		
	cout << "Digite su sexo: ";
	cin >> datos.sexo;
		
	cout << "Digite su altura: ";
	cin >> datos.altura;
		
	cout << "\n";
		
	cout << "Edad: " << datos.edad << endl;
	cout << "Sexo: " << datos.sexo << endl;
	cout << "Altura: " << datos.altura << endl << endl;
}

int main(){

    agregarInformacion();


    system("pause");
    return 0;
}
