/*Algoritmo narrado
 *definir las variables
 *ingresar un numero que sea menor a 1000000
 *contar e imprimir cuantos numeros primos hay antes del numero ingresado 
 */



#include <stdio.h>
int main ()
{
	int numero, d, cantidad_de_primos=0;
	int divisor=0, i;
	
	printf("Ingresar un numero menor o igual 1.000.000:");
	scanf("%d", &numero);
	
	for(d=2; d<=numero; d++)
	{
		divisor=0;
	for(i=1; i<=numero; i++)
	{
	
	if (d%i==0)
	{
		divisor++;
	}
	}
	if (divisor==2)
	{
		printf("%d\n", d);
		cantidad_de_primos++;
	}
}
	printf("La cantidad de numeros primos que hay antes del numero es: %d", cantidad_de_primos);
	return 0;
}
		
