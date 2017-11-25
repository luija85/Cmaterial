#include <stdio.h>
#include "tarea.h"
#include "lectura.h"


/* PROTOPTIPOS DE FUNCIONES INTERNAS DEL MÓDULO PRINCIPAL DE LA PRÁCTICA 4 FASE 1*/

/*
 * Función encabezado
 *      Pantalla de entrada a la aplicacion.
 * Parámetros de entrada: ninguno.
 * Parámetros de salida: ninguno.
 */
void encabezado (void);

/*
 * Función menu
 *		Presenta el menú de opciones posibles y lee una opción.
 * Parámetros de entrada: ninguno.
 * Parámetro de salida:
 *	Valor Entero. Resultado la función. La opción leída.
 */
int menu (void);

/* CÓDIGO DE LA FUNCIÓN PRINCIPAL DEL MÓDULO PRINCIPAL DE LA PRÁCTICA 4 FASE 1*/

int main (void)
{
	tTareasAsignadas tareasAsignadas; /*Tareas asignadas*/
	int opcion; /*Opción del menú elegida*/
	int tareaAniadida; /*Recoge el valor devuleto por aniadirTarea*/

	encabezado();
	inicializarTareasAsignadas(&tareasAsignadas);

	do
	{
		opcion=menu();
		switch (opcion)
		{
			case 1:	printf ("\nAGREGAR UNA TAREA A LAS TAREAS ASIGNADAS\n");
				tareaAniadida=aniadirTarea(&tareasAsignadas);
				if (tareaAniadida==1)
                    printf("\nLa tarea se ha agregado correctamente");
                else if (tareaAniadida==2)
                        printf("\nNo se ha podido agregar la tarea por estar la lista de tareas asignadas llena");
                    else
                        printf("\nNo se ha podido agregar la tarea porque ya estaba en la lista");
				break;
			case 2: printf ("\nLISTAR LAS TAREAS ASIGNADAS\n");
				listarTareasAsignadas(tareasAsignadas);
				break;
			case 3: printf ("\nAdios. Gracias por utilizar el programa\n");
				break;
			default: printf ("\nNo es una opcion correcta. Por favor, introduzca un numero entre 1 y 3.\n");
		}
	} while (opcion!=3);

	return 0;

}

/* CÓDIGO DE FUNCIONES INTERNAS DEL MÓDULO PRINCIPAL DE LA PRÁCTICA 4 FASE 1*/

void encabezado (void)
{
   	printf ( "\n\n\n");
   	printf ( "  ***********************************************************************\n");
   	printf ( "  *  PROGRAMACION I. CURSO 2017-2018. PRACTICA 4 - FASE 1               *\n");
   	printf ( "  *  GESTION DE UNA LISTA DE TAREAS ASIGNADAS A UN PROYECTO             *\n");
   	printf ( "  *  Este es un programa de demostracion para que el alumno lo utilice  *\n");
   	printf ( "  *  como referencia para el desarrollo del suyo.                       *\n");
	printf ( "  *  Para que el alumno pueda comprobar su funcionalidad el numero      *\n");
	printf ( "  *  maximo de tareas es 3.                                             *\n");
	printf ( "  *  El interfaz de usuario que aqui se presenta es orientativo para    *\n");
	printf ( "  *  el alumno. No asi la funcionalidad, que ha de ser la que se        *\n");
   	printf ( "  *  indicada en el enunciado de la practica.                           *\n");
   	printf ( "  ***********************************************************************\n\n");
}

int menu (void)
{
	int opcion;

	printf ("\n\n  **************************** Opciones *********************************");
	printf ("\n  *   1. Agregar una tarea a las tareas asignadas                       *");
	printf ("\n  *   2. Listar las tareas asignadas                                    *");
	printf ("\n  *   3. Salir                                                          *");
	printf ("\n  ***********************************************************************");

	leer_entero ( "\nElija opcion", &opcion );
	return opcion;
}


