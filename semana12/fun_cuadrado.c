//
//  fun_cuadrado.c
//  
//
//  Created by Saul Sierra Luna on 01/11/18.
//

#include <stdio.h>
#include "holamake.h"
#include <math.h>
void cuadrado()
{
    float x,x2;
    printf("Introduce 1 número\n");
    scanf("%f",&x);
    x2=pow(x,2);
    printf("El cuadrado es:%f\n",x2);
}
