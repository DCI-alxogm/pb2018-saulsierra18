//
//  ej_2_doc.c
//  
//
//  Created by Saul Sierra Luna on 14/09/18.
//

#include "ej_2_doc.h"
#include <stdio.h>
int main ()
{
    FILE *archivo;
    float var1,var2;//Definir variables
    char var[255];
    archivo=fopen("test.txt","r");
    fgets(var,255,(FILE*)archivo);
    printf("%s",var);
    fscanf(archivo,"%s",var);
    printf("%s",var);
    fscanf(archivo,"%f %f",&var1,&var2);
    printf("%f %f\n",var1,var2);
    fclose(archivo);
    
    
}
