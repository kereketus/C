/*	Autor: Xenia 		Fecha de creación: 10.11.2022  */

/*
3. ArrayMedia
Realiza un programa en C que declare un array de máximo 10 elementos
y la variable de control de elementos (numE). Para ello, el main principal, pedirá al
usuario cuantos elementos quiere introducir (entre 1 y 10) que se debe controlar con
una función. Se debe hacer un procedimiento que inicialice el vector con números
introducidos por el usuario. Una vez hecho, hacer función en C que reciba como
argumento un array con números, y devuelva la media de los números que tiene el
array. Crear otro procedimiento para mostrar el vector.
El programa principal debe mostrar la media por pantalla.
*/

// Librerías
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define MAXNUMVECTOR 10 // Declarar vector 10 casillas
// Prototipos
void inicializarVector(int[], int); // Procedimiento
void pintaVector(int[], int);		// Procedimiento
int pideNumEntreRango(int, int);	// Función
float mediaArray(int[], int);		// Función
// DENTRO DEL MAIN //
int main()
{ // Programa principal
	int v[MAXNUMVECTOR];
	int i, numE = 0;
	float media;
	SetConsoleOutputCP(CP_UTF8);
	printf("\nBIENVENIDOS AL PROGRAMA ARRAY MEDIA:\nIntroduce cuantos elementos quieres en el vector (1-10): ");
	numE = pideNumEntreRango(1, 10);
	inicializarVector(v, numE);
	pintaVector(v, numE);
	media = mediaArray(v, numE);
	printf("\n\nLa media de los valores del array es: %f.\nPresiona una tecla para continuar . . .", media);
	getch();
	return 0;
}
// FUERA DEL MAIN //
// Función para pedir a usuario cuantos elementos querrá rellenar del vector
int pideNumEntreRango(int min, int max)
{
	int numE;
	scanf("%d", &numE);
	// Si numE es más pequeño o más grande que el min y max establecidos (1 y 10), error y vuelve a pedir número
	while (numE < min || numE > max)
	{
		printf("\nEl número no está dentro del rango. ");
		printf("\nIntroduce un número entre 1 y 10: ");
		scanf("%d", &numE);
	}
	return (numE);
}
// Procedimiento para inicializar el vector pidiendo a usuario que introduzca los valores de los elementos
void inicializarVector(int v[], int numE)
{
	int i;
	printf("\nINICIALIZACIÓN DEL ARRAY:\n");
	for (i = 0; i < numE; i++)
	{
		printf("\nIntroduce un valor para la posición %d del array: ", i);
		scanf("%d", &v[i]);
	}
}
// Procedimiento mostrar vector
void pintaVector(int v[], int numE)
{
	printf("\nArray inicializado. Los valores del array son:\n");
	int i;
	for (i = 0; i < numE; i++)
	{
		printf("v[%d]=%d  ", i, v[i]);
	}
}
// Función media números vector
float mediaArray(int v[], int numE)
{
	float media, sum;
	for (int i = 0; i < numE; i++)
	{
		sum = sum + v[i];
	}
	media = sum / (float)numE;
	return (media);
}
