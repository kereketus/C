/*	Autor: Xenia		Fecha de creación: 7.09.2022 */

/*
Operaciones
Hacer un programa en C que pida dos números enteros al usuario
y muestre por pantalla su suma, resta, multiplicación y división entera, se debe
tener en cuenta que no se puede dividir por 0. En caso de que suceda, debe
mostrar dicho mensaje por pantalla.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <conio.h>

int main()
{
	// Declaramos variables
	int num1, num2;
	// Pedir a usuario el primer número y guardarlo en variable num1
	printf("Introduce el primer n%cmero: ", 163);
	scanf("%d", &num1);
	// Pedir a usuario el segundo número y guardarlo en variable num2
	printf("Introduce el segundo n%cmero: ", 163);
	scanf("%d", &num2);
	// Mostramos un mensaje por cada operación realizada entre los dos números anteriores
	printf("\nLa suma de ambos n%cmeros es: %d \n", 163, num1 + num2);
	printf("La resta de ambos n%cmeros es: %d \n", 163, num1 - num2);
	printf("La multiplicaci%cn de ambos n%cmeros es: %d \n", 162, 163, num1 * num2);
	// Si alguno de los dos números a introducir es 0, no se podrá realizar la división
	if (num1 == 0 || num2 == 0)
	{
		printf("No es posible dividir entre 0. \n");
	}
	// Si ninguno de los dos números a introducir es 0, se realizará la operación normalmente
	else
	{
		// Mostrar mensaje junto al resto y fin del programa
		printf("La divisi%cn de ambos n%cmeros es: %d \n", 162, 163, num1 / num2);
	}
	getch();
	return 0;
}