//
//  no_factorial.c
//  
//
//  Created by Saul Sierra Luna on 06/09/18.
//

#include "no_factorial.h"
#include <stdio.h>
int main ()
{
    int i,f=1,n,op=1;
    while (op==1)
    {
        printf("\t\tIntroduzca el valor factorial que quiere evaluar \n");
        scanf("%i",&n);
        for (i=1; i<n; i++)
        {
            f=f*i;
        }
        printf("\t El valor factorial de %i es el siguiente \n %i\n\n",n,f);
        printf("¿Desea continuar evaluando valores?\n");
        printf("Presione (1) si desea continuar evaluando\n");
        printf("Presione (2) si cerrar el programa\n");
        scanf("%i",&op);
    }
}
