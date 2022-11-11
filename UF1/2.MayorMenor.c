/*	Autor: Xenia		Fecha de creación: 7.10.2022  */

/*
MayorMenor
Hacer un programa en C que, dados dos números enteros, indique
si el primero es mayor, igual o menor que el segundo.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int num1, num2;
	// Pedir primer número a usuario y guardarlo en variable num1
	printf("Introduce el primer n%cmero: ", 163);
	scanf("%d", &num1);
	// Pedir segundo número a usuario y guardarlo en variable num2
	printf("Introduce el segundo n%cmero: ", 163);
	scanf("%d", &num2);
	// Si el primer número es menor que el segundo, se mostrará este mensaje
	if (num1 < num2)
		printf("%d es menor que %d.", num1, num2);
	// Si el primer número y el segundo son iguales, se mostrará este mensaje
	else if (num1 == num2)
		printf("Los dos n%cmeros son iguales.", 163);
	// Si el primer número es mayor que el segundo, se mostrará este mensaje
	else
		printf("%d es mayor que %d.", num1, num2);
	// Fin del programa
	getch();
	return 0;
}
