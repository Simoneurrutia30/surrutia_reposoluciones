#include <stdio.h>


void llenar_mtrz(int filas , int columnas, int mtrz[filas][columnas]){
	
	int i,j;
	int num;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Ingrese numero: ");
			scanf("%d",&num);
			
			mtrz[i][j]=num;	
		}
	}
}

void print_mtrz(int filas, int columnas, int mtrz[filas][columnas]){
	
	int i,j;
	
	for(i=0; i<filas; i++){
		for (j=0; j<columnas; j++){
			printf("%d ",mtrz[i][j]);
		}
		printf("\n");
	}
}

void simetrica(int filas,int columnas,int mtrz[filas][columnas]){
	
	int i;
	int j;
	
	 for (i=0; i<filas; i++){
     for (j=0; j<columnas; j++){
        
        printf("%d", mtrz[i][j]);
    }
    printf ("\n");
   }

	if(mtrz[filas][columnas]== mtrz[columnas][filas]){
		
			printf ("La matriz es simetrica.");
		
		}else{
			printf ("La matriz ingresada no es simetrica.");

  }
}


int main(){
	
	int columnas;
	int filas;
	
	printf("Ingrese el valor de las filas: ");
	scanf("%d",&filas);
	printf("Ingrese el valor de las columnas: ");
	scanf("%d",&columnas);
	
	int mtrz[filas][columnas];
	
	llenar_mtrz(filas, columnas, mtrz);
	
	print_mtrz(filas, columnas, mtrz);

	simetrica(filas, columnas, mtrz);
	
	return 0;
}


