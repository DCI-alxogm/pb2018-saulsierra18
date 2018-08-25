//
//  if_else.c
//  
//
//  Created by Saul Sierra Luna on 24/08/18.
//

#include "if_else.h"
#include <stdio.h>
int main ()
{
    int a; // Declaramos la variable que vamos a usar
    printf("Introduce un número\n"); // Le pedimos al usuario que nos proporcione el valor que queremos analizar
    scanf("%i",&a);// EL valor que el usuario nos da se la asignamos a la variable a
    if (a%2==0) { // Usamos la función if para aquel númer que sea par y imprimos que el valor que se introdujo es par
        printf("a=%i es par\n",a);
        
    }
    else // Usamos else para aquel número impar que nos proporcione el usario y le pedimos a la funcion que si este número no es par no imprima que no es par
    {
        printf("a=%i es impar \n",a);
    }
    return 0;

}
