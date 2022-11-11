/*	Autor: Xenia		Fecha de creación: 8.10.2022 */

/*
sumaParesImpares
Hacer un programa en C que pida 10 números enteros al
Usuario. El programa debe mostrar por pantalla la suma de todos los números
pares y la suma de todos los números impares introducidos por el Usuario.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int i, n, pares = 0, impares = 0;
	// FOR pidiendo a usuario 10 números
	for (i = 0; i <= 10; i++)
	{
		// Los números se almacenarán en la variable n
		printf("\nIntroduce un n%cmero entero: ", 163);
		scanf("%d", &n);
		// Si el número introducido por usuario es par, se guardará en la variable pares
		if (n % 2 == 0)
		{
			pares = pares + n; // Asignamos la operación suma a la variable correspondiente
		}
		// Si el número introducido por usuario es impar, se guardará en la variable impares
		else
		{
			impares = impares + n; // Asignamos la operación suma a la variable correspondiente
		}
	}
	// Mostramos ambos resultados, almacenados en sus respectivas variables, y fin del programa
	printf("\nLa suma de los n%cmeros pares es: %d", 163, pares);
	printf("\nLa suma de los n%cmeros impares es: %d", 163, impares);
	getch();
	return 0;
}
