#include<stdio.h> //Imput Output
#include<math.h> // al igual que stdio math es una biblioteca la cual tiene ya comandos
#define PI 3.1416   //Definiendo una constante

int main(){ //En la funcion int se debe tener un valor de regreso, es decir ingresas algo y tiene que regresar un valor entero , si no se quiere eso se usa la funcion Void
	float area, radio;   //Declarando variables de tipo flotante
	radio = 5;  //Asignando valor a variable radio 
	area = PI * pow(5,2); //Asignando resultado de la operacion a variable area
	printf("Area\n"); //Imprimiendo Titulo
	// Imprimiendo resultado
	printf("Area de Circulo con radio 5: %f", area);
	return 0;
}
