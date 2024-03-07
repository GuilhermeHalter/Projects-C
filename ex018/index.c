#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa para calcular a quantidade necessária de latas de tinta
para pintar uma parede com X metros de largura por H metros de altura. Considere
que o consumo de latas de tinta por metro quadrado é 3 litros e a quantidade de tinta por lata é 3,6 litros.
*/

int main(void)
{
    
    float metrosQuadrados;
    float Xlarg;
    float Halt;
    
    float lataTinta;
    float conta;
    float lataTotal;
    
    printf("Informe um valor para altura da parede ");
    scanf("%f\n",&Xlarg);
    fflush(stdin);
    
    printf("Informe um valor para largura da parede ");
    scanf("%f\n",&Halt);
    fflush(stdin);
    
    metrosQuadrados = Xlarg * Halt;
    lataTinta = 3.6;
    
    conta = metrosQuadrados * 3;
    
    lataTotal = conta / lataTinta;
    
    
    printf("A parede tem %.0f\n",metrosQuadrados);
    printf("metros quadrados");
    
    printf("%.1f",lataTotal);
    printf("é a quantidade de latas de tintas que voce vai gastar");
    
    return 0;
}