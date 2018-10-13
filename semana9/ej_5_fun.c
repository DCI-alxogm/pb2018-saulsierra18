//
//  ej_5_fun.c
//  
//
//  Created by Saul Sierra Luna on 10/10/18.
//

#include "ej_5_fun.h"
#include <stdio.h>

float cuadrado();

int main ()
{
    float x2;
    x2=cuadrado();
    printf("El cuadrado es :%lf\n",x2);
    return 0;
}
float cuadrado()
{
   float x,x2;
    printf("Introduce un número\n");
    scanf("%f",&x);
    x2=x*x;
    return x2;
}
