#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que peça as 4 notas bimestrais e mostre a média, com uma casa decimal  

int main(void)
{
    float notaP;
    float notaS;
    float notaT;
    float notaQ;
    float media;
    
    printf("Digite o valor da primeira nota: ");
    scanf("%f",&notaP);
    printf("Digite o valor da segunda nota: ");
    scanf("%f",&notaS);
    printf("Digite o valor da terceira nota: ");
    scanf("%f",&notaT);
    printf("Digite o valor da quarta nota: ");
    scanf("%f",&notaQ);
    
    media = (notaQ + notaS + notaT + notaQ)/4;
    
    printf("A nota 1 %.1f\n", notaP);
    printf("A nota 2 %.1f\n", notaS);
    printf("A nota 3 %.1f\n", notaT);
    printf("A nota 4 %.1f\n", notaQ);
    printf("A media das notas é de: %.2f\n", media);
    
    return 0;
}