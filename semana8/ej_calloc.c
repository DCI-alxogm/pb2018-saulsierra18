//
//  ej_calloc.c
//  
//
//  Created by Saul Sierra Luna on 03/10/18.
//

#include "ej_calloc.h"
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int num,i,*ptr, sum=0;//Declaramos el apuntador *ptr
    printf("Introduce el número de elementos:\n");
    scanf("%d",&num);
    
    ptr=(int*) calloc(num,sizeof(int)); //Utilizamos calloc para el almacenamiento de memoria dinamica
    if (ptr==NULL)
    {
        printf("¡Error! memoria no reservada");
        exit(0);
        
    }
    printf("Introduce loa elementos del arreglo:\n"); //Se suma los numeros que ingresaste en incremento
    for (i=0; i<num; i++) {
        scanf("%d\n",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Suma=%d",sum); //imprime la suma 
    free(ptr);
    return 0;
}
