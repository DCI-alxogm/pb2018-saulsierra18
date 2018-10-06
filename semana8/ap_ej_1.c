//
//  ap_ej_1.c
//  
//
//  Created by Saul Sierra Luna on 05/10/18.
//

#include "ap_ej_1.h"
#include <stdio.h>
int main ()
{
    int var=20;//* Declaración de la variable
    int *ip;//Delaración de la variable apuntador
    ip=&var;//Asignamos la dirección de la variable que se guardara en el apuntador
    printf("La dirección de la variable var es : %x\n",(int)&var); //Imprimimos la direccion donde estara almacenado la variable
    printf("Dirección Guardada en el apuntador ip: %x\n",(int)ip);
    printf("El valor de *ip: %d\n",*ip);// al final mostramos el valor almacenado de la variables que en este caso es 20 
    return 0;
}
