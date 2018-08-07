	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	#define M 8
	#define ficha1 88
	#define	ficha2 79
		
	void llenar_matriz(int matriz[M][M]){
		
		int i, j;
		
		for(i=0; i<M; i++){
			for(j=0; j<M; j++){
			
			matriz[i][j] = 32;
			
			}
		}
	}

	void print_matriz( int matriz[M][M]){
		
		int i,j;
		
		
		for(i=0; i<M; i++){
			for(j=0; j<M; j++){

			printf("[%c] ", matriz[i][j]);
			
			}
			
			printf("\n");
		}
	}

	int gana_jugador1(int posicion, int matriz[M][M]) {
	  
		int i,j;
		int ganador;
		
		ganador = 0;

			for(i=0; i<M; i++) {
				for(j=0; j<M-3; j++) {
					
					if (matriz[i][j]==88 && matriz[i][j+1]==88 && matriz[i][j+2]==88 && matriz[i][j+3]==88){
			
							printf("Ha ganado del jugador1");
							
						ganador++;
			}
					else if (matriz[i][j]==79 && matriz[i][j+1]==79 && matriz[i][j+2]==79 && matriz[i][j+3]==79){
						
							printf("Ha perdido");
						
						ganador++;
					}
			}
		}
					if (ganador==0) {

			for(i=0; i<M-3; i++) {
				for(j=0; j<M; j++) {
					
					if (matriz[i][j]==88 && matriz[i+1][j]==88 && matriz[i+2][j]==88 && matriz[i+3][j]==88){
			  
							printf("Ha ganado el jugador1");
						
						ganador++;
			}
					else if (matriz[i][j]==79 && matriz[i+1][j]==79 && matriz[i+2][j]==79 && matriz[i+3][j]==79){
							
							printf("Ha perdido");
						
						ganador++;
				}
			}
		}
	}

	  if (ganador==0) {

			for(i=0; i<M; i++) {
				for(j=0; j<M; j++) {
			
					if (i+3<M && j+3<M) {
						
						if (matriz[i][j]==88 && matriz[i+1][j+1]==88 && matriz[i+2][j+2]==88 && matriz[i+3][j+3]==88){
							
							printf("Ha ganado el jugador1");
							
							ganador++;
							
				}
					else if (matriz[i][j]==79 && matriz[i+1][j+1]==79 && matriz[i+2][j+2]==79 && matriz[i+3][j+3]==79){
				
							printf("Ha perdido");
							
							ganador++;
			   
			  }
			}
		  }
		}
	  }

		if (ganador==0) {

			for(i=0; i<M; i++) {
				for(j=0; j<M; j++) {

					if (i+3<M && j-3>=0) {
			  
				if (matriz[i][j]==88 && matriz[i+1][j-1]==88 && matriz[i+2][j-2]==88 && matriz[i+3][j-3]==88){
			
							printf("Ha ganado el jugador1");
						
							ganador++;
			  }
				else if (matriz[i][j]==79 && matriz[i+1][j-1]==79 && matriz[i+2][j-2]==79 && matriz[i+3][j-3]==79){
					
							printf("Ha perdido");
							ganador++;
			  }
			}
		  }
		}
	  }
		return ganador;
	}

	int gana_jugador2(int posicion2, int matriz[M][M]) {
	  
		int i,j;
		int ganador;
		
		ganador = 0;

			for(i=0; i<M; i++) {
				for(j=0; j<M-3; j++) {
					
					if (matriz[i][j]==88 && matriz[i][j+1]==88 && matriz[i][j+2]==88 && matriz[i][j+3]==88){
			
							printf("Ha ganado del jugador1");
							
						ganador++;
			}
					else if (matriz[i][j]==79 && matriz[i][j+1]==79 && matriz[i][j+2]==79 && matriz[i][j+3]==79){
						
							printf("Ha ganado el jugador2");
						
						ganador++;
					}
			}
		}
					if (ganador==0) {

			for(i=0; i<M-3; i++) {
				for(j=0; j<M; j++) {
					
					if (matriz[i][j]==88 && matriz[i+1][j]==88 && matriz[i+2][j]==88 && matriz[i+3][j]==88){
			  
							printf("Ha ganado el jugador1");
						
						ganador++;
			}
					else if (matriz[i][j]==79 && matriz[i+1][j]==79 && matriz[i+2][j]==79 && matriz[i+3][j]==79){
							
							printf("Ha ganado el jugador2");
						
						ganador++;
				}
			}
		}
	}

	  if (ganador==0) {

			for(i=0; i<M; i++) {
				for(j=0; j<M; j++) {
			
					if (i+3<M && j+3<M) {
						
						if (matriz[i][j]==88 && matriz[i+1][j+1]==88 && matriz[i+2][j+2]==88 && matriz[i+3][j+3]==88){
							
							printf("Ha ganado el jugador1");
							
							ganador++;
							
				}
					else if (matriz[i][j]==79 && matriz[i+1][j+1]==79 && matriz[i+2][j+2]==79 && matriz[i+3][j+3]==79){
				
							printf("Ha ganado el jugador2");
							
							ganador++;
			   
			  }
			}
		  }
		}
	  }

		if (ganador==0) {

			for(i=0; i<M; i++) {
				for(j=0; j<M; j++) {

					if (i+3<M && j-3>=0) {
			  
				if (matriz[i][j]==88 && matriz[i+1][j-1]==88 && matriz[i+2][j-2]==88 && matriz[i+3][j-3]==88){
			
							printf("Ha ganado el jugador1");
						
							ganador++;
			  }
				else if (matriz[i][j]==79 && matriz[i+1][j-1]==79 && matriz[i+2][j-2]==79 && matriz[i+3][j-3]==79){
					
							printf("Ha ganado el jugador2");
							ganador++;
			  }
			}
		  }
		}
	  }
		return ganador;
	}

	int ver_empate(int matriz[M][M]){
		
		int i;
		int j;
		int empate = 0;
		
		for(i=0; i<M; i++){
			for(j=0; j<M; j++){
				if(matriz[i][j]!= 32){
					
					empate++;
					
				}
			}
		}
		return empate;
	}

	int otras_filas(int posicion, int matriz[M][M]){
		
		int fila=8;
		
		while(fila>=0){
			
			if(matriz[fila][posicion-1] != 32){
				
				fila--;
				
			} else {
				
				break;
			}
		}
			
		return fila;
	}

	int lanzar(int matriz[M][M]){

		int posicion;
		int empate = 0;
			
		printf("Turno del jugador1:  ");
		scanf("%d", &posicion);
				
		if(posicion>=9){
			
			printf("La opcion ingresada es invalida, intente otra vez");
			
		}
		
		empate = ver_empate(matriz);
		
		if(empate==64){
			
			printf("Empate");
		}
			
		int jugar_filas;
			
		jugar_filas = otras_filas(posicion, matriz);
		
		matriz[jugar_filas][posicion-1]= 88;
			
		printf("\n"); 
		
		return posicion;
			
	}

	int correr_fila(int machine, int matriz[M][M]){
		
		int fila=8;
		
		while(fila>=0){
			
			if(matriz[fila][machine-1] != 32){
				
				fila--;
				
			} else {
				
				break;
			}
		}
			
		return fila;
	}

	void lanzar_maquina(int matriz[M][M]){

			int machine;
			int empate = 0;
			
			
			machine = ((rand()%8)+1);
			
			empate = ver_empate(matriz);
			
		if(empate==64){
			
			printf("Empate");
		}
			
			int jugar;
			
			jugar = correr_fila(machine, matriz);
		
			matriz[jugar][machine-1]= 79;
			
	}

	int correr_fila2(int posicion2, int matriz[M][M]){
		
		int fila=8;
		
		while(fila>=0){
			
			if(matriz[fila][posicion2-1] != 32){
				
				fila--;
				
			} else {
				
				break;
			}
		}
		
		return fila;
	}

	int modalidad2(int matriz[M][M]){

		
		int posicion2;
		int empate = 0;
		
			printf("Turno del jugador2:  ");
			scanf("%d", &posicion2);
		
			if(posicion2>=9){
				
				printf("La opcion ingresada es invalida, ingrese otra vez");
				
			}
			
			empate = ver_empate(matriz);
		
			if(empate==64){
			
			printf("Empate");
			
			}
			
			int jugar_filas2;
			
			jugar_filas2 = correr_fila2(posicion2, matriz);
			
			matriz[jugar_filas2][posicion2-1]= 79;
				
		
			printf("\n"); 
			
			return posicion2;
	}

	int main(){
		
		printf("\t\t\t\t\t\t\tBienvenido al juego Cuatro en Raya ");
		printf("\n");
		
		int jugador;  
		
		printf("\nSeleccione la modalidad de juego: \n");
		printf("\nSi desea 1 player presione [1]");
		printf ("\nSi desea 2 players presione [2]\n");
		scanf("%d", &jugador);
			
		if(jugador==1){
				
			printf("*El jugador 1 juega con la ficha X\n*La maquina juega con la ficha O\n");
			printf ("\n");
					
		}else {
			printf("*El jugador 1 juega con la ficha X\n*El juegador 2 juega con la ficha O\n");
				
		}

		printf("\t¡A jugar!");
		printf("\n\n");
		printf(" 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8\n");
			
		int matriz[M][M];
		
		srand(time(0));
		
		llenar_matriz(matriz);
		printf("\n");	
		print_matriz(matriz);
			
		int i = 0;
		int posicion;
		int posicion2;
		
		while(1){
			
			if(jugador==1){
				
				posicion = lanzar(matriz);
				lanzar_maquina(matriz);
				system("clear");
				printf("¡A jugar! ");
				printf("\n");
				printf(" 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8\n");
				print_matriz(matriz);
				i = gana_jugador1(posicion, matriz);
			

			}
				if(jugador==2){
				
				lanzar(matriz);
				posicion2 = modalidad2(matriz);
				system("clear");
				printf("¡A jugar! ");
				printf("\n");
				printf(" 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8\n");
				print_matriz(matriz);
				i = gana_jugador2(posicion2, matriz);
				
				} 
				
				if(i>0){
				
					break;
			}
		}
			
		return 0;
	}

