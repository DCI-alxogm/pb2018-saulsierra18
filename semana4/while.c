//
//  switch.c
//  
//
//  Created by Saul Sierra Luna on 22/08/18.
//

#include "while.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    int opcion; //Se declara la variable de switch
    double c,f,h;
    double r,t,p,s,q;
    int op=1;
    double rho,theta,v,u,z,pi,piu;
    float x,y;
    while (op==1)
    {
        printf(" Teclear una opción \n");
        printf("(1) para convertir temperaturas\n");// Pides que imprima las 2 opciones que puedes teclear
        printf("(2)para convertir coordenadas\n");
        scanf("%i",&opcion);// Con un scanf le pides al usuario que teclee la opción que quiere usar, este valor se guardara en "opcion"
        switch (opcion)
            { // Se aplica la función switch con opcion como variable
            case 1:
            {
                double c,f,h;
                printf("\t\t\t Conversión de temperatura\n");
                printf("\t\tIngrese la temperatura (en Cº) que quiere convertir a Fº\n");
                scanf("%lf",&c);
                h=(1.8*c)+32;
                printf("Fº=%lf\n",h);
                f=(h-32)*5/9;
                printf("Cº=%lf \n", f);
            }
                break;
            case 2:
                    
                    pi=3.1416;
                    piu=180/pi;
                    
                    printf("\t\tIngrese el valor de x:\n");
                    scanf("%f",&x);
                    printf("\t\tIngrese el valor de y:\n");
                    scanf("%f",&y);
                    
                    rho=sqrt(pow(x,2)+pow(y,2));
                    theta=atan(y/x)*piu;
                    v=(atan(x/y)*piu)+180;
                    u=(atan(x/y)*piu)+180;
                    z=(atan(x/y)*piu)+180;
                    
                    if (x>0 && y>0) {
                        printf("Coordenadas polares=(%lfº,%lfº) Cuadrante= 1\n\n",rho,theta);
                    }
                    else if (x<0 && y>0)
                    {
                        printf("Coordenadas polares=(%lfº,%lfº) Cuadrante= 2\n\n",rho,u);
                    }
                    else if (x<0 && y<0)
                    {
                        printf("Coordenadas polares=(%lfº,%lfº) Cuadrante= 3\n\n",rho,v);
                    }
                    else if (x>0 && y<0)
                    {
                        printf("Coordenadas polares=(%lfº,%lfº) Cuadrante= 4\n\n",rho,z);
                    }
                    

                break;
                default:printf("Opción Invalida\n");
                break;
        }
    
        printf("Teclee (1) si desea hacer otra operación\n");
        printf("Teclee (2) si desea cerrar el programa\n");
        scanf("%i",&op);
    }
       
    
    return 0;
}
