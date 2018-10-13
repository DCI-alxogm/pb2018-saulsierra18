//
//  ej_4_fun.c
//  
//
//  Created by Saul Sierra Luna on 12/10/18.
//

#include "ej_4_fun.h"
#include <stdio.h>

void cuadrado(void); //Declaramos la función que utilizaremos en este caso tiene un argumento de entrada pero no va a regresar nada
int main ()//Este es el programa principal
{
    
    cuadrado();
    return 0;
}

void cuadrado(void)//Programa secundario que realizara todo
{
    float x,x2;
    printf("Introduce un número\n");
    scanf("%f",&x);
    x2=x*x;
    printf("El cuadrado es :%f\n",x2);
    
}

