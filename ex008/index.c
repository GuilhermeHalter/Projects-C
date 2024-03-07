#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que peça um número com 5 casas decimais e arredonde para duas.

int main(void)
{
    float number;
    
    
    printf("Informe um número com 5 casa decimais: ");
    scanf("%f",&number);
    
    printf("O Numero informado com 2 casa decimais fica %.2f\n",number);

    return 0;
}
