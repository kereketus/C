/*	Autor: Xenia		Fecha de creación: 8.10.2022  */

/*
MasterMind
Hacer un programa en C que genere un número aleatorio de 4
cifras. El usuario entonces debe introducir números hasta que lo
acierte o bien haya hecho n intentos. El número de intentos también debe
introducirlos el usuario. A cada número que introduzca el usuario,
el programa le debe decir si el número que debe adivinar es mayor o más
pequeño. Si el usuario lo acierta en un número de veces menor que n, entonces
ha ganado. Si no, ha perdido.
*/

// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	// Declarar variables
	srand(time(NULL));
	int numAl, numI, intentos = 0, intentosMax;
	// Generar número aleatorio de 4 cifras
	// He decidido establecer este rango para limitar un poco el número generado, haciendo así un poco más ameno el juego
	numAl = rand() % 2000 + 1000; // El número generado siempre será de 4 cifras y quedará guardado en la variable numAl
	// Si se descomenta esto, podremos hacer trampas; mostrará en pantalla el número aleatorio que se ha generado
	// printf("%d\n", numAl);
	printf("Acabo de generar un n%cmero aleatorio de cuatro cifras.\nIntenta adivinarlo.", 163);
	// Guardar en la variable intentosMax la cifra que usuario establezca como el máximo de intentos en cada partida
	printf("\n%cCu%cntos intentos crees que necesitar%cs? ", 168, 160, 160);
	scanf("%d", &intentosMax);
	// Esto es una pijada; 0 no es un número de intentos máximos aceptado y el programa se pone borde y te echa
	if (intentosMax == 0)
	{
		printf("\n%cVas de listo%c Pues te quedas sin jugar.", 168, 63);
		getch();
		return 0;
	}
	// Esto es otra pijada; si user introduce alguna cifra máxima de intentos igual o superior a 20, el programa se pone borde (pero no te echa)
	if (intentosMax >= 20)
	{
		printf("%c%d%c %cNo quieres alguno m%cs por si a caso%c En fin, si tu le ves la gracia...\n", 168, intentosMax, 63, 168, 160, 63);
	}
	// En el siguiente bucle, plantearemos diferentes escenarios
	while (numAl != numI)
	{
		intentos++; // Con cada introducción de número, se suma uno a la variable intentos
		printf("\nIntroduce el n%cmero que creas que puede ser: ", 163);
		scanf("%d", &numI);
		// Si el numero de 4 cifras generado aleatoriamente coincide con el número introducido por usuario, usuario ha ganado
		if (numAl == numI)
		{
			// Mostrar el número generado aleatoriamente y los intentos acumulados que ha necesitado usuario
			printf("\n%cHas acertado! El n%cmero aleatorio era %d y solo has necesitado %d intento/s.\n", 173, 163, numAl, intentos);
			break;
		}
		// Si el número de 4 cifras generado aleatoriamente es mayor que el que ha introducido usuario, se mostrará esta pista
		else if (numAl > numI)
		{
			printf("Es mayor que %d...\n", numI);
		}
		// Si el número de 4 cifras generado aleatoriamente es menor que el que ha introducido usuario, se mostrará esta pista
		else
		{
			printf("Es menor que %d...\n", numI);
		}
		// Si la cifra guardada en la variable intentosMax coincide con el número de intentos acumulados en la variable intentos, usuario ha perdido
		if (intentos == intentosMax)
		{
			// Mostrar los intentos máximos que se habían establecido y el número generado aleatoriamente.
			printf("\nHas agotado los %d intentos. El n%cmero era %d.", intentosMax, 163, numAl);
			break;
		}
	}
	getch();
	return 0;
}