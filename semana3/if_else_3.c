//
//  if_else_3.c
//  
//
//  Created by Saul Sierra Luna on 24/08/18.
//

#include "if_else_3.h"
#include <stdio.h>

int main ()
{
    char c; // Se declara la variable para un caracter
    int es_vmin,es_vmay; // y las 2 variables que utilizaremos para guardar los operadores
    printf ("Introduce una letra porfavor\n");
    scanf("%c",&c); //Se le solicita al usuario que te proporcione cualquier letra
    es_vmin = (c=='a' || c=='e' || c=='i'||c=='o' ||c=='u' ); //Se declaran las variables con operadores lógicos
    es_vmay = (c=='A' || c=='E' || c=='I'||c=='O' ||c=='U' );
    if (es_vmay||es_vmin) {
        printf("%c es una vocal\n",c); // le pides al programa que te imprima si es vocal o no es vocal 
    } else {
        printf("%c es Consonante\n",c);
    }
    return 0;
}
