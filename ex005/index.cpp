#include <stdio.h>
#include <stdlib.h>

// Calculando a area de um circulo

int main(void){
	
	float raio;
	float pi;
	float area; 
	
	pi = 3.1415;
	
	
	printf("Informe o valor do Raio do circulo: ");
	scanf("%f",&raio);

	area = pi * (raio * raio);
	
	printf("O valor do raio do circulo = %.2f\n",area);
	
	return 0 ;
}