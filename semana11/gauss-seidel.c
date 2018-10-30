//
//  prueba2.c
//  
//
//  Created by Saul Sierra Luna on 23/10/18.
//

#include "gauss-seidel.h"
#include<stdio.h>
#include<math.h>

int main()
{
    FILE *archivo; //En este apartado defino los archivos que se utilizaran, el de archivos que almacenara los datos iniciales los cuales va a leer el programa, el de iteraciones que imprimira las iteraciones en un archivo , y e de resultados que imrpimira en otro archivo la solución final
    FILE *resultado;
    FILE *iteraciones;
    int count, t, limit;
    float temp, error, a, sum = 0;
    float matrix[10][10], y[10], error_permitido; //declaramos una matriz 10x10 en este apartado y un arreglo de y[] que almacenara los datos
   limit=9;//Podríamos solicitar al usuario cuantas incognitas ocupa resolver pero esta vez solo definimos 9 que son las necesarias para resolver la ecuacion de Laplace.
    printf("Ingresa el porcentaje de error:\t");//Solicitamos el error que desea, dependiendo del error será el número de iteraciones, entre menos error desees mas iteraciones serán y más preciso sera el resultado
    scanf("%f", &error_permitido);
    
   archivo=fopen("datos.txt", "r");
    resultado=fopen("resultados.txt","w");//En estas líneas abrimos los archivos, el de datos es de lectura asi que utilizamos "r" y lo de resultados y de iteraciones una "w" para escribir.
    iteraciones=fopen("iteraciones.txt","w");
    for(count = 1; count <= limit; count++)//Se utiliza un ciclo for para llenar la matriz de coeficientes.
   {
     
        for(t = 1; t <= limit + 1; t++)
        {
            fscanf(archivo,"%f", &matrix[count][t]);//Se utiliza un fscanf para leer los datos de el archivo e ir llenando la matriz una por una
           
            
        
        }
       
    }
    
    for(count = 1; count <= limit; count++)//Se utiliza otro ciclo for en un arreglo que almacenará la solución final
    {
        y[count] = 0;
    }
    do //Una vez almacenado los datos en la matriz ahora si el programa hara los cálculos.
    {
        a = 0;
        for(count = 1; count <= limit; count++)
        {
            sum = 0;
            for(t = 1; t <= limit; t++)
            {
                if(t != count)
                {
                    sum = sum + matrix[count][t] * y[t];
                }
            }
            temp = (matrix[count][limit + 1] - sum) / matrix[count][count];//Se aplica la ecuacion que se va a iterra multiples veces para obtener una solucion
            error = fabs(y[count] - temp); //Se indica cual sera el error , menor error mayoer numero de iteraciones
            if(error > a)
            {
                a = error;
            }
            y[count] = temp;
            
            fprintf(iteraciones,"\nY[%d]=\t%f", count, y[count]);//Se imprimen las iteraciones con diferentes valores que irán cambiando conforme al numero de iteraciones, se imprimen en un archivo aparte llamado "iteraciones.txt"
            
        }
        fprintf(iteraciones,"\n");
    }
    while(a >= error_permitido);//Si el valor a es mayor al error permitido no se continua.
    
    fprintf(resultado,"\n\nSolución:\n\n");
    for(count = 1; count <= limit; count++)//La solución final se imprime en un archivo aparte llamado "resultados.txt"
     {
        fprintf(resultado,"\nY[%d]:\t%f\n", count, y[count]);
    }
   fclose(archivo);//Cierro los archivos que use para leer y escribir.
    fclose(resultado);
    fclose(iteraciones);
    return 0;//Le pido al programa que si todo compila bien me regrese un 0.
}
