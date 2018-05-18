//Dado un numero natural X, se calcula la raız digital de X numero sumando los dıgitos que lo componen.
//El proceso se repite sobre el nuevo numero hasta que el resultado obtenido tiene un solo dıgito. Este
//ultimo numero es la raız digital del numero X.
//Ejemplo: 347 → 3 + 4 + 7 = 14 → 1 + 4 → 5 → Raiz digital(347) = 5

//Algoritmo narrado:
//Comenzar el programa con un procedimiento oara poder descomponer el numero que se ingresara, imprimir los digitos del numero que se ingreso
//imprimir la suma de los digitos que fueron descompuestos 
//y esto se repite hasta que se genere un solo digito el cual sera la raiz digital del numero ingresado
//cerrar el programa con return 0
#include <stdio.h>
#include <stdlib.h>

void
descomponer_numero(int variable){
	int suma;
	int numero=0;
	int cont=0;
	
	while (suma>10 || cont==0){		
		
		suma=0;
		
		while(variable>10){
		
			numero = variable%10;
			variable = variable/10;
			suma = suma + numero;
			
			
			printf ("digitos : %d\n", numero);
			printf ("suma: %d\n" , suma);
			printf ("variable: %d\n", variable);
		}
 
		suma=variable+suma;
		variable=numero;
		cont=1;
	}
	printf ("la raiz digital del numero ingresado es: %d\n", suma);
}



int main(){
	
	int variable=0;
		printf("ingrese un numero: ");
		scanf ("%d", &variable);
		
	    descomponer_numero(variable);
		return 0;
}
