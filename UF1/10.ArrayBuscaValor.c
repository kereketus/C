/*	Autor: Xenia		Fecha de creación: 9.10.2022  */

/*
ArrayBuscaValor
A partir de un array de 10 casillas, pedir al usuario un
número comprendido entre 0 y 10 y llenar tantas casillas como este número
indique. El valor de las casillas serán valores aleatorios comprendidos entre 1 y
100. Posteriormente solicitar un número al usuario, comprendido entre 1 y 100
y buscar si este valor existe dentro del array. Debe mostrar un mensaje por
pantalla indicando si el numero buscado está o no dentro del array. No hay que
indicar cuantas veces está. Solo, si aparece al menos una vez.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales en ASCII , no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	// Declarar variables
	int v[10]; // Declaramos vector de 10 elementos
	int i, numAl, sum = 0, numBus = 0;
	float promedio = 0, casv;
	bool existe = false;
	srand(time(NULL));
	// Pedir a usuario a cuantos elementos del vector se dará valor posteriormente
	printf("%cCu%cntos elementos del vector quieres rellenar? (min: 0 - max: 10): ", 168, 160, i);
	scanf("%f", &casv);
	// Usuario no podrá introducir valores superiores a 10, tal como indica el enunciado
	if (casv >= 11)
	{
		printf("N%cmero no v%clido.", 163, 160);
		getch();
		return 0;
	}
	// Rellenar la cantidad de elementos definida por usuario, con valores aleatorios cuyo límite es 100
	for (i = 0; i < casv; i++)
	{
		numAl = rand() % 100;
		v[i] = numAl;
		// Esto es una pijada; cuando el iterador llegue al último elemento (menos uno, porque realmente no va a llegar hasta ahí), se introducirá un punto, si no, una coma.
		if (i == casv - 1)
			printf("v[%d]=%d.\n", i, numAl);
		else
			printf("v[%d]=%d, ", i, numAl);
	}
	// Solicitar numero entre 0 y 100 a usuario, que posteriormente se buscará dentro del vector
	printf("\n%cQu%c valor quieres buscar dentro del vector%c ", 168, 130, 63);
	scanf("%d", &numBus);
	// Buscar si ese numero existe dentro del vector mediante una variable bool
	for (int i = 0; i <= casv; i++)
	{
		if (v[i] == numBus)
		{
			existe = true;
			break;
		}
	}
	// Mensaje indicando si el valor introducido está o si no está en el vector y fin del programa
	if (existe == true)
		printf("El n%cmero %d existe dentro del vector.\n", 163, numBus);
	else
		printf("El n%cmero %d no existe dentro del vector.\n", 163, numBus);
	getch();
	return 0;
}
