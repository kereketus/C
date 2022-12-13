/*	Autor: Xenia	Fecha de creación: 10.11.2022  */

/*
2. TablaMultiplicar
Hacer un programa en C que pida al usuario un numero controlado
entre 1 y 10, nos muestre por pantalla la tabla de multiplicar de ese número.
*/

// Librerías
#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Prototipos
void pintaTablaMultiplicar(int); // Procedimiento
int pideNumEntreRango(int, int); // Función
// DENTRO DEL MAIN //
int main(void)
{ // Programa principal
	SetConsoleOutputCP(CP_UTF8);
	// Declaración de variables
	int num;
	// Volver a preguntar en bucle
	do
	{
		printf("\nBIENVENIDOS AL PROGRAMA TABLA DE MULTIPLICAR:\nIntroduce un número entre 1 y 10: ");
		num = pideNumEntreRango(1, 10);
		pintaTablaMultiplicar(num);
		getch();
		system("cls");
	} while (num != 0);
	return 0;
}
// FUERA DEL MAIN //
// Fragmento código procedimiento
void pintaTablaMultiplicar(int num)
{
	printf("\nTabla de multiplicar del %d:", num);
	for (int i = 1; i <= 10; i++)
	{
		printf("\n%d x %d = %d", num, i, num * i);
	}
	printf("\nPresiona una tecla para continuar . . .");
}
// Fragmento código función
int pideNumEntreRango(int min, int max)
{
	int num;
	scanf("%d", &num);
	while (num < min || num > max)
	{
		printf("\nEl número no está dentro del rango. ");
		printf("\nIntroduce un número entre 1 y 10: ");
		scanf("%d", &num);
	}
	return (num);
}
