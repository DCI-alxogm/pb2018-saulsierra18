//
//  ej_2_fun.c
//  
//
//  Created by Saul Sierra Luna on 12/10/18.
//

#include "ej_2_fun.h"
#include <stdio.h>
void cuadrado(); //Se declara la funcion sin argumentos de salido

int main () //Aquí esta el programa principal
{
    cuadrado();
    return 0;
}

void cuadrado() //ESte es el bloque donde se realiza las operaciones
{
    float x,x2;
    printf("Introduce un número\n");
    scanf("%f",&x);
    x2=x*x;
    printf("El cuadrado es :%lf\n",x2);
    
}
