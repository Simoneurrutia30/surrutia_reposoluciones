//Algoritmo narrado:
//crear la funcion
//definir variables
//mostrar en pantalla la cantidad de huevo que come 
//definir los ejercicios que se deben hacer para saber cuanto le debe pagar antonio y a juan
//mostrar en panatalla lo que se le paga a juan y a manuel
//retornar a 0

#include <stdio.h>
int dinero_que_debe_pagar ()
{
	int huevos=8, amigos=3;
	float huevos_a_comer_por_persona;
	int valor_de_cada_huevo=10;
	int huevos_de_juan=5, huevos_de_manuel=3;
	float total_a_pagar_a_juan, total_a_pagar_a_manuel;
	float porcentajedejuan, porcentajedemanuel;
	  
	huevos_a_comer_por_persona=huevos/amigos;
	
	printf("\n La cantidad de huevos que come cada amigo: %.0f", huevos_a_comer_por_persona);
	
	porcentajedejuan=huevos_de_juan-huevos_a_comer_por_persona;
	
	porcentajedemanuel=huevos_de_manuel-huevos_a_comer_por_persona;
	
    total_a_pagar_a_juan= porcentajedejuan*valor_de_cada_huevo;
    
    total_a_pagar_a_manuel=porcentajedemanuel*valor_de_cada_huevo;
    

    printf("\n Antonio le debe pagar a juan: %.0f", total_a_pagar_a_juan);
    printf("\n Antonio le debe pagar a manuel: %.0f", total_a_pagar_a_manuel);
    
    return 0;
}
 
	int main ()
	{
	dinero_que_debe_pagar();
	
	return  0;
}
	


