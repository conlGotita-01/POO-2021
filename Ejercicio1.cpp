// - Escriba un programa que lea el precio de un producto y muestre el precio del producto al aplicarle el IVA. 
// - Defina una funcion que calcule el IVA y retorne el valor. 

#include <iostream>  
#include <conio.h>


using namespace std;


// Definicion de funcion.

float aplicarIva(float valorProducto, float iva){

    
    float ivaFinal = iva / 100 ;
   	float ivaAplicado = (valorProducto * ivaFinal) + valorProducto;
	
}


int main(){

    float valorProducto;
	float iva;
    
    cout << " Introduzca el precio del producto al que le aplicara el IVA: ";
	cin >> valorProducto; 

    cout << " Introduzca el valor del iva a aplicar [Entero]:  ";
	cin >> iva;
	
	cout << " El resultado del producto con iva incluido es " << aplicarIva(valorProducto, iva) << endl;
	// resultado = aplicarIva(iva, valorProducto);
	
	getch();
    return 0;
    
}


