#include <stdio.h>
#include <stdlib.h>

/*Construa um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.*/
int main(void)
{
    float quantoReais;
    float horasTrabalhadas;
    float salario;
    
    printf("Qual o valor que voce ganha por hora trabalhada: ");
    scanf("%f",&quantoReais);
    printf("Quantas horas voce trabalha no mes: ");
    scanf("%f",&horasTrabalhadas);

    
    salario = quantoReais * horasTrabalhadas;
    
    printf("Se voce ganha por hora %.1f\n", quantoReais);
    printf("e trabalha por %.1f\n", horasTrabalhadas);
    printf("no final do mes voce vai ganhar: %.2f\n", salario);
    
    return 0;
}