//
//  coordenadas.c
//  
//
//  Created by Saul Sierra Luna on 20/08/18.
//

#include "coordenadas.h"
#include <stdio.h>
#include <math.h>

int main ()
{
    double x,y,z,r,t,p,s,q,u; //Defini las variables en souble para tener decimales en mis calculos
    printf("\t\t\t Programa para convertir coordenadas polares a esféricas\n\n\n");
    printf("Porfavor ingrese las coordenadas que desea convertir\n");
    printf("x=");
    scanf("%lf",&x);
    printf("y=");
    scanf("%lf",&y);
    printf("z=");
    scanf("%lf",&z);
    r=sqrt(pow(x,2)+pow(y,2)+pow(x,2));
    t=acos(z/r);
    p=atan(y/x);
    printf("(%lfº,%lfº,%lfº)\n\n",r,t,p);
    s=r*sin(p)*cos(t);
    q=r*cos(p)*sin(t);
    u=r*cos(p);
    printf("(%lf,%lf,%lf)\n\n",s,q,u);
    
    
}
