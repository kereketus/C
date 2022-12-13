/*	Autor: Xenia		Fecha de creación: 11.11.2022  */

/*
6. Calculadora
Crea una calculadora con las opciones, sumar, restar, multiplicar,
utilizando métodos/funciones. Mediante un menú, debes preguntar al usuario que
operación deseas realizar, y posteriormente solicitar los dos operandos, para realizar
el cálculo mediante un método. Hay que verificar que el programa no divida por 0, en
este caso, debe mostrar un mensaje de error. Para salir del programa hay que poner
un 0.
El main debe mostrar el resultado cada vez que se hace una operación.
*/

// Librerías
#include <stdio.h>
#include <conio.h>
#include <windows.h>
// Prototipos
void pintaMenu();						 // Procedimiento
int pideNumEntreRango(int min, int max); // Función
void pideOperadores(int *a, int *b);	 // Procedimiento
int suma(int a, int b);					 // Función
int resta(int a, int b);				 // Función
int multiplicacion(int a, int b);		 // Función
float division(int a, int b);			 // Función
// DENTRO DEL MAIN //
int main(void)
{ // Variables
	int opcion, a, b, resultado;
	float resultadoDiv;
	SetConsoleOutputCP(CP_UTF8);
	// Programa principal
	do
	{
		printf("BIENVENIDOS AL PROGRAMA CALCULADORA:\n");
		pintaMenu();
		opcion = pideNumEntreRango(0, 4);
		if (opcion == 0)
		{
			printf("\nHas salido de la calculadora.\nPresiona una tecla para continuar . . .");
			break;
		}
		pideOperadores(&a, &b);
		switch (opcion)
		{
		case 1:
			resultado = suma(a, b);
			printf("\n%d + %d = %d", a, b, resultado);
			break;
		case 2:
			resultado = resta(a, b);
			printf("\n%d - %d = %d", a, b, resultado);
			break;
		case 3:
			resultado = multiplicacion(a, b);
			printf("\n%d x %d = %d", a, b, resultado);
			break;
		case 4:
			if (b == 0)
			{
				printf("\nNo se puede dividir entre 0.");
			}
			else
			{
				resultadoDiv = division(a, b);
				printf("\n%d ÷ %d = %f", a, b, resultadoDiv);
			}
			break;
		}
		printf("\nPresiona una tecla para continuar . . .");
		getch();
		system("cls");
	} while (opcion != 0);

	getch();
	return 0;
}
// FUERA DEL MAIN //
// Fragmento código procedimiento
void pintaMenu() // Escoger opción menú
{
	printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n0.Salir\n");
}
// Fragmento código procedimiento
void pideOperadores(int *a, int *b) // Introducir 2 números
{
	printf("\nIntroduce el primer número: ");
	scanf("%d", a);
	printf("Introduce el segundo número: ");
	scanf("%d", b);
}
// Fragmento código función
int pideNumEntreRango(int min, int max) // Elegir opción menú 0-4
{
	int opcion;
	printf("\nElige una opción: ");
	scanf("%d", &opcion);
	while (opcion < 0 || opcion > 4)
	{
		printf("\nEl número no está dentro del rango.\n");
		printf("\nElige una opción: ");
		scanf("%d", &opcion);
	}
	return (opcion);
}
// Fragmento código función
int suma(int a, int b) // Sumar
{
	int resultado;
	resultado = a + b;
	return (resultado);
}
// Fragmento código función
int resta(int a, int b) // Restar
{
	int resultado;
	resultado = a - b;
	return (resultado);
}
// Fragmento código función
int multiplicacion(int a, int b) // Multiplicar
{
	int resultado;
	resultado = a * b;
	return (resultado);
}
// Fragmento código función
float division(int a, int b) // Dividir (NO SE PUEDE ENTRE 0)
{
	float resultado;
	resultado = a / (float)b;
	return (resultado);
}
