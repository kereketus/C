/*	Autor: Xenia		Fecha de creación: 11.10.2022  */

/*
Fruta y ExisteFruta
Hacer un programa en C que pida al usuario cuantas frutas quiere
insertar. Posteriormente el usuario rellenará el array con tantas frutas como
haya solicitado el usuario.
Una vez introducidos todos los productos, el programa preguntará al usuario por un
artículo, éste debe indicar si dicho producto se encuentra en el array o no,
mostrando un mensaje por pantalla.
*/

// Esta es la primera versión de los ejercicios 11 y 12 interpretando literalmente los enunciados (y viniendome un poco arriba con la narrativa).
// AVISO: los placeholder %c de los printf, correspondientes a acentos y carácteres especiales, no se muestran en la consola, pero si en el archivo ejecutable.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
	// Definir variables
	int frutE = 0, i, frutVelements, frutBus;
	char respuesta;
	bool existe = false;
	// Contextualizar situación
	printf("- %cBienvenido/a a la fruter%ca%c\n", 173, 161, 33);
	//  Pedir a usuario de qué tamaño será el vector
	printf("- Dime cuantas frutas te caben en la cesta, que las voy trayendo: ");
	scanf("%d", &frutVelements);
	const int defFrutVelements = frutVelements;
	int frutV[defFrutVelements];
	// Mostrar error si se introduce 0 como medida del vector
	if (frutVelements == 0)
	{
		printf("\n- %cNinguna%c %cPara qu%c llevas esa cesta entonces%c Pues nada, vuelve otro d%ca.", 168, 63, 168, 130, 63, 161);
		getch();
		return 0;
	}
	else
		printf("\n- Enseguida te traigo %d frutas, dame un segundo.", frutVelements);
	// Pedir a usuario, de los elementos del vector, cuantos quiere rellenar con valores
	printf("\n- %cC%cmo lo ves%c %cCu%cntas te llevas al final%c Las que quieras, eh, sin presiones: ", 168, 162, 63, 168, 160, 63);
	scanf("%d", &frutE);
	// Mostrar error si se introducen 0 elementos
	if (frutE == 0)
	{
		printf("\n- %cNo te convence ninguna%c Pues nada, espero que la pr%cxima vez encuentres algo de tu agrado.", 168, 63, 162);
		getch();
		return 0;
	}
	// Mostrar error si se introducen más elementos que tamaño tiene el vector
	else if (frutE > frutVelements)
	{
		printf("- %c%d%c %cNo me hab%cas dicho que te cab%can %d frutas en la cesta%c En fin, vuelve otro d%ca con una cesta m%cs grande.", 168, frutE, 63, 168, 161, 161, frutVelements, 63, 161, 160);
		getch();
		return 0;
	}
	else
		printf("\nSe ojearon %d fruta/s, y finalmente se guardaron %d en la cesta.\n", frutVelements, frutE);
	// Rellenar los valores de los elementos guardadas en el vector, de manera secuencial
	for (int i = 0; i < frutE; i++)
	{
		frutV[i] = i + 1;
	}
	printf("La/s fruta/s guardadas en la cesta son: ");
	// Mostrar valores de elementos rellenados
	for (int i = 0; i < frutE; i++)
	{
		if (i + 1 == frutE)
			printf("fruta %d. \n", frutV[i]);
		else if (i + 1 != frutE)
			printf("fruta %d, ", frutV[i]);
	}
	// Buscar valor dentro de los elementos rellenados del vector y preguntar si quiere o no buscar más valores
	do
	{
		printf("\n%cQu%c fruta quieres buscar en la cesta%c fruta ", 168, 130, 63);
		scanf("%d", &frutBus);
		for (int i = 0; i <= frutE; i++)
		{
			if (frutV[i] == frutBus)
			{
				existe = true;
				break;
			}
			else
				existe = false;
		}
		if (existe == true)
			printf("S%c, esa fruta est%c en la cesta.\n", 161, 160);
		else if (existe == false)
			printf("No, esa fruta no est%c en la cesta.\n", 160);
		printf("\n%cQuieres buscar otra fruta en la cesta%c (s: si - n: no): ", 168, 63);
		fflush(stdin);
		scanf("%c", &respuesta);
	} while (respuesta == 's');
	// Fin del programa
	printf("\n- %cGracias%c Hasta la pr%cxima.", 173, 33, 162);
	getch();
	return 0;
}
