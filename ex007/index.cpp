#include <stdio.h>
#include <stdlib.h>

//transformando metros para centimetros

int main(void){
	
	int metros;
	int centimetros;
	
	printf("Informe os metros: ");
	scanf("%i",&metros);

	centimetros = metros * 100  ;
	
	printf("O valor de %i\n",metros);
	printf("equivalem a = %i\n",centimetros);
	
	return 0 ;
}