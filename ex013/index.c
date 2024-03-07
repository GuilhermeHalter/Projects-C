#include <stdio.h>
#include <stdlib.h>

/*⦁	Uma firma contrata um encanador a 25,00 por dia. 
Crie um programa que solicite o número de dias trabalhados
pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo-se que são descontados 8% para o Imposto de Renda.*/

int main(void)
{
    int valorDia;
    float diasTrabalhados;
    float salarioBruto;
    float desconto;
    float salarioLiquido;
    
    valorDia = 25;
    
    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%f",&diasTrabalhados);

    salarioBruto = valorDia * diasTrabalhados;
    desconto = 0.08 * salarioBruto;
    salarioLiquido = salarioBruto - desconto;
    
    printf("O salario liquido do encanador que ganha 25 reais por dia e com 8 por cento de imposto de renda é de %.1f\n", salarioLiquido);
  
    return 0;
}