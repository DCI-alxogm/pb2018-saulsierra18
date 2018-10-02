//Creado por Saúl Eduardo Sierra Luna
#include <stdio.h>
#include <math.h>

int main() {
	FILE *dt;
	FILE *re;//archivo donde estaran los resultados
	dt=fopen("datos.txt","r");//abrimos el archivo de lectura
	int N;//numero de planetas a analizar
	char planetas[20];//datos , es tipo char para crear cada archivo de cada planeta
	double i,G,xo,yo,zo,vx,vy,vz,Tiempo_ev,H_paso_tiempo,r, masa_planeta,masa_sol;
	G=4.0*pow(3.1415,2);//calculando 
	//se lee el numero de planetas
	for(i=0.0;i<N;i++){
        fscanf(dt,"%i",&N);
		fscanf(dt,"%s",&planetas);
		fscanf(dt, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vx, &vy, &vz);
		
		fscanf(dt, "%lf %lf %lf %lf", &masa_sol, &Tiempo_ev, &H_paso_tiempo, &masa_planeta);
		vx*=365;// Se tienen que convertir las Vo ya que debe estar en unidades atronomicas por año
		vy*=365;
		vz*=365;
	re=fopen(planetas,"w");//Se inicializa el archivo que almacenará los resultados obtenidos de los distintos planetas
	for(i=0.0;i<=Tiempo_ev+H_paso_tiempo;i+=H_paso_tiempo){
        fprintf(re, "\n Tiempo=%lf, %lf, %lf, %lf, %lf , %lf , %lf",i, vx, vy, vz, xo, yo, zo);
      	
        xo+=vx*H_paso_tiempo;// Se resuelven las ecuaciones de Euler
        yo+=vy*H_paso_tiempo;
        zo+=vz*H_paso_tiempo;
        r=sqrt(xo*xo+yo*yo+zo*zo);//radio
      	
       	vx-=H_paso_tiempo*((G*masa_sol*xo)/pow(r,3));
        vy-=H_paso_tiempo*((G*masa_sol*yo)/pow(r,3));
        vz-=H_paso_tiempo*((G*masa_sol*zo)/pow(r,3));
        	}
	fclose(re);
}//cerrar archivos de resultados y datos.
	fclose(dt);
return 0;
}

