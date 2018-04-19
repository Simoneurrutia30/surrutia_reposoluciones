/*Algoritmo narrado
 *definir variables
 *ingresar la edad del niño 
 *ingresar el peso del niño en kilos
 * calcular la dosis (en gotas)de remedio que se le debe administrar al niño
 * 
 * 
 */
 #include <stdio.h>
 int main()
 {
	 float peso_en_kilos;
	 int dosis;
	 int gotas=5
	 int edad;
	 
	 printf("Ingresar la edad del niño:");
	 scanf("%d", &edad);
	 printf("Ingresar cuanto pesa del niño:");
	 scanf("%f", &peso_en_kilos);
	 
	 dosis= gotas*peso;
	 
	if(edad<1)
	{
		printf("La cantidad de dosis en gotas que le debe dar al niño es: %d", dosis);
	}
	else if (edad>1)
	{
		printf("La cantidad de dosis en gotas que le debe dar al niño es: %d", dosis);
	}
	return 0;
}
		
	
	 
	 
 
