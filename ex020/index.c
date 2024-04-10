#include <stdio.h>
#include <stdlib.h>

/*
Uma indústria produz três tipos de peças: parafuso, 
rosca e porca. Sabendo-se que o preço unitário de cada 
tipo é R$ 3,00, R$ 1,00 e R$ 0,50 e que é concedido um
desconto de 2% por parafuso vendido,  2,5% por porca 
vendida e 2,7% por rosca vendida, elabore um programa 
que nos dê a resposta no seguinte formato:

Cliente: 9999 - xxxxxxxxxxxxxxxxxxxxxxx

Quant	Produto		Unit.	Bruto		 Líquido
99	Parafuso		3,00	999.99		  999.99
99	Rosca			1,00	999.99		  999.99
99	Porca			0,50	999.99		  999.99
					Total		9999.99

*/

int main(void)
{
    
    //amount
    float quantidadeParafuso, quantidadeRosca, quantidadePorca;
    
    //price
    float priceParafuso, priceRosca, pricePorca;
    
    //tax
    float taxParafuso, taxRosca, taxPorca;
    
    float taxUnitParafuso, taxUnitRosca, taxUnitPorca;
    
    //value
    float descontoParafuso, descontoRosca, descontoPorca;

    //Salario Bruto
    float brutoParafuso, brutoRosca, brutoPorca;

    //Salario Liquido	
    float liquidoParafuso, liquidoRosca, liquidoPorca;
    
    float Total;
    
    printf("Informe a quantidade de Parafuso");
    scanf("%f\n",&quantidadeParafuso);
    fflush(stdin);
    
    printf("Informe a quantidade de Rosca");
    scanf("%f\n",&quantidadeRosca);
    fflush(stdin);
    
    printf("Informe a quantidade de Porca");
    scanf("%f\n",&quantidadePorca);
    fflush(stdin);
    
    
    priceParafuso = 3;
    priceRosca = 1;
    pricePorca = 0.50;
    
    taxParafuso = 0.02;
    taxPorca = 0.025;
    taxRosca = 0.027;
    
    brutoParafuso = priceParafuso * quantidadeParafuso;
    brutoRosca = priceRosca * quantidadeRosca;
    brutoPorca = pricePorca * quantidadePorca;
    
    taxUnitParafuso = taxParafuso * quantidadeParafuso;
    taxUnitRosca = taxRosca * quantidadeRosca;
    taxUnitPorca = taxPorca * quantidadePorca;
    
    descontoParafuso = brutoParafuso * taxUnitParafuso;
    descontoRosca = brutoRosca * taxUnitRosca;
    descontoPorca = brutoPorca * taxUnitPorca;
    
    liquidoParafuso = brutoParafuso - descontoParafuso;
    liquidoRosca = brutoRosca - descontoRosca;
    liquidoPorca = brutoPorca - descontoPorca;
    
    Total = liquidoParafuso + liquidoRosca + liquidoPorca;
    
    
    printf("%f\n",liquidoParafuso);
    printf("%f\n",liquidoRosca);
    printf("%f\n",liquidoPorca);
    
    printf("Quant  "); printf("Produto      "); printf("Unit.  "); printf("Bruto  "); printf("Liquido \n");
    printf("%.0f     ", quantidadeParafuso); printf("Parafuso     "); printf("%.2f     ", priceParafuso); printf("%.2f     ", brutoParafuso); printf("%.2f\n",liquidoParafuso);
    printf("%.0f     ", quantidadeRosca); printf("Rosca        "); printf("%.2f     ", priceRosca); printf("%.2f     ", brutoRosca); printf("%.2f\n",liquidoRosca);
    printf("%.0f     ", quantidadePorca); printf("Porca        "); printf("%.2f     ", pricePorca); printf("%.2f     ", brutoPorca); printf("%.2f\n",liquidoPorca);
    printf("Total: %.2f",Total);
    
    return 0;
}
