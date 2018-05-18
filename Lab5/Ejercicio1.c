
//Algoritmo narado:
//inicar el programa con un procedimiento void para determinar que opcion elijira A o B
//Luego se imprime el valor que genero A y B
//Se imprime si gano o no
//Imprimir cuantas partidas ganadas y perdidas lleva
//y mostrar en pantalla si se desea seguir apostando 
//En la funcion int main llamar a la funcion tiempo y el procedimiento ganador
//por ultimo para cerrar el programa termianar con un return 0


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ganador () {	
	
	int a;
	int b;
	int ganadas=0;
	int perdidas=0;
	char voto;
	char tecla='s';	
		
	
	while (tecla != 'n' || tecla != 'N'){		
		
		a = rand() %15;
		b = rand() %15;
	
		printf("Elige el numero A o B: ");
		scanf(" %c", &voto);
		
		printf("El numero generado en A es: %d \n", a);
		printf("El numero generado en B es: %d \n", b);

	
		if (voto == 'a' && a > b){
		
			ganadas ++;
			printf("Ganaste\n");
		
		}
		
		else if (voto == 'b' && a < b){
		
			ganadas ++;
			printf("Ganaste\n");
		
		}
		
		else{
		
			perdidas ++;
			printf("Perdiste\n");
		
		}
		
		printf("Desea continuar apostando? S/N: ");
		scanf(" %c",&tecla);
		
		//while (getchar()!= '\n');
	
		printf("Has ganado %d partidas y %d partidas perdidas\n", ganadas, perdidas);
	
		if (tecla == 'n' || tecla == 'N'){
		break;
		}
	}
}
																																								
int main()
{
	
	srand(time(0));
	
	ganador();
	
	return 0;
}
	
	
	
	
