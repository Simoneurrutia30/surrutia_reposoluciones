
#include <stdio.h>

void suma_de_filas(int N, int mtrz[N][N]){
	
	int i, j;
	int suma_fila=0;
	int suma_de_columnas=0;

	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			
			suma_fila= suma_fila + mtrz[i][j];
			suma_de_columnas=suma_de_columnas + mtrz[j][i];
		}
		
		printf("La suma de la fila es: %d\n", suma_fila);
		suma_fila=0;
		
		printf("La suma de la columna es: %d\n",suma_de_columnas);
		suma_de_columnas=0;
	}
}

void suma_total(int N, int mtrz[N][N]){
	
	int i,j;
	int suma = 0;
	
	for(i=0; i<N; i++){
		for(j=0;j<N;j++){
			suma=suma + mtrz[i][j];
		}
	}
	printf("La suma total es: %d ", suma);
}


void llenar_mtrz(int N, int mtrz[N][N]){
	int i,j;
	int num;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("Ingrese numero: ");
			scanf("%d",&num);
			
			mtrz[i][j]=num;	
		}
	}
}

void print_mtrz(int N, int mtrz[N][N]){
	
	int i,j;
	
	for(i=0; i<N; i++){
		for (j=0; j<N; j++){
			printf("%d ",mtrz[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int N;
	
	printf("Ingrese el valor de n: ");
	scanf("%d",&N);
	
	int mtrz[N][N];
	
	llenar_mtrz(N, mtrz);
	
	print_mtrz(N, mtrz);
	
	suma_de_filas(N, mtrz);
	
	suma_total(N, mtrz);
	
	return 0;
}
