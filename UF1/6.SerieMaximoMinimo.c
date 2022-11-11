/*	Autor: Xenia		Fecha de creación: 9.10.2022  */

/*
SerieMaximoMinimo
Definir un array de 100 elementos. Calcula el número
más grande y pequeño de los números introducidos por teclados. Acabamos de
introducir números cuando el usuario nos introduzca el 0 o hayamos alcanzado
el límete de posiciones del array. EL 0 no debe tenerse en cuenta, es una marca
final.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int v[100] = {0}; // Declarar vector de 100 elementos, tal como indica el enunciado
	int i;
	// FOR cargando los números introducidos por usuario en el vector
	for (i = 0; i < 100; i++)
	{
		printf("Introduce un n%cmero o pulsa 0 para mostrar resultado: ", 163);
		scanf("%d", &v[i]);
		// Si el primer número introducido es 0 mostrará error y fin del programa
		if (i == 0 && v[i] == 0)
		{
			printf("No se ha introducido ning%cn valor correcto.\n", 163);
			getch();
			return 0;
		}
		// Si, tras introducir números, se introduce 0, se mostrará resultado
		if (v[i] == 0)
		{
			printf("Resultado: \n");
			break;
		}
	}
	// Declarar variables que guardarán el número más grande y el más pequeño respectivamente, sin tener en cuenta el 0
	int max = v[0];
	int min = v[0];
	for (i = 0; i < 100; i++)
	{
		if (v[i] > max && v[i] != 0)
			max = v[i];
		if (v[i] < min && v[i] != 0)
			min = v[i];
	}
	// Mostrar números y fin del programa
	printf("El n%cmero m%cs grande es: %d\n", 163, 160, max);
	printf("El n%cmero m%cs peque%co es: %d", 163, 160, 164, min);
	getch();
	return 0;
}