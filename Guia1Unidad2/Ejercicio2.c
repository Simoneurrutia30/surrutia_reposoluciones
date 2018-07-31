#include <stdio.h>

int main(){
	
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
		
		if(i==j){
			
			printf("%d ", mtrz[i][j]=1);	
		}
		else{
			printf("%d ", mtrz[i][j]=0);
		}
			} 
	
	printf("\n");
	}

	return 0;
}
