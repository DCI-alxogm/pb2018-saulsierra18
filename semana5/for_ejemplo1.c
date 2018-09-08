//
//  for_ejemplo1.c
//  
//
//  Created by Saul Sierra Luna on 03/09/18.
//

#include "for_ejemplo1.h"
#include <stdio.h>
int main ()
{
    
    float temp_c,temp_k;
    float TP_C, f, delta;
    int n,i,op;
   
    
    printf("\t\t Este es un programa para calcular diferencias de temperaturas\n\n");
    printf("Ingrese la Temperatura inicial\n");
    scanf("%f",&TP_C);
    printf("Ingrese la Temperatura final\n");
    scanf("%f",&f);
    printf("Ingrese número de repeticiones\n");
    scanf("%i",&n);
    
    while(TP_C>n)
    {
    
    delta=(f-TP_C)/n;
    for(i=0;i<n;i++)
    {
        temp_k=temp_c+273.15;
        printf("%f %f\n",temp_c,temp_k);
        temp_c=temp_c+delta;
    }
    }
    printf("Si desea reiniciar el programa presione (1)\n");
        printf("Si desea cerrar el programa oprima (2)\n");
        scanf("%i",&op);
    
    
    
    
    return 0;
}
