//Escriba un programa que cree una matriz cuadrada A de NxN, luego rellenela de ceros e imprımala en pantalla

#include <stdio.h>

void matriz (){
	
	int N;
	
	printf("Ingrese el valor de N:");
	scanf("%d", &N);
	
	int mtrz[N][N];
	int i, j;

	//INGRESAR
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			mtrz[i][j]=0;
		}
	}
	
	//IMPRIMIR
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%d ", mtrz[i][j]);	
		} 	
	printf("\n");
	}
}

int main(){
	
	matriz();

	return 0;
}
