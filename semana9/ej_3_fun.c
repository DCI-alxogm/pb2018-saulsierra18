//
//  ej_3_fun.c
//  
//
//  Created by Saul Sierra Luna on 12/10/18.
//

#include "ej_3_fun.h"
#include <stdio.h>
float cuadrado(float h);//Declaras la función solo que esta vez le agregas un argumento de entrada que es un float h

int main ()  //esta vez en el programa principal se desarrolla todas las operaciones excepto la de elevar al cuadrado
{
    float x,x2;
    printf("Introduce un número\n");
    scanf("%f",&x);
    x2=cuadrado(x);
    printf("El cuadrado es :%lf\n",x2);
    return 0;
}
float cuadrado(float h)//En la funcion de cuadrado pedimos que regrese a el programa principal la multiplicacion de h*h 
{
    return h*h;
}

