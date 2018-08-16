//
//  ejercicio_2.c
//  
//
//  Created by Saul Sierra Luna on 15/08/18.
//

#include "ejercicio_2.h"
#include <stdio.h>

int main()
{
    //Aquí voy a comenzar mi programa
    int a,b,c,d; // Primero declaro las variables y el tipo de variables que voy a utilizar, para los 4 datos que me van a otorgar utilizo int y para el resultado utilizo double.
    double e;
    printf("Dame los digitos\n");
    printf("a=");
    scanf("%i",&a);
    printf("b=");//utilizo el scanf para almacenar la información que la persona que utilice el programa me proporcionará
    scanf("%i",&b);
    printf("c=");
    scanf("%i",&c);
    printf("d=");
    scanf("%i",&d);
    printf("\t\tResultados:\n\n");
    e=(a+b)*c/d; //Aquí realizo las operaciones aritmeticas que quiero imprimir en la pantalla
    printf("(a+b)+c/d=%f\n\n",e);
    e=((a+b)*c)/d;
    printf("((a+b)*c)/d=%f\n\n",e);
    e=(a+b)*c/d;
    printf("(a+b)+c/d=%f\n\n",e);
    e=a+(b*c)/d;
    printf("a+(b*c)/d=%f\n",e);// si cambia en relidad ya que el orden de las operaciones hace que en algunos casos den cosas diferentes , ya que la computadora realiza las operaciones de acuerdo a la jerarquia de operaciones, de esta manera si acomodas de una manera erronea tu operación puede que no te de el resultado deseado
    return 0;
    
}
