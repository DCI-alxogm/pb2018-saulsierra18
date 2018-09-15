//
//  ejercicio_1_array.c
//  
//
//  Created by Saul Sierra Luna on 10/09/18.
//

#include "ejercicio_1_array.h"
#include <stdio.h>
#include <math.h>

int main ()
{
    FILE *archivo;
    int N=10,wom,man=0;
    int edad[N],array[9],i,m,l,indice,h,semestre[N];
    int sexo[N];
    float k=0,media=0,calis[N];
    char var[255];
    m=0;
    printf("\t\t Programa para analizar datos acerca de estudiantes inscritos en la Universidad de Guanajuato\n");
    for(h=0;h<=8;h++){// Este paso se realiza para poder llenar de 0 las matrices
        array[h]=0;
        sexo[h]=0;
    }
    
    for(i=0;i<=9;i++){
        indice=i+1; //Esto se realiza para iniciar el conteo para preguntas que vas a solicitar al usuario pongo p=i+1 por que si no lo pongo empieza desde cero.
        
        printf("\t%d.Proporcionar edad: \n",indice);
        scanf("%d",&edad[i]);
        printf("\t%d.Indique la calificacion: \n",indice);
        scanf("%f",&calis[i]);
        media=media+calis[i];
        printf("\t%d.Indique el semestre de 1 a 9: \n",indice);
        scanf("%d",&semestre[i]);
        if(semestre[i]==1){//con if else se guardan en que semestres se indicaron 1-9
            array[0]++;
        }
        else if(semestre[i]==2){
            array[1]++;
        }
        else if (semestre[i]==3){
            array[2]++;
        }
        else if(semestre[i]==4){
            array[3]++;
        }
        else if(semestre[i]==5){
            array[4]++;
        }
        else if(semestre[i]==6){
            array[5]++;
        }
        else if (semestre[i]==7){
            array[6]++;
        }
        else if(semestre[i]==8){
            array[7]++;
        }
        else if(semestre[i]==9){
            array[8]++;
        }
        printf("\t%d.Indique el sexo:(0) mujer (1) hombre \n",indice);
      
        scanf("%d",&sexo[i]);
        if(sexo[i]==0){//Se requiere un if y else para poder diferenciar entre mujer o hombre dependiendo de  lo que el usuario ingrese al arreglo
            wom++;//"wom" lo utilizo para mujer, y especifíco si el usuario ingresa un 0 es mujer si ingresa un 1 es hombre
        }
        else if(sexo[i]==1){
            man++;
        }
    }
    for(l=0;l<=8;l++){
        printf("El numero total de alumnos en el semestre: ");
        m=l+1;
        printf("%d \n",m);
        printf("%d \n",array[l]);
    }
    k=media/10;//variable donde se guarda el promedio
    archivo=fopen("resultados.txt","w");
    fprintf(archivo,"\t\tSe detectaron 10 alumnos inscritos a la Universidad de Guanajuato\n");
    fprintf(archivo,"Mujeres=%d\n",wom);
    fprintf(archivo,"Hombres=%d\n",man);
    fprintf(archivo,"El promedio de los estudiantes de la Universidad de Guanajuato es: %f\n\n",k);

    return 0;
}
