#include <stdio.h>

int main(){
    int numero;


    printf("INTRODUCIR ENTERO: ");
    scanf("%d",&numero);

    /*CON UN BUCLE, VAMOS SELECCIONANDO E IMPRIMIENDO LOS PARES
      HASTA LLEGAR A 0*/
    printf("\n\nLOS NUMEROS PARES POR DEBAJO DE %d SON:\n",numero);
    while(numero>0){
        if(numero%2==0)
            printf("%d\n",numero);
        numero=numero-1;
    }
return 0;
}
