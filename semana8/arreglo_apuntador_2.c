//
//  arreglo_apuntador_2.c
//  
//
//  Created by Saul Sierra Luna on 03/10/18.
//

#include "arreglo_apuntador_2.h"
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,sum=0;
    int *num;
    printf("Introduce 6 números enteros:\n"); //En este programa al contrario del anterior utilizamos un apuntador y lo manipulamos como arreglo
    num=(int*) malloc(num*sizeof(int));  //Se declara la memoria dinámica
    for (i=0; i<6; i++) {
        scanf("%d",&num[i]); //Se escanean 6 datos que se almacenan en la memoria dinamica  y despue sse suman
        sum+=num[i];
    }
    printf("SUMA=%d\n",sum);// Al final se imprime la suma de los datos almaecnados en la memoria 
    return 0;
}
