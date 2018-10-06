//
//  arreglo_apuntador.c
//  
//
//  Created by Saul Sierra Luna on 03/10/18.
//

#include "arreglo_apuntador.h"
#include <stdio.h>
int main ()
{
    int i,num[6],sum=0;
    printf("Introduce 6 números enteros:\n"); //Aqui declaramos el arreglo num[6]
    for (i=0; i<6; i++)
    {
        scanf("%d",(num+i)); //podemos manipular el arreglo como apuntador ya que el "num+i"en el ciclo for seria igual a estar sumandole 1 al arreglo
        sum+=*(num+i);
    }
    printf("Suma=%d\n",sum); //SE imprime el resultado de la suma 
    return 0;
}
