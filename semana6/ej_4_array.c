//
//  ej_5_array.c
//  
//
//  Created by Saul Sierra Luna on 10/09/18.
//

#include "ej_4_array.h"
#include <stdio.h>

int main ()
{
    int i;
    int n;
    printf("Introduzca el número de elementos que desea\n");
    scanf("%i",&n);
    
    for (i=0; i<n; i++)
    {
        float numeros[i];
        scanf("%f",&numeros[i]);
        numeros[i]*=2;
        printf ("%f\n",numeros[i]);
    }
    return 0;
}



