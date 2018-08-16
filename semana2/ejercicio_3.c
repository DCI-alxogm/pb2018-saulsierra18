//
//  ejercicio_3.c
//  
//
//  Created by Saul Sierra Luna on 15/08/18.
//

#include "ejercicio_3.h"
#include <stdio.h>
int main()
{
    //Aquí voy a comenzar mi programa
    float a,b,c,d; // Voy a declarar las variables pero esta vez van a ser flotantes, esto quiere decir que puede tomar valores con punto decimal y con mayor precisio
    double e;
    printf("Dame los digitos\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");//utilizo el scanf para almacenar la información que la persona que utilice el programa me proporcionará y utilizo %f que es para guardar una variable float 
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("d=");
    scanf("%f",&d);
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
