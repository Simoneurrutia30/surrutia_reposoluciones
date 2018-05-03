//Algoritmo narrado:
//Crear la funcion para pedir un numero para ser invertido
//retornar alvalor que se dara al numero a invertir
//definir la variables
//crear un ciclo para poder invertir el numero que se ingreso
//definir los ejercicios que daran al numero invertido
//mostrar en panatalla el numero invertido
//returnar a 0

#include <stdio.h>

int pedir_n_a_invertir()

{
	int numero_a_invertir;
	
	printf("Ingrese el numero que quiere invertir:");
	scanf("%d", &numero_a_invertir);
	
	return numero_a_invertir;
}
	int main ()
	{
		int resto,n_invertido, numero_a_invertir;
		numero_a_invertir=pedir_n_a_invertir();
		
	while(numero_a_invertir!=0)
	{
		
	resto=numero_a_invertir%10;
	
	numero_a_invertir=numero_a_invertir/10;
	
	n_invertido=n_invertido*10+resto;
}
	
	printf("El numero invertido queda: %d", n_invertido);

	return 0;
}

