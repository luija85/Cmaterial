/*  PROGRAMACI?N 1 - CURSO 2017-2018 - PR?CTICA 4 - tarea.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lectura.h"
#include "tarea.h"

/* PROTOPTIPOS DE FUNCIONES INTERNAS DEL M?DULO TAREA */

/*
 * Funci?n: buscarTareaEnTareasAsignadas
 *      Dado el nombre de una tarea, busca si ya existe en las tareas Asignadas.
 * Par?metros de entrada:
 *        tareasAsignadas: tTareasAsignadas.
 *        nombreTarea: tNombreTarea. Pasado por referencia. Nombre de la tarea a buscar.
 * Par?metro de salida:
 *      Valor devuelto por la funci?n:
 *        0 La tarea no existe en tareasAsignadas
 *        1 La tarea se ha localizado
 */

int buscarTareaEnTareasAsignadas (tTareasAsignadas tareasAsignadas, const tNombreTarea nombreTarea);


/*
 * Funcion: crearNombreTarea
 *      Crea la crear el nombre la la tarea con formato TX.Y
 *      siendo X el numero de paquete de trabajo e Y el numero de tarea.
 *      Para crearlo transforma X e Y en sendas cadenas de caracteres y concatena
 *      los distintos caracteres que forman el nombre
 * Par?metro de entrada:
 *      numeroPT: numero del paquete de trabajo al que pertenece la tarea.
 *      numeroTarea: numero de la tarea.
 * Par?metro de salida:
 *      nombreTarea: Pasado por referencia. Nombre tarea tipo TX.Y
 */
void crearnombreTarea(tNombreTarea nombreTarea, int numeroTarea, int numeroPT);



/* C?DIGO DE FUNCIONES EXTERNAS DEL M?DULO TAREA */


void inicializarTareasAsignadas( tTareasAsignadas *tareasAsignadas)
{

}


int aniadirTarea (tTareasAsignadas *tareasAsignadas)
{

}


void listarTareasAsignadas (tTareasAsignadas tareasAsignadas)
{

}


/* C?DIGO DE FUNCIONES INTERNAS DEL M?DULO TAREA */


int buscarTareaEnTareasAsignadas (tTareasAsignadas tareasAsignadas, const tNombreTarea nombreTarea)
{

}


void crearnombreTarea(tNombreTarea nombreTarea, int numeroPT, int numeroTarea)
{

}