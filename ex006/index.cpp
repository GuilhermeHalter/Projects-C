#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int idade;
	int ano;
	int anoNasc;
	
	ano = 2024;
	
	printf("Informe sua idade: ");
	scanf("%i",&idade);

	anoNasc = ano - idade  ;
	
	printf("Voce nasceu no ano de = %i\n",anoNasc);
	
	return 0 ;
}