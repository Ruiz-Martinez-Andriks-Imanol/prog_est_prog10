/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada 
Ciclo: 01/2022

Este es un programa de condicionales con operadores lógicos en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
  
    -Variables enteras.
    -printf para mostrar varias variables.
    -scanf.
    -El uso de include para las librerias.
    -condicional if-else-.
	-Comentarios para la documentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración
	int a,b,c;
	//Procesos
	printf("Introduce el valor de a: ");
	scanf("%d", &a);
	printf("Introduce el valor de b: ");
	scanf("%d", &b);
	printf("Introduce el valor de c: ");
	scanf("%d", &c);
	if(a>b&&a>c){ //Condicionales con operador lógico
		printf("a es el mayor");
	}
	else if(b>a && b>c){
		printf("b es el mayor");
	}
	else if(c>a && c>b){
		printf("c es el mayor");
	}
	else if(c==a && b==c) {
	printf("Los tres son iguales");	
	}
	else if(a==b && a>c){
		printf("a y b son mayores");
	}
	else if(a==c && a>b){
		printf("a y c son mayores");
	}
	else {
		printf("c y b son mayores");
	}
	return 0;
}
