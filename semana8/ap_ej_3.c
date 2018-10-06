//
//  ap_ej_3.c
//  
//
//  Created by Saul Sierra Luna on 05/10/18.
//

#include "ap_ej_3.h"
#include <stdio.h>
int main ()
{
    int max=3;
    int var[]={10,100,200};
    int i,*ptr;
    //Asignamos la dirección del arreglo al apuntador
    ptr=&var;
    for (i=0; i<max; i++) {
        printf("La dirección de la variable var[%d]=%x\n",i,ptr);
        printf("Valor de la variable var[%d]=%d\n",i,ptr);
        ptr++;
        //Nos movemos a la siguiente posicion en la memoria
    }
    return 0;
}
