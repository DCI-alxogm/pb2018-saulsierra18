//
//  exp.c
//  
//
//  Created by Saul Sierra Luna on 20/08/18.
//

#include "exp.h"
#include <stdio.h>
#include <math.h> // Se debe incluir esta libreria para poder tener las funciones "cos" "sin"

int main ()
{
    double y,x,e,f,pi,rad; // Defino las variables double para poder tener resultados mas precisos
    printf("\t\t\t Programa para ecuaciones trigonométricas\n\n\n");
    printf("Proporcione el valor de x\n"); //le pido a usuario que me de el valor de la variablen "x"
    scanf("%lf",&x);
    pi=3.1416; //puedo definir pi desde un principio
    rad=(pi*x)/180; // como se indico se tiene que convertir la x en radianes
    y=exp(-x);
    printf("exp(-x)=%e\n\n",y); // agrego %e para que me de el resultado en notacion cientifica
    e=(cos(rad))+(2*tan(rad/2));
    printf("cos(x)+2*tan(x/2)=%lf\n\n",e);
    f=(log(x))+(3*(pow (x,2)));
    printf("log(x)+3*x^2=%lf\n\n",f);
   
    
    
}
