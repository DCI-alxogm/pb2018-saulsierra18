//
//  coordenadas_temperatura.c
//  
//
//  Created by Saul Sierra Luna on 24/08/18.
//

#include "coordenadas_temperatura.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    int opcion; //Se declara la variable de switch
    double c,f,h;
    double x,y,z,r,t,p,s,q,u;
    printf(" Teclear una opción \n");
    printf("(1) para convertir temperaturas\n");// Pides que imprima las 2 opciones que puedes teclear
    printf("(2)para convertir coordenadas\n");
    
    scanf("%i",&opcion);// Con un scanf le pides al usuario que teclee la opción que quiere usar, este valor se guardara en "opcion"
    
    switch (opcion) { // Se aplica la función switch con opcion como variable
        case 1:
            
        {
            double c,f,h;
            printf("\t\t\t Conversión de temperatura\n");
            printf("\t\tIngrese la temperatura (en Cº) que quiere convertir a Fº\n");
            scanf("%lf",&c);
            h=(1.8*c)+32;
            printf("Fº=%lf\n",h);
            f=(h-32)*.5555555556;
            printf("Cº=%lf \n", f);
        }

            break;
        case 2:
           
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
            break;
            
        default:printf("Opción Invalida\n");
            break;
    }
    return 0;
}
