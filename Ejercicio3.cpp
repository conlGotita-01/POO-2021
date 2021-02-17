// Realice un programa que lea los siguientes datos de una persona: 
// Edad: dato de tipo entero. Sexo: dato de tipo caracter. Altura en metros: dato de tipo flotante. 
// Muestre los datos leidos.  
// Desarrolle su programa usando funciones. 


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>


using namespace std;

struct Info{
	string nombre;
	string apellido;
	string telefono;
	
}info;


void crearContacto(){
	ofstream archivo;
	int respuesta;
	
	archivo.open("InformacionUsuarios.txt", ios::out); 
	if(archivo.fail()){
		cout << "El archivo no se pudo crear" ;
		exit(1);
	}
	
	archivo << "\t Informacion Personal" << endl;
	
	do{
		fflush(stdin); 
		cout << "Digite el nombre: ";
		getline(cin,info.nombre);
		
		cout << "Digite el apellido: ";
		getline(cin,info.apellido);
		
		cout << "Digite el telefono: ";
		getline(cin,info.telefono);
		
		cout << "\n";
		
		archivo << "Nombre: " << info.nombre << endl;
		archivo << "Apellido: " << info.apellido << endl;
		archivo << "Telefono: " << info.telefono << endl << endl;

		cout << " Desea agregar otro contacto nuevo (1 = Si): " << endl;
		cin >> respuesta;
		
	}while(respuesta == 1);
	
	archivo.close();
}

void agregarContacto(){
	
	ofstream archivo;
	int respuesta;
	
	archivo.open("InformacionUsuarios.txt", ios::app);
	
	if(archivo.fail()){
		cout << "El archivo no se pudo abrir correctamente";
		exit(1);
	}
	
	do{
		fflush(stdin); 
		cout << "Digite el nombre: ";
		getline(cin,info.nombre);
		
		cout << "Digite el apellido: ";
		getline(cin,info.apellido);
		
		cout << "Digite el telefono: ";
		getline(cin,info.telefono);
		
		cout << "\n";
		
		archivo << "Nombre: " << info.nombre << endl;
		archivo << "Apellido: " << info.apellido << endl;
		archivo << "Telefono: " << info.telefono << endl << endl;

		cout << " Desea agregar otro contacto nuevo (1 = Si | 2 = No): " << endl;
		cin >> respuesta;
		
	}while(respuesta == 1);
	
	archivo.close();
}
	
void verInformacion(){
	
	ifstream archivo;
	string texto;
	
	
	archivo.open("InformacionUsuarios.txt", ios::in);
	
	if(archivo.fail()){
		cout << "El archivo no se pudo abrir correctamente";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout << texto << endl;
	}
	archivo.close();
}

void menu(){
	int op;
    do{
        cout << "\t --------------MENU-------------- " << endl;
        cout << " 1. Crear(nombre,apellidos,telefono) " << endl;
        cout << " 2. Agregar mas contactos(nombre,apellidos,telefono) " << endl;
		cout << " 3. Visualizar contactos existentes " << endl;
		cout << " 4. Salir" << endl;
		cout << "Opcion: ";
		cin >> op;
		
		
		switch(op){
			case 1: crearContacto();
			cout << "\n";
			system("Pause");
			break; 
			
			case 2: agregarContacto();
			cout << "\n";
			system("Pause");
			break;
			
			case 3: verInformacion();
			cout << "\n";
			system("Pause");
			break;
		}
    }while(op != 4);
}



int main(){

    menu();


    system("pause");
    return 0;
}
