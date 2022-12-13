/*	Autor: Xenia		Fecha de creación: 11.11.2022  */

/*
5. LoteriaDobleAcierto
Hacer un programa en C para poder jugar al DOBLEACIERTO.
Este juego trata de elegir 2 números del 0 al 9. Entonces el sistema genera
aleatoriamente (rand) la combinación ganadora de 2 números (también entre 0 y 9).
Hay que mostrar por pantalla cuántos aciertos ha tenido el usuario. Se debe utilizar un
único procedimiento con el fin de generar la combinación ganadora y otro para obtener
los 2 números del usuario. Los números del usuario NO se pueden repetir ni los números
de la combinación ganadora no se pueden repetir.
Para calcular el número de aciertos, no es necesario que los números estén en la misma
posición, simplemente es necesario que sean iguales.
*/

// Librerías
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
// Prototipos
void combinacionUsuario(int *usu1, int *usu2);			   // Proecdimiento
int pideNumEntreRango(int min, int max);				   // Función
void combinacionGanadora(int *pc1, int *pc2);			   // Procedimiento
int calculaAciertos(int pc1, int pc2, int usu1, int usu2); // Función
// DENTRO DEL MAIN //
int main(void)
{ // Programa principal
	SetConsoleOutputCP(CP_UTF8);
	// Declaración variables
	int usu1, usu2, pc1, pc2, numAciertos;

	printf("BIENVENIDOS AL PROGRAMA DE LOTERÍA DOBLE ACIERTO\n\n");

	combinacionUsuario(&usu1, &usu2);
	combinacionGanadora(&pc1, &pc2);
	numAciertos = calculaAciertos(pc1, pc2, usu1, usu2);

	printf("\nLa combinación del usuario es: %d - %d", usu1, usu2);
	printf("\nLa combinación ganadora es: %d - %d", pc1, pc2);
	printf("\n\nHas acertado %d número/s.", numAciertos);

	printf("\nPresiona una tecla para salir . . .");

	getch();
	return 0;
}
// FUERA DEL MAIN //
// Fragmento código función
int pideNumEntreRango(int min, int max)
{
	int pideNum;
	printf("Introduce un número entre 0 y 9: ");
	scanf("%d", &pideNum);
	while (pideNum < min || pideNum > max)
	{
		printf("\nEl número no está dentro del rango o ya ha sido introducido.\n");
		printf("Introduce un número entre 0 y 9: ");
		scanf("%d", &pideNum);
	}
	return (pideNum);
}
// Fragmento código procedimiento
void combinacionUsuario(int *usu1, int *usu2)
{
	*usu1 = pideNumEntreRango(0, 9);
	*usu2 = pideNumEntreRango(0, 9);
	while (*usu2 == *usu1)
	{
		printf("\nEl número no es válido porque ya ha sido introducido.\n");
		*usu2 = pideNumEntreRango(0, 9);
	}
}
// Fragmento código procedimiento
void combinacionGanadora(int *pc1, int *pc2)
{
	srand(time(NULL));

	*pc1 = rand() % 10;
	*pc2 = rand() % 10;

	while (*pc2 == *pc1)
	{
		*pc2 = rand() % 10;
	}
}
// Fragmento código función
int calculaAciertos(int pc1, int pc2, int usu1, int usu2)
{
	int numAciertos = 0;

	if (usu1 == pc1 || usu1 == pc2)
	{
		numAciertos++;
	}
	if (usu2 == pc1 || usu2 == pc2)
	{
		numAciertos++;
	}
	return (numAciertos);
}
