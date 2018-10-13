//
//  prom.c
//  
//
//  Created by Saul Sierra Luna on 12/10/18.
//

#include "prom.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    FILE *tabla;
    double *n,avg,des,s=0;
    int count,i;
    char x[20];
    tabla=fopen("promedio.txt","r");
    while (fgets(x,30,tabla)!=NULL)
    {
        count++;
    }
    fclose(tabla);
    tabla=fopen("promedio.txt","r");
    n=(double*)malloc(count*sizeof(double));
    for (i=0; i<count; i++)
    {
        fscanf(tabla,"%lf",n+i);
        s+=*(n+i);
    }
    fclose(tabla);
    avg=(s)/count;
    des=sqrt(s);
    printf("El promedio es el siguiente\n");
    printf("%lf\n",avg);
    printf("La Desviación estándar es la siguiente\n");
    printf("%f\n",des);
    return 0;
    
    
}

