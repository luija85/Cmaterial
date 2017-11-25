#include <stdio.h>
#include <time.h>
#include <math.h>


void obtenerRonda(int ronda[ ],int n);
double calcularMedia(int ronda[ ],int n);
double calcularVarianza(int vector[ ],int n);
double calcularDesvTipica(int ronda[ ],int n);
void obtenerRondaTrucada(int ronda[ ],int n);

/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/

int main(void){
    const int DIM=500;
    int ronda[DIM],control=0;
    char opcion;
    double media,varianza,desvtip;

    do{
        printf("1.Generar tiradas\n2.Media\n3.Varianza\n4.Desviacion tipica");
        printf("\n5.Generar tiradas de dado trucado.\n6.Salir");
        printf("\n\nElegir opcion: ");
        scanf(" %c",&opcion);
        printf("\n");

        srand(time(NULL));

        switch(opcion){
            case '1':
                obtenerRonda(ronda,DIM);
                control=1;
                break;
            case '2':
                if(control==0)
                    printf("NO PROCEDE.\n\n");
                else{
                    media=calcularMedia(ronda,DIM);
                    printf("Media = %g\n\n",media);
                    }
                break;
            case '3':
                if(control==0)
                    printf("NO PROCEDE.\n\n");
                else{
                    varianza=calcularVarianza(ronda,DIM);
                    printf("Varianza = %g\n\n",varianza);
                    }
                break;
            case '4':
                if(control==0)
                    printf("NO PROCEDE.\n\n");
                else{
                    desvtip=calcularDesvTipica(ronda,DIM);
                    printf("Desviacion tipica = %g\n\n",desvtip);
                    }
                break;
            case '5':
                obtenerRondaTrucada(ronda,DIM);
                control=1;
                break;
            case '6':
                printf("ADIOS.\n");
                break;
            default: printf("ERROR");
                break;
        }

    }while(opcion!='6');

    return 0;
}


/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/
/***************************************************/

/* Función: obtenerRonda
 *  Devuelve el valor de la ronda de tiradas de un dado de 6 caras.
 *  Parámetros de entrada:
 *      n: Número de tiradas de la ronda. Paso del parámetro por valor.
 *  Precondiciones:
 *      no tiene
 *  Parámetros de salida:
 *      ronda: Array que contiene la ronda de tiradas obtenida.
 *             Paso del parámetro por referencia.
 */

void obtenerRonda(int ronda[ ],int n)
{
    int i;
    for (i=0; i<n; i++)
        ronda[i]=1+(rand()%6);
        printf("\n\nTirada guardada\n\n");
}

/* Función: calcularMedia
 *  Devuelve la media aritmética de la ronda de tiradas dada.
 *  Parámetros de entrada:
 *      ronda: Array que contiene la ronda de tiradas de la que se desea
 *             obtener su media aritmética. Paso del parámetro por referencia.
 *      n: Número de tiradas de la ronda. Paso del parámetro por valor.
 *  Precondiciones:
 *      no tiene
 *  Parámetros de salida:
 *      media: media aritmética. Valor devuelto por la función
 */

double calcularMedia(int ronda[ ], int n){
    int i;
    double media=0;
        for(i=0; i<n; i++)
            media=media+ronda[i];
    media=(media/n);
    return(media);
}

 /* Función: calcularVarianza
 *  Devuelve la varianza de la ronda de tiradas dada.
 *  Parámetros de entrada:
 *      ronda: Array que contiene la ronda de tiradas de la que se desea
 *             obtener su media aritmética. Paso del parámetro por referencia.
 *      n: Número de tiradas de la ronda. Paso del parámetro por valor.
 *  Precondiciones:
 *      no tiene
 *  Parámetros de salida:
 *      varianza: varianza. Valor devuelto por la función
 */

double calcularVarianza(int ronda[],int n){
    int i;
    double varianza=0,promedio;
    promedio=calcularMedia(ronda,n);
    for(i=0;i<n;i++){
        varianza=varianza+pow(ronda[i]-promedio,2);
    }
    varianza=varianza/n;
    return varianza;
}

 /* Función: calcularDesvTipica
 *  Devuelve la desviación típica de la ronda de tiradas dada.
 *  Parámetros de entrada:
 *      ronda: Array que contiene la ronda de tiradas de la que se desea
 *             obtener su media aritmética. Paso del parámetro por referencia.
 *      n: Número de tiradas de la ronda. Paso del parámetro por valor.
 *  Precondiciones:
 *      no tiene
 *  Parámetros de salida:
 *      desvtip: desvtip. Valor devuelto por la función
 */

double calcularDesvTipica(int ronda[],int n){
    double desvtip;
    desvtip = pow(calcularVarianza(ronda,n),0.5);
    return desvtip;
}


/* Función: obtenerRondaTrucada
 *  Devuelve el valor de la ronda de tiradas de un dado de 6 caras trucado.
 *  Parámetros de entrada:
 *      n: Número de tiradas de la ronda. Paso del parámetro por valor.
 *  Precondiciones:
 *      no tiene
 *  Parámetros de salida:
 *      ronda: Array que contiene la ronda de tiradas obtenida.
 *             Paso del parámetro por referencia.
 */

void obtenerRondaTrucada(int ronda[ ],int n)
{
    int i,valor;
    for (i=0; i<n; i++){
        valor=1+(rand()%6);
        if(valor<5)
            ronda[i]=valor;
        else if((valor>=5) & (valor<10))
            ronda[i]=5;
        else
            ronda[i]=6;
    }
        printf("\n\nTirada guardada\n\n");
}
