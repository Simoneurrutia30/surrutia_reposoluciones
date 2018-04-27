//Algoritmo naraddo:
//iniciar con la funcion int total_a_pagar
//declarar variables de tipo int
//crear un ciclo
//calcular el valor de pagototal
//mostrar en pantalla lo que debe pagar en cada mes
//por ultimo mostrar el total a pagar
//terminar el programa retirnando a 0

#include <stdio.h>

int total_a_pagar()
{
	int pagototal=0;
	int pago_anterior=10; 
	int i;
	
	for(i=0; i<20; i++)
	{
		pagototal=pagototal+pago_anterior;
		printf("En el mes %d debe cancelar: %d\n", i+1, pago_anterior);
		pago_anterior=pago_anterior*2;
	}
	return pagototal;
	
}

int main ()
{
		int pagototal= total_a_pagar();
		printf("El total a pagar es: %d", pagototal);
		
	return 0;
}

