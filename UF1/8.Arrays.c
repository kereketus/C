/*	Autor: Xenia		Fecha de creación: 9.10.2022  */

/*
Arrays
Definir un array de 6 casillas vacías y hacer los siguientes ejercicios:
a. Rellenar el array con los valores 4,3,5,6,2 y 10
b. Mostrar por pantalla el array
c. Indicar cuantos números son pares
d. Indica la suma de todos los valores
e. Indica la suma de los valores pares.
f. Intercambiar el valor de la primera casilla con el de la última casilla y
muestra el array nuevamente.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int v[6] = {0}; // Declaramos vector de 6 elementos y lo inicializamos a 0
	int i, sum = 0, sumpar = 0;
	// a. Rellenar el array con los valores 4,3,5,6,2 y 10:
	v[0] = 4;
	v[1] = 3;
	v[2] = 5;
	v[3] = 6;
	v[4] = 2;
	v[5] = 10;
	// b. Mostrar por pantalla el array:
	printf("Los valores del vector son: \n");
	for (i = 0; i < 6; i++)
	{
		printf("%i\n", v[i]);
	}
	// c. Indicar cuantos números son pares:
	printf("Los valores pares del vector son: \n");
	for (i = 0; i < 6; i++)
	{
		if (v[i] % 2 == 0)
			printf("%d\n", v[i]);
	}
	// d. Indica la suma de todos los valores:
	for (i = 0; i < 6; i++)
	{
		sum += v[i];
	}
	printf("La suma de todos los valores del vector es: %d", sum);
	// e. Indica la suma de los valores pares:
	for (i = 0; i < 6; i++)
	{
		if (v[i] % 2 == 0)
		{
			sumpar += v[i];
		}
	}
	printf("\nLa suma de todos los valores pares del vector es: %d", sumpar);
	// f. Intercambiar el valor de la primera casilla con el de la última casilla y muestra el array nuevamente:
	v[0] = 10;
	v[1] = 3;
	v[2] = 5;
	v[3] = 6;
	v[4] = 2;
	v[5] = 4;
	printf("\nLos valores del vector tras intercambiar las posiciones son: ");
	for (i = 0; i < 6; i++)
	{
		printf("\n%i", v[i]);
	}
	getch();
	return 0;
}
