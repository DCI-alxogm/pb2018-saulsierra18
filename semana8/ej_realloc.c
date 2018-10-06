//
//  ej_realloc.c
//  
//
//  Created by Saul Sierra Luna on 05/10/18.
//

#include "ej_realloc.h"
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr, i, n1, n2;
    printf("Introduce el número de elementos de n1:\n");
    scanf("%d",&n1);
    printf("Introduce el nuevo número de elementos n2:\n"); //Se introducen las 2 matrices de elementos
    scanf("%d",&n2);
    ptr=(int*)malloc(n1*sizeof(int)); //utilizamos memoria dinámica malloc
    printf("Dirección de la memoria reservada:\n");
    for (i=0; i<n1; i++)
    {
        printf("%x\t\n",ptr+i);
    }
    ptr=realloc(ptr,n2); //Utilizamos realloc para ajustar el numero de elementos de los apuntadores
    for (i=0; i<n2; i++) {
        printf("%u\t\n", ptr+i);
    }
    free(ptr);
    return 0;
}
