//
//  ejemplo3.c
//  
//
//  Created by Saul Sierra Luna on 05/09/18.
//

#include "ejemplo3.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    float res;
    int n=3,k,j;
    for (j=0; j<n; j++) // Se inicia un ciclo for que nos dice que la variable "j" empezara a contar desde 0 hasta un valor menor a "n" y que se va  incrementar 1, el ciclo se repetira "n^2"
    {
       
        for (k=0; k<n; k++) //Hay un ciclo for dentro del ciclo anterior que nos indica que la variable "k" empezando de 0 y hasta un número "n" repetira el ciclo aumentando 1
        {
            res=j*k*1.0;
            printf("%i %i %f\n ",j,k,res);
        }
    }
    return 0;
}
