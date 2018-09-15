//
//  ej_1_doc.c
//  
//
//  Created by Saul Sierra Luna on 14/09/18.
//

#include "ej_1_doc.h"
#include <stdio.h>
int main ()
{
    FILE *archivo;
    float var1,var2,x=10,y=10,z;//Definir variables
    char var[255];
    z=x*y;
    archivo=fopen("test.txt","w");  // Lo primero es seleccionar el nombre del archivo que vas a abrir en este caso el ejemplo pone test.txt
    fputs("Esta es una prueba de fputs..\n",archivo);
    fprintf(archivo,"fprint... Esto esta muy genial %f\n",z);
    fprintf(archivo,"%f %f\n",0.15,100.9); // Lo que se hace a continuación es imprimir algo en el archivo que creaste como por ejemplo numeros o simplemente palabras 
    fclose(archivo);
    return 0;
}
