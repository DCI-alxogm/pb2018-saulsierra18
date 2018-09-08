//
//  cod_bin.c
//  
//
//  Created by Saul Sierra Luna on 06/09/18.
//

#include "cod_bin.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    int opcion;
    int decimal,residuo,j,x,y,z,op;
    
    printf("\t\t\t Programa de conversión de números binarios\n\n\n");
    printf("Conversión número binario a decimales(1)\n");
    printf("Conversión número decimal a binario(2)\n");
    scanf("%i",&opcion);
    x=0;
    y=1;
    z=0;
    
    switch (opcion)
    {
            int binario,a,b,c,d,e;
        case 1:
            printf("Introduzca el valor en base binario\n");
            binario=0;
            while ((binario==0)||(binario==1))
            {
                scanf("%i",&binario);
                if ((binario==0)||(binario==1))
                {
                    y=1;
                }
                else
                {
                    y=0;
                }
                x=x+binario*(y)*(pow(2,z));
                z++;
            }
            printf("El valor en base decimal es el siguiente %i\n\n",x);
            
            break;
case 2:
    printf("Introduzca el valor en base decimal\n");
    scanf("%i",&decimal);
    while (decimal!=0)
    {
        residuo=decimal%2;
        decimal=decimal/2;
        if (residuo==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    break;
default:printf("Número invalido");
    }
        
return 0;
    
}
