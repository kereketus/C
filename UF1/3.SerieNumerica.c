/*	Autor: Xenia		Fecha de creación: 8.10.2022  */

/*
SerieNumerica
Escribir los números desde el 1 hasta el número introducido por
el Usuario.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int num, i;
	// Pedir número a usuario y guardarlo en variable num
	printf("Introduce el n%cmero hasta el que debo contar: ", 163);
	scanf("%d", &num);
	printf("\nIniciando contador... ");
	// Iniciamos FOR empezando a iterar en 1 en lugar de 0 para que no se tenga en cuenta al mostrar el contador, tal como pide el enunciado
	for (i = 1; i <= num; i++)
	{
		// Esto es una pijada; cuando el iterador llegue al último elemento, se introducirá un punto, si no, una coma.
		if (i == num)
			printf("%d.", i);
		else
			printf("%d, ", i);
	}
	// Fin del programa
	getch();
	return 0;
}
