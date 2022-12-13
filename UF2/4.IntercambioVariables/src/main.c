/*	Autor: Xenia		Fecha de creación: 10.11.2022  */

/*
4. IntercambioVariables
Crea un programa en C que pida al usuario valores a dos
variables mediante una función (una llamada a la función por cada inicialización de la
variable). No deben estar controlados. Posteriormente, crea un procedimiento en C
que intercambie el valor de dos variables que pasaremos como parámetros y que
previamente habremos introducido por teclado. Se deben intercambiar los valores
entre las variables y no mostrar las variables al revés.
Se debe mostrar el valor de las variables antes del cambio y posterior al cambio
directamente con printf en el main.
*/

// Librerías
#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Prototipos
int pedirNumero();								 // Función
void intercambioVariables(int *num1, int *num2); // Procedimiento
// DENTRO DEL MAIN //
int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	// Declaración de variables
	int num1, num2;

	printf("\nBIENVENIDOS AL PROGRAMA INTERCAMBIO VARIABLES:\n");
	// Se llama dos veces a la función porque queremos 2 números
	num1 = pedirNumero();
	num2 = pedirNumero();
	// Llamada al procedimiento
	intercambioVariables(&num1, &num2);
	printf("\n\nPresiona una tecla para salir . . . ");
	getch();

	return 0;
}
// FUERA DEL MAIN //
// Fragmento código función
int pedirNumero()
{
	int pideNum;
	printf("Introduce un número: ");
	scanf("%d", &pideNum);
	return (pideNum);
}
// Fragmento código procedimiento
void intercambioVariables(int *num1, int *num2)
{
	int aux;
	printf("\nNÚMEROS ANTES DEL INTERCAMBIO: ");
	printf("\nNUM1: %d\nNUM2: %d", *num1, *num2);

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;

	printf("\n\nNÚMEROS DESPUÉS DEL INTERCAMBIO: ");
	printf("\nNUM1: %d\nNUM2: %d", *num1, *num2);
}
