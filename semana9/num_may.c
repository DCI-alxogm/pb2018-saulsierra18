//
//  num_may.c
//  
//
//  Created by Saul Sierra Luna on 10/10/18.
//

#include "num_may.h"
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *archivo;
    int MA=0,p,i,memoria;
    char a[20];
    float mxm=-10000,*n,*s;
    
    archivo=fopen("num_maximo.txt","r");
    while (fgets(a,20,archivo)!=NULL)
    {
        MA++;
    }
    fclose(archivo);
    
     archivo=fopen("num_maximo.txt","r");
    n=(float*)malloc(MA*sizeof(float));
    for (i=0; i<MA; i++)
    {
        fscanf(archivo,"%f",n+i);
        if(*(n+i)>mxm)
        {
            mxm=*(n+i);
            memoria=i+1;
            s=n;
        }
    }
    fclose(archivo);
    printf("El número mayor es el siguiente\n");
    printf("%f\n",mxm);
    printf("La ubicación en la memoria es la siguiente\n");
    printf("%x\n",s);
    free(n);
    return 0;
}
