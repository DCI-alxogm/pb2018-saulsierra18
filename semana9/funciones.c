//
//  funciones.c
//  
//
//  Created by Saul Sierra Luna on 10/10/18.
//

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void raiz();
float valor_cos();

int compara( int a, int b );

int main()
{
    float x,y,z,x2;
    raiz();
    x2=valor_cos();
    printf("El cos de x es=:%lf\n",x2);
    int num1, num2;
    int resultado;
    
    printf( "Introduzca dos números: " );
    scanf( "%i %i", &num1, &num2 );
    
    resultado = compara( num1, num2 );
    
    printf( "El mayor de los dos es %i\n", resultado );
    
    
    return 0;
}
void raiz()
{
    float x,r;
    printf("Dame un valor de x\n");
    scanf("%f",&x);
    r=sqrt(x);
    printf("Este es el valor de la raíz cuadradra %f\n",r);
}
float valor_cos()
{
    float x,x2;
    printf("Introduce un número\n");
    scanf("%f",&x);
   x2=cos(x);
    return x2;
    
    
}
int compara( int a, int b )     /* Metemos los parámetros a y b a la función */
{
    int mayor;        /* Esta función define su propia variable;
                       esta variable sólo se puede usar aquí */
    if ( a>b )
    mayor = a;
    else
    mayor = b;
    
    return mayor;
}
