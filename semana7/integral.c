//
//  integral.c
//  
//
//  Created by Saul Sierra Luna on 19/09/18.
//

#include "integral.h"
#include <stdio.h>
#include <math.h>

int main ()
{
    FILE *archivo;
    double a,b,c,x,N,delta,fun,fa,fp;
    archivo=fopen("potencia.rtf","r");
    fscanf(archivo,"%lf\t%lf\t%lf\t%lf",&a,&b,&c,&N);
    delta=(b-c)/N;
    fa=pow(c,a);
    x=c;
    for (x=c; x<=b; x++)
    {
        fun=pow(x,a);
        fp=(fa+fun)/2;
         x+=delta;
        printf("%f.- \t%f\n",x,fun);
       

    }
}

