#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que peça dois números, calcule e mostre a soma dos mesmos 

int main(void)
{
    float numberP;
    float numberS;
    float result;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%f",&numberP);
    printf("Digite o valor do segundo numero: ");
    scanf("%f",&numberS);
    
    result = numberP + numberS;
    
    printf("O resultado da soma do primeiro e do segundo numero é: %.1f\n", result);
    
    return 0;
}