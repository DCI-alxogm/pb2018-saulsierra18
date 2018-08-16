//
//  primer_programa.c
//  
//
//  Created by Saul Sierra Luna on 15/08/18.
//

#include "primer_programa.h"
#include <stdio.h>

int main()
{
    int edad,edad2;
    
   
    printf("Este es el 1º programa del curso\n");
    
    
    printf("Introduce tu edad:\n");
    scanf("%i",&edad);
    edad2=edad+10;
    printf("\n \t\t Tu edad en 2028 será :%i\n",edad2);
    printf("\t\t¡Felicidades ya estas viejo!\n");
    return 0;
}
