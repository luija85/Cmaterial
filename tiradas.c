#include <stdio.h>
#include <stdlib.h>
#define DIM 500

int main(void){
    int tirada[DIM];
    int i;

    for(i=0;i<DIM;i++)
        tirada[i]=1+(rand()%6);

    printf("La secuencia de tiradas es: ");
    for(i=1;i<DIM;i++)
        printf("%d\t",tirada[i]);

    printf("\n");
    return 0;
}
