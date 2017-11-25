#ifndef TAREA_H_INCLUDED
#define TAREA_H_INCLUDED

#define MAX_NOMBRE_TAREA 7
#define MAX_TAREAS 3

typedef char tNombreTarea[MAX_NOMBRE_TAREA];

typedef struct {
	tNombreTarea nombreTarea; /* Nombre de la tarea */
	double mesesTarea; /* Duraci?n en meses de la tarea */
	int numeroWP; /*Numero del parquete de trabajo al que pertence la tarea*/
} tTarea;


typedef struct {
    tTarea tareas[MAX_TAREAS]; /* Array de tareas asignadas */
    int numeroTareasAsignadas;   /* N?mero de tareas asignadas que hay en la lista */
} tTareasAsignadas;


/* PROTOPTIPOS DE FUNCIONES EXTERNAS DEL M?DULO TAREA */


/*
 * Funci?n: inicializarTareasAsignadas
 *	Inicializa la estructura que contiene el array de tareas asignadas poniendo a 0 el n?mero de tareas asignadas.
 * Par?metro salida:
 *	tareasAsignadas: tTareasAsignadas. Pasado por referencia. Tareas asignadas que se inicializa.
 */
extern void inicializarTareasAsignadas( tTareasAsignadas *tareasAsignadas);



 /*
 * Funci?n aniadirTarea
 *      Si hay sitio para a?adir una nueva tarea, pide que se introduzca desde la entrada est?ndar el n?mero del paquete de trabajo
 *      y el n?mero de la tarea, compone el nombre y la busca entre las tareas Asignadas.
 *      Si no est?, pide la cantidad de meses que dura el trabajo de esa tarea y
 *	guarda en la estructuctura el nombre que se ha compuesto, los meses y el n?mero del paquete de trabajo.
 * Par?metros de entrada:
 *      Ninguno.
 * Par?metro de entrada/salida:
 *      tareasAsignadas: lista de tareas asignadas a la que se a?ade la tarea.
 * Par?metros de salida.
 *      Error. Tipo entero. Valor devuelto por la funci?n:
 *          1 si se ha podido a?adir la tarea
 *          2 si no hay sitio para a?adir esta tarea
 *          3 si no se ha a?adido la tarea porque ya estaba en la lista
 */
extern int aniadirTarea (tTareasAsignadas *tareasAsignadas);



/*
 * Funci?n listarTareasAsignadas
 *      Presenta por pantalla todas las tareas, mostrando:
 *          - N?mero total de tareas asignadas.
 *          - Listado de tareas y duraci?n, siguiendo el formato del ejemplo.
 *          - N?mero total de meses de trabajo de las tareas asignadas.
 * Parametros de entrada:
 *      tareasAsignadas: tTareasAsignadas. Tareas asignadas que se listan.
 * Par?metro de salida: ninguno.
 */
extern void listarTareasAsignadas (tTareasAsignadas tareasAsignadas);



#endif // TAREA_H_INCLUDED