//
//  temperatura.c
//  
//
//  Created by Saul Sierra Luna on 20/08/18.
//

#include "temperatura.h"
#include <stdio.h>
#include <math.h>

int main ()
{
    double c,f,y;
    printf("\t\t\t Conversión de temperatura\n");
    printf("\t\tIngrese la temperatura (en Cº) que quiere convertir a Fº\n");
    scanf("%lf",&c);
    y=(1.8*c)+32;
    printf("Fº=%lf\n",y);
    f=(y-32)*5/9;
    printf("Cº=%lf \n", f);
}
