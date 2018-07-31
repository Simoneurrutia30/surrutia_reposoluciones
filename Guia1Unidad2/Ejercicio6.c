#include <stdio.h>

int main (){

    int matriz[7][24];
    int i, j;


    for (i=0;i<7;i++){
        for (j=0;j<24;j++){
            printf ("Ingrese las temperaturas registradas: [Dia %d][ Hora %d]", i+1,j+1);
            scanf("%d ",&matriz[i][j]) ;


    }
}

      for(i=0; i<7; i++){
         for(j=0; j<24; j++){
            printf("%d",matriz[i][j]);
         }
	 }
        return 0;
      }
