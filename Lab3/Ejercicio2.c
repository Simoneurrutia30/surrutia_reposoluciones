//Algoritmo narrado:
//comenzar con la funcion int ingresar_temperatura donde se pide el valor y enseguida se lee
//retorna a la variable temperatura
//luego se muestra en pantalla temperatura que se ingreso graficandola en el termometro para esto se creo un ciclo 
//el programa termina en return 0 

#include <stdio.h>
#include <stdlib.h>

int 
ingresar_la_temperatura (){
	int temperatura;
	printf("Ingresar la temperatura de 0 a 80:");
	scanf("%i", &temperatura);
	return temperatura;
}
void
graficar_temperatura(int temperatura){
	int i;
	printf("0        10        20        30        40        50        60        70        80\n");
	printf("|         |         |         |         |         |         |         |         |\n");
	
	for (i=0; i<temperatura; i++){
		printf("-");
	}
	printf("*");
}
int main (){
	int temperatura;
	temperatura=ingresar_la_temperatura();
	graficar_temperatura(temperatura);
	return 0;
}
