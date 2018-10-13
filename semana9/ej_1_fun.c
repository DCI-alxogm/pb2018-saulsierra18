//
//  ej_1_fun.c
//  
//
//  Created by Saul Sierra Luna on 10/10/18.
//

#include "ej_1_fun.h"
#include <stdio.h>

void cuadrado();// Se declara la función para poder utilizarla

int main ()//este es el programa principal
{
    cuadrado();//Invocas a la función que utilizaras
    return 0;
}

void cuadrado()//En este pequeño bloque haces lo que quieres que haga la función 
{
    float x,x2;
    printf("Introduce 1 número\n");
    scanf("%f",&x);
    x2=x*x;
    printf("El cuadrado es:%f\n",x2);
}
