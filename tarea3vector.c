#include <stdio.h>
#define N 5

int main(void){
    double vector[N];
    int entero;
    int i;
    double resultado[N];


    printf("Introduzca los valores del vector:\n");
    for(i=0;i<N;i++){
        printf("Posicion %d\n",i);
        scanf("%lg",&vector[i]);
    }

    printf("Introduce el valor del entero escalar:\n");
    scanf("%d",&entero);

    for(i=0;i<N;i++)
        resultado[i]=vector[i]*entero;

    printf("El vector resultante:\n (    ");
    for(i=0;i<N;i++){
        if(i<(N-1))
            printf(" %g , ",resultado[i]);
        else
            printf(" %g  )",resultado[i]);
    }
    return 0;
}
