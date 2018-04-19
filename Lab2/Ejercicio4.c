/*Algoritmo narrrado
 *definir variables
 *ingresar el resultado del equipo (marcador)
 *ingresar el resultado del equipo contraio (marcador) 
 *si el resultado del equipo marcador fue 3 gano 
 *si el resultado del equipo fue 1 empato
 *si el resultado del equipo fue 0 perdio
 *imprimir el resultado de los ountos obtenidos hasta la quinta fecha 
 */
 #include <stdio.h>
 int main ()
 {
	 int fechas,resultado_del_equipo=0,puntos_obtenidos,resultado_equipo_contrario=0;
	 
	 for(fechas=0; fechas<=5; fechas++){
	 printf("Ingresar el resultado del marcador del equipo: \n");
	 scanf("%d", &resultado_del_equipo);
	 printf("Ingresar el resultadodel marcador del equipo contrario: \n");
	 scanf("%d", &resultado_equipo_contrario);
	 
	 if(resultado_equipo_contrario==resultado_del_equipo){
		 printf("El equipo empato\n");
		 puntos_obtenidos++;
}
	 else if(resultado_equipo_contrario>resultado_del_equipo){
		 printf("el equipo perdio\n");
		 puntos_obtenidos=puntos_obtenidos+0;
}
	 else{
		 printf("El equipo gano\n");
		 puntos_obtenidos=puntos_obtenidos+3;
}
}
	 printf("Los puntos obtenidos hasta la quinta fecha es: %d", puntos_obtenidos);
	return 0;
}

	
		   
