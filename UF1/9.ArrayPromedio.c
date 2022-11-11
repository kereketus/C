/*	Autor: Xenia		Fecha de creación: 9.10.2022 */

/*
ArrayPromedio
A partir de un array de 10 casillas, pedir al usuario un número
comprendido entre 1 y 10 y llenar tantas casillas como este número. El valor
de las casillas serán valores aleatorios comprendidos entre 0 y 5. Se pide hacer
un programa que calcule el valor promedio de los números aleatorios
generados.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	int v[10]; // Declaramos vector de 10 elementos
	int i, numAl, sum = 0;
	float promedio = 0, casv = 0; // Para poder calcular correctamente el promedio, era necesario que estas variables pudieran contener decimales
	srand(time(NULL));
	// Pedir a usuario a cuantos elementos del vector se dará un valor aleatorio posteriormente
	printf("%cCu%cntos elementos del vector quieres rellenar? (min: 1 - max: 10): ", 168, 160, i);
	scanf("%f", &casv);
	// Usuario no podrá introducir valores superiores a 10 o inferiores a 0, ya que queremos que como mucho haya 10 elementos, tal como indica el enunciado
	if (casv > 10 || casv == 0)
	{
		printf("N%cmero no v%clido.", 163, 160);
		getch();
		return 0;
	}
	// Rellenar la cantidad de elementos definida por usuario, con valores aleatorios en un rango 0-5
	for (i = 0; i < casv; i++)
	{
		numAl = rand() % 5;
		v[i] = numAl;
		// Esto es una pijada; cuando el iterador llegue al último elemento (menos uno, porque realmente no va a llegar hasta ahí), se introducirá un punto, si no, una coma.
		if (i == casv - 1)
			printf("v[%d]=%d.", i, numAl);
		else
			printf("v[%d]=%d, ", i, numAl);
	}
	// Calculamos el promedio; el iterador recorrerá los elementos que haya definido usuario
	for (i = 0; i < casv; i++)
	{
		sum = sum + v[i]; // La variable sum contendrá la suma de los valores generados en los elementos del vector
	}
	promedio = sum / casv; // La variable promedio contendrá la división entre sum (la suma de todos los valores aleatorios), y la cantidad de elementos definidos por usuario
	// Mostrar resultado de las operaciones anteriores
	printf("\nEl promedio de los n%cmeros aleatorios es: %f.", 163, promedio);
	getch();
	return 0;
}
