/*CALCULADORA CON MENÚ*/
#include <stdio.h>
#include <math.h>


int main(void){
	double x, y,total;
	double *memoria;
	int k=0;/*LA VARIABLE k DETECTA SI ES LA PRIMERA OPERACION O NO*/
	char opcion=0;/*LAS POSIBLES OPCIONES SON +,-,*,/ Y q PARA SALIR */

	while(opcion!='q') {
        if(k==0){
            scanf("%lg",&x);
            memoria=&x;
        }
        scanf(" %c",&opcion);
        switch(opcion){
        case '+':
            scanf("%lg",&y);
            total=*memoria+y;
            memoria=&total;
            k=k+1;
            break;
        case '-':
            scanf("%lg",&y);
            total=*memoria-y;
            memoria=&total;
            k=k+1;
            break;
        case '*':
            scanf("%lg",&y);
            total=*memoria*y;
            memoria=&total;
            k=k+1;
            break;
        case '/':
            scanf("%lg",&y);
            total=*memoria/y;
            memoria=&total;
            k=k+1;
            break;
        case 'q':
            printf("\n\nADIOS\n\n");break;
        default: printf("ERROR...\n");break;
        }

        printf("\nTOTAL = %g \n",total);
	}
	return 0;
}
