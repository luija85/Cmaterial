/*CALCULADORA CON MENÚ*/
#include <stdio.h>
#include <math.h>


int main(void){
	double x, y,total;
	double *memoria;
	int n,k=0;
	int opcion;

	opcion=0;
	while(opcion!=4) {
        if(k==0){
            scanf("%lg",&x);
            memoria=&x;
        }
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            scanf("%lg",&y);
            total=*memoria+y;
            printf("\nTOTAL = %g \n\n",total);
            memoria=&total;
            k=k+1;
            break;
        case 2:
            scanf("%lg",&y);
            total=*memoria-y;
            printf("\nTOTAL = %g \n\n",total);
            memoria=&total;
            k=k+1;
            break;
        case 3:
            scanf("%lg",&y);
            total=*memoria*y;
            printf("\nTOTAL = %g \n\n",total);
            memoria=&total;
            k=k+1;
            break;
        default: printf("ERROR...\n");break;
        }

	}

	return 0;
}
