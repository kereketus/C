/*	Autor: Xenia		Fecha de creación: 8.10.2022  */

/*
sumaParesImpares
Hacer un algoritmo que pida al Usuario un número natural. El
algoritmo debe mostrar la suma de todos los números entre el 1 y el número
introducido por el Usuario.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declarar variables
	int i, result, sum = 0, num = 0, com = 0;
	// Pedir número natural a usuario, si se introduce un número negativo o 0, mostrará error y volverá a pedir un número natural
	while (num < 0 || num == 0)
	{
		printf("\nElige un n%cmero natural: ", 163);
		scanf("%d", &num);
		if (num < 0 || num == 0)
			printf("El n%cmero introducido no es v%clido.", 163, 160);
	}
	// FOR iterando el número introducido para realizar las operaciones
	for (i = 0; i <= num;)
	{
		result = 0; // El resultado de las operaciones se guardará en la variable result
		result = sum + com;
		// Mostrar operación, resultado y fin del programa
		if (result != 0)
			printf("\n%d + %d = %d", sum, i, result);
		sum = result;
		com += 1;
		i = i + 1;
	}
	getch();
	return 0;
}
