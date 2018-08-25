//
//  switch.c
//  
//
//  Created by Saul Sierra Luna on 22/08/18.
//

#include "switch.h"
#include <stdio.h>
 int main ()
{
    int opcion; //Se declara la variable de switch
    
    printf(" Teclear una opción \n");
    printf("(1) para convertir temperaturas\n");// Pides que imprima las 2 opciones que puedes teclear
    printf("(2)para convertir coordenadas\n");
    
    scanf("%i",&opcion);// Con un scanf le pides al usuario que teclee la opción que quiere usar, este valor se guardara en "opcion"
    
    switch (opcion) { // Se aplica la función switch con opcion como variable
        case 1:
            printf("Entre en la opción 1\n"); // Pides que te imprima la opcion que el usuario desee ingresar
            break;
        case 2:
            printf("Entre en la opción 2\n");
            break;
            
        default:printf("Opción Invalida\n");
            break;
    }
    return 0;
}
