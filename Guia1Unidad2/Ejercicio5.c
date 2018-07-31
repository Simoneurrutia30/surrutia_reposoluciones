#include <stdio.h>

void traspuesta(int N, int M, int matriz[M][N]){
	
	int i,j;
	
	printf("La traspuesta es: \n");
	
	for(i=0; i<M; i++){
		for (j=0; j<N; j++){
			
			printf(" %d ", matriz[j][i]);
		}
		printf("\n");
	}
}
	
void print_mtrz(int N, int M, int mtrz[N][M]){
	
	int i,j;
	
	for(i=0; i<N;i++){
		for (j=0; j<M; j++){
			printf("%d ",mtrz[i][j]);
		}
		printf("\n");
	}
}

void llenar_mtrz(int N, int M, int mtrz[N][M]){
	int i,j;
	int num;
	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
	
			printf("Ingrese un numero para llenar la matriz: ");
			scanf("%d",&num);
			
			mtrz[i][j]=num;	
		}
	}
}

int main ()
{
	int N,M;
	
	printf("Ingrese el numero de las filas que desea: ");
	scanf("%d",&N);
	
	printf("Ingrese el numero de las columnas que desea: ");
	scanf("%d",&M);
	
	int mtrz[N][M];
	
	llenar_mtrz(N,M,mtrz);
	print_mtrz(N, M, mtrz);
	traspuesta(N, M, mtrz);

	return 0;
}
