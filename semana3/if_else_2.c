//
//  if_else_2.c
//  
//
//  Created by Saul Sierra Luna on 24/08/18.
//

#include "if_else_2.h"
#include <stdio.h>

int main ()
{
    int no1,no2;// Declaramos los dos valores que queremos analizar
    printf("Introduzca dos números enteros:\n");
    scanf("%i",&no1);//Solicitamos al usuario que nos proporcione dichos valores que neceista analizar
    scanf("%i",&no2);
    if (no1==no2) { //Usamos la funcion if para decir que si el valor de la variable no1 es igual a la variables no2 nos imprima en la pantalla que son iguales
        printf("Resultado: %d=%d\n",no1,no2);
    }
    else if (no1>no2) // tambien dejamos especificado con la funcion else if que si el valor no1 es mayor al valor no 2 nos imprima en la pantalla que el valor no1 es igual al  valor no2
    {
        printf("Resultado: %d>%d\n",no1,no2);
    }
    else //Como último dejamos que si la variable no2 es mayor a la variable no1 nos imprima en la pantalla que no1 es menos a no2
    {
        printf("Resultado: %d<%d\n",no1,no2);
    
    }
    return 0;
}
