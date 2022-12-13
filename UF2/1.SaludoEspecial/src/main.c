/*	Autor: Xenia 	Fecha de creación: 10.11.2022  */

/*
1. SaludoEspecial
Hacer un programa en C que, pasándole un numero controlado en 0
y 3, a través de un procedimiento nos muestre por pantalla, “Buenos días” en caso de
que haya puesto un 1, “Buenas tardes” en caso que haya puesto un 2 y “Buenas noches”
en caso que haya puesto un 3. Hasta que no ponga un 0, el programa no debe finalizar.
Al finalizar, debe decirnos: “Hasta pronto”.
Para obtener el numero entre 0 y 3, el procedimiento debe llamar a una función que
vaya preguntando al usuario números hasta que introduzca uno válido.
Posteriormente, llamará al procedimiento de saludar.
Una vez nos ha saludado, el programa espera con un getch() y borra la pantalla y vuelve
a empezar.
*/

// LIBRERÍAS //
#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Prototipos
void saludoEspecial(int);		 // Procedimiento
int pideNumEntreRango(int, int); // Función
// DENTRO DEL MAIN //
int main(void)
{ // Programa principal
	SetConsoleOutputCP(CP_UTF8);
	// Variables
	int num;
	// Bucle para que vuelva a preguntar tras saludar mientras el valor de num no sea 0
	do
	{
		printf("\nBIENVENIDOS AL PROGRAMA SALUDO ESPECIAL:\nIntroduce un número entre 0 y 3: ");
		num = pideNumEntreRango(0, 3);
		saludoEspecial(num);
		getch();
		system("cls");
	} while (num != 0);
	return 0;
}
// FUERA DEL MAIN //
// Fragmento código procedimiento
void saludoEspecial(int num)
{
	if (num == 1)
		printf("\nBuenos días.");
	if (num == 2)
		printf("\nBuenas tardes.");
	if (num == 3)
		printf("\nBuenas noches.");
	if (num == 0)
		printf("\nHasta pronto.");
}
// Fragmento código función
int pideNumEntreRango(int min, int max)
{
	int num;
	scanf("%d", &num);
	while (num < min || num > max)
	{
		printf("\nNúmero incorrecto. ");
		printf("\nIntroduce un número entre 0 y 3: ");
		scanf("%d", &num);
	}
	return (num);
}