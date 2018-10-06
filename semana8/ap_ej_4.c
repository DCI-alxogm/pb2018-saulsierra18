//
//  ap_ej_4.c
//  
//
//  Created by Saul Sierra Luna on 03/10/18.
//

#include "ap_ej_4.h"
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int num,i,*ptr,sum=0;
    ptr=(int*) malloc(num * sizeof(int));//Aquí reservas la memoria que utilizaras usando mallox
    printf("Introduce el númeo de elementos\n");
    scanf("%d",&num);
    if (ptr==NULL)//Este if es recomendado para marcar error cuando la memoria es nula
    {
        printf("¡Error! Memoria no reservada\n");
        exit(0);
    }
    printf("Introduce los elementos del arreglo:\n");
    for (i=0; i<num; i++) {//aplicamos un ciclo for para que se vaya sumando, y que se mueva al siguiente espacio almacenado
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum=%d\n",sum);//AL final imprimos en la pantalla la suma 
    free(ptr);
    return 0;
}
