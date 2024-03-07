#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo:

	Salário Bruto		: R$ 
       	(-) IR           (15%)	: R$
	(-) INSS      (11%)	: R$
	(-) Sindicato ( 3%)	: R$
	Salário Liquido	: R$

	Obs.: 
Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto – Descontos

*/

int main(void)
{
    
    float salarioBruto;
    float salarioLiquido;
    float IR;
    float INSS;
    float Sindicato;
    float Desconto;
    
    printf("Informe o valor do seu salario bruto mensal ");
    scanf("%f\n",&salarioBruto);
    fflush(stdin);
    
    IR = 0.15;
    INSS = 0.11;
    Sindicato = 0.03;
    
    Desconto = (IR * salarioBruto) + (INSS * salarioBruto) + (Sindicato * salarioBruto);
    
    salarioLiquido = salarioBruto - Desconto;
    
    printf("%.1f", salarioLiquido);
    
    return 0;
}