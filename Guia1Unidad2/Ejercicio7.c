//Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el
//que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la
//matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan
//a lo introducido por el usuario)

#include <stdio.h>

void llenar_matriz(int N, int M, int mtrz[N][M]){
	
	int i,j;
	int num;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("Ingrese numero: ");
			scanf("%d",&num);
			
			mtrz[i][j]=num;	
		}
	}
}

void suma_de_filas(int N, int M, int mtrz[N][M]){
	
	int i, j;
	int sumar_filas=0;
	//int suma_de_columnas=0;

	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			
			sumar_filas= sumar_filas + mtrz[i][j];
			//suma_de_columnas=suma_de_columnas + mtrz[j][i];
		}
		
		printf("Suma de la fila es: %d\n", sumar_filas);
		sumar_filas=0;
		
		//printf("La suma de las columnas es: %d\n",suma_de_columnas);
		//suma_de_columnas=0;
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


int main()
{
	int N=4,M=5;
	//N=4;
	//M=5;
	int mtrz[N][M];

	llenar_matriz(N, M, mtrz);
	print_mtrz(N, M, mtrz);
	suma_de_filas(N, M, mtrz);
	
		return 0;
}
