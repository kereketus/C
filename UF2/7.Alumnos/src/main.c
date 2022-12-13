/*	Autor: Xenia		Fecha de creación: 11.11.2022  */

/*
7. Alumnos
Crea un programa en C que pueda almacenar nombre completo de 10
alumnos.
Definiremos:
MAXALUMNOS 10 y MAXCADENA 20
El array de cadenas se llamará vNombreCompleto[MAXALUMNOS][MAXCADENA]
El programa tendrá las opciones:
• Insertar un alumno: Esta opción va a añadir después del último elemento del
array el nombre completo de un alumno. Entendemos que un alumno está en
un array si coinciden la cadena completa. Debe mostrar mensajes por pantalla
de cada caso. No hace falta controlar si hay 2 nombres iguales.
• Listar alumnos: Esta opción, mostrará un listado con todos los nombres del
array de cadenas. En caso de que no haya ninguno, debe indicar que no hay
alumnos en el array de cadenas.
• Modificar nombre de un alumno (*opcional): Se mostrarán todos los alumnos
que hay introducidos y se pedirá el nombre completo de un alumno que se
quiera modificar, en caso de que exista, se pedirá el nombre completo y este
se sobrescribirá al mencionado. En caso contrario, debe mostrar un mensaje:
El alumno no está dentro de la base de datos. Si hay alumnos con el mismo
nombre, se modificará el primero que se encuentre.
• Salir: El programa finalizará.
*/

// Librerías
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#define MAXCADENA 20  // Vector
#define MAXALUMNOS 10 // Vector
// Prototipos
void pintaMenu();															 // Procedimiento
int pideNumEntreRango(int min, int max);									 // Función
void listarAlumnos(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int numE);	 // Procedimiento
void nuevoAlumno(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int *numE);	 // Procedimiento
void modificarAlumno(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int numE); // Procedimiento
// DENTRO DEL MAIN //
int main(void)
{ // Variables
	int opcion, numE = 0;
	char vNombreCompleto[MAXALUMNOS][MAXCADENA];
	SetConsoleOutputCP(CP_UTF8);
	// Programa principal
	do
	{
		printf("BIENVENIDOS AL PROGRAMA GESTIÓN NOMBRE ALUMNOS:\n");
		pintaMenu();
		opcion = pideNumEntreRango(0, 3);
		if (opcion == 0)
		{
			printf("\nHas salido del programa.\nPresiona una tecla para continuar . . .");
			break;
		}
		switch (opcion)
		{
		case 1:
			nuevoAlumno(vNombreCompleto, &numE);
			break;
		case 2:
			listarAlumnos(vNombreCompleto, numE);
			break;
		case 3:
			listarAlumnos(vNombreCompleto, numE);
			modificarAlumno(vNombreCompleto, numE);
			break;
		}
		getch();
		system("cls");
	} while (opcion != 0);

	getch();
	return 0;
}
// FUERA DEL MAIN //
// Fragmento código procedimiento
void pintaMenu()
{
	printf("\n1.Insertar un alumno\n2.Listar alumnos\n3.Modificar nombre del alumno\n0.Salir\n");
}
// Fragmento código procedimiento
void listarAlumnos(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int numE)
{
	if (numE == 0)
	{
		printf("\nNo hay alumnos almacenados.");
	}
	else
	{
		printf("\nLISTADO DE ALUMNOS:\n");
		for (int i = 0; i < numE; i++)
		{
			printf("%s\n", vNombreCompleto[i]);
		}
		printf("\nTOTAL ALUMNOS: %d", numE);
	}
}
// Fragmento código procedimiento
void nuevoAlumno(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int *numE)
{
	if (*numE == MAXALUMNOS)
		printf("\nNo caben más alumnos.");
	else
	{
		printf("\nIntroduce el nombre del alumno: ");
		fflush(stdin);
		scanf("%s", &vNombreCompleto[*numE]);
		(*numE)++;
		printf("\nAlumno introducido correctamente.");
	}
}
// Fragmento código procedimiento
void modificarAlumno(char vNombreCompleto[MAXALUMNOS][MAXCADENA], int numE)
{
	bool existe = false;
	int i = 0, pos;
	char buscaNombre[MAXCADENA];
	if (numE == 0)
	{
		printf("\n\nAún no hay alumnos almacenados.");
	}
	if (numE != 0)
	{
		printf("\nEscribe el nombre del alumno a eliminar: ");
		fflush(stdin);
		scanf("%s", &buscaNombre);
		while (i < numE && existe == false)
		{
			if (strcmp(buscaNombre, vNombreCompleto[i]) == 0)
			{
				existe = true;
				pos = i;
			}
			i++;
		}
		if (existe == false)
		{
			printf("\nEl alumno no existe.");
		}
		if (existe == true)
		{
			printf("\nAlumno encontrado.");
			printf("\nEscribe el nuevo nombre: ");
			fflush(stdin);
			scanf("%s", vNombreCompleto[pos]);
			printf("\nNombre del alumno modificado.");
		}
	}
}
// Fragmento código función
int pideNumEntreRango(int min, int max)
{
	int opcion;
	printf("\nSelecciona una opción: ");
	scanf("%d", &opcion);
	while (opcion < 0 || opcion > 3)
	{
		printf("\nEl número no está dentro del rango.\n");
		printf("\nSelecciona una opción entre 0 y 3: ");
		scanf("%d", &opcion);
	}
	return (opcion);
}