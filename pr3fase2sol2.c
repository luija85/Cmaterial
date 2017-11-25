#include <stdio.h>
#include <time.h>

#define DIM 500
/***********************************************************************************
opcion  -> variable usada para el menu
media	-> almacenar� la media se inicializa en 0, y 
		   guarda la suma de las tiradas para posteriormente dividir
		   entre N 
procede -> variable inicializada en 0, y que toma el valor 1 cuando se 
		   ha guardado por primera vez un vector. Es una variable que 
		   tiene la funci�n de controlar que no se intente hace la media
		   si el vector est� vac�o
tiradas -> vector con las N tiradas aleatorias realizadas

PASOS:

	1. ASIGNO EL VALOR 0 A opcion, PARA OBLIGAR A QUE ENTRE DENTRO DEL BUCLE while
	2. YA EN EL while, IMPRIMO EL MEN� DANDO LAS DISTINTAS OPCIONES, Y PASO POR
	   TECLADO LA OPCI�N QUE ME INTERESA.
	3. ENTRO EN EL switch, QUE COMPARA EL VALOR opcion INTRODUCIDO PARA opcion 
	   CON LOS DISTINTOS CASOS.
	4. SEG�N EL CASO ELEGIDO SE HACE UNA COSA U OTRA, CORRESPONDI�NDOSE CON EL 
	   MEN� INTRODUCIDO.

COMENTARIOS Y PREGUNTAS:
ES IMPORTANTE SABER QU� HACE LA SENTENCIA tirada(tiradas);
************************************************************************************/

/*CABECERA DE LAS FUNCIONES*****/
/*******************************/
void tirada(int tiradas[DIM]);
double media(int tiradas[DIM]);
/*******************************/

int main(void){
	/*DECLARACI�N DE VARIABLES E INICIALIZACI�N*/
	int i,procede=0,tiradas[DIM];
	char opcion=0;
	
	
	/*MEN� REALIZADO CON LA COMBINACI�N while-switch*/
	opcion=0;
	while(opcion!='3'){
		printf("1. Hacer %d tiradas de un dado de 6 caras.\n",DIM);
		printf("2. Obtener y escribir la media artimetica de la ultima ronda de tiradas.\n");
		printf("3. Salir del programa.\n\n");
		printf("ELEGIR OPCION: ");
		scanf(" %c",&opcion);
		
		switch(opcion){
			case '1':
				srand(time(NULL));
				/*LA SIGUIENTE LINEA LLAMA A LA FUNCI�N tirada QUE ES DE TIPO void, Y SE ENCARGA DE 
				ASIGNAR VALORES AL VECTOR tiradas QUE SE HA DECLARADO PREVIAMENTE (en la l�nea 37).*/
				tirada(tiradas);
				printf("RONDA NUEVA GUARDADA.\n");
				procede=1;
				break;
				
			case '2':
				if(procede!=0)
					printf("LA MEDIA DE LAS %d TIRADAS ES %g\n",DIM,media(tiradas));
				else
					printf("NO PROCEDE: AUN NO HAY VECTOR GUARDADO.\n");
				break;
				
			case '3':
				printf("ADIOS.\n");break;
			
			default:
				printf("\nERROR: OPCION INCORRECTA\n");break;
		}
		printf("\n**********************\n\n");
	}
	
	return 0;
}



/*DEFINICI�N DE LAS FUNCIONES****************************************************/
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/

/********************************************************************************/
/*ASIGNACI�N DEL VECTOR DE 500 TIRADAS DE UN DADO MEDIANTE UNA FUNCI�N TIPO void*/
void tirada(int tiradas[DIM]){
	int i;
		for(i=0;i<DIM;i++)
			tiradas[i]=1+(rand()%6);
}


/********************************************************************************/
/*MEDIA DEL VECTOR*/
double media(int tiradas[DIM]){
	int i;
	double media=0;
	for(i=0;i<DIM;i++)
		media=media+tiradas[i];
	return(media/DIM);
}
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/
/********************************************************************************/
