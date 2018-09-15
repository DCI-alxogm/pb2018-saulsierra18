//
//  ev_fun.c
//  
//
//  Created by Saul Sierra Luna on 05/09/18.
//

#include "ev_fun2.h"
#include <stdio.h>
#include <math.h>

int main ()
{
    FILE *archivo;
    float log_,exp_,sen_,cos_,raiz,j,m,l;
    int n;
    float PI=(3.1416)/180;
    printf("Proporcione un valor inicial\n");
    scanf("%f",&m);
    printf("Proporcione un valor final\n");
    scanf("%f",&l);
    if (m<l)
    {
    printf("Proporcione las repeticiones\n");
    scanf("%i",&n);
        j=m;
    for (j=m; j<n; j++) {
        exp_=exp(j);
        log_=log(j);
        sen_=sin(j*PI);
        cos_=cos(j*PI);
        raiz=sqrt(j);
        
        archivo=fopen("fun_ev2.txt","w");
        fprintf(archivo,"%lf \t %lf \t %lf \t %lf \t %lf\n",exp_,log_,sen_,cos_,raiz);
        fclose(archivo);
        
    }
        
    }
    else
    {
        printf("Intervalo incorrecto(número negativo)\n");
    }
    return 0;
}
