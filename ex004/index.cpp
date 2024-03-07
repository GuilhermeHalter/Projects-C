#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int idade;
	char primeiraLetra;
	float altura;
	
	printf("Digite a letra: ");
	scanf("%c",&primeiraLetra);
	printf("Digite o numero: ");
	scanf("%i",&idade);
	printf("Digite a altura: ");
	scanf("%f",&altura);

	printf("Letra = %c\n",primeiraLetra);
	printf("Idade = %i\n",idade);
	printf("Altura = %.2f\n",altura);
	
	return 0 ;
}