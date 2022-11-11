/*	Autor: Xenia		Fecha de creación: 20.10.2022  */

/*
Fruta y ExisteFruta
Hacer un programa en C que pida al usuario cuantas frutas quiere
insertar. Posteriormente el usuario rellenará el array con tantas frutas como
haya solicitado el usuario.
Una vez introducidos todos los productos, el programa preguntará al usuario por un
artículo, éste debe indicar si dicho producto se encuentra en el array o no,
mostrando un mensaje por pantalla.
*/

// Esta es la segunda versión de los ejercicios 11 y 12, utilizando matrices y comparaciones de cadenas.
// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define MAXCADENA 10

int main()
{
	// Definir variables
	int frutE = 0, i;
	char frutBus[10], respuesta;
	bool existe = false;
	// Pedir a usuario de qué tamaño será el vector
	printf("%cQu%c cantidad de frutas quieres insertar%c ", 168, 130, 63);
	scanf("%d", &frutE);
	const int defFrutE = frutE;
	char frutV[defFrutE][MAXCADENA];
	printf("Se van a insertar %d frutas.\n\n", frutE);
	// Rellenar los valores de los elementos guardadas en el vector
	for (i = 0; i < frutE; i++)
	{
		printf("%cQu%c fruta vas a introducir%c ", 168, 130, 63);
		fflush(stdin);
		scanf("%s", &frutV[i]);
	}
	// Buscar valor dentro de los elementos rellenados del vector
	do
	{
		printf("\n%cQu%c fruta quieres buscar%c ", 168, 130, 63);
		fflush(stdin);
		scanf("%s", &frutBus);
		for (i = 0; i < frutE; i++)
		{
			// Comparar las cadenas
			if (strcmp(frutBus, frutV[i]) == 0)
			{
				existe = true;
				break;
			}
			else
				existe = false;
		}
		// Mostrar mensaje indicando si los valores buscados están o si no están
		if (existe == true)
			printf("La fruta existe.\n");
		else if (existe == false)
			printf("La fruta no existe.\n");
		// Esto es una pijada; volver a buscar
		printf("\n%cQuieres comprobar si existe otra fruta%c (s: si - n: no): ", 168, 63);
		fflush(stdin);
		scanf("%c", &respuesta);
	} while (respuesta == 's');
	// Fin del programa
	printf("Nos vemos.");
	getch();
	return 0;
}
