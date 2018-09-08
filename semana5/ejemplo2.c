//
//  ejemplo2.c
//  
//
//  Created by Saul Sierra Luna on 05/09/18.
//

#include "ejemplo2.h"
#include <stdio.h>
#include <math.h>
int main()
{
    float exp_;// Este es un programa que evalua el valor exponencial
    int n=10, j;
    for (j=0; j<n; j++)//lo que nos indica el ciclo for es que "j" va a empezar desde 0, después que el ciclo for continuará si y solo si j es menor a n, despues indicamos el incremento que se le suma 1
    {
        exp_=exp(j);
        printf("%i\t %f\n",j,exp_);//Esto es lo que imprimira el el ciclo for siempre y cuando j sea menor a n 
    }
    return 0;
    
    }
}

