//Algoritmo narrado:
//determinar funciones de tipo int para calcular el sueldo
//declarar un void para depues imprimir el resultado del dueldo total
//despues se determinan otas variables tipo int
//determinar un ciclo for
//pedir valor de la horas diarias
//guardar valor de la horas diarias
//calcular el total de horas que se trabaja en el dia
//pedir el valor de cuanto dinero pagan por hora
//guardar el valor pedido
//calcular el sueldo total
//imprimir el sueldo total
//para terminar el programa retorna 0

#include <stdio.h>
int determinar_sueldo (int total_horas_diarias, int sueldo_en_horas){
	int sueldo_total;
	sueldo_total= (total_horas_diarias*sueldo_en_horas);
	return sueldo_total;
}
	void imprimir_el_sueldo_de_la_persona(int sueldo_total){
	printf("El sueldo que recibira es: %d", sueldo_total);
}
	
	int main ()
{ 
	int sueldo_en_horas, sueldo_total; 
	int horas_diarias; 
	int total_horas_diarias=0;
	int i;
	
	for (i=0; i<6; i++){
	printf("Ingresar las horas trabajas en el dia %d:", i+1);
	scanf("%d", &horas_diarias);
	total_horas_diarias=(horas_diarias+total_horas_diarias);
}

	printf("\n Ingrese cuanto le pagan por hora:");
	scanf("%d", &sueldo_en_horas);
	sueldo_total=determinar_sueldo(total_horas_diarias, sueldo_en_horas);
	imprimir_el_sueldo_de_la_persona(sueldo_total);
	
	return 0;
}
