//
//  coordenas_2.c
//  
//
//  Created by Saul Sierra Luna on 24/08/18.
//

#include "coordenas_2.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    double rho,theta,v,u,z,pi,piu;
    float x,y;
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
    
        
    return 0;
    
    
}
