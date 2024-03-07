#include <stdio.h>
#include <stdlib.h>

/*
Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente cada motor. Existe a necessidade de saber quantos motores deverão ser comprados de cada modelo e quanto custará esta compra. Para isto elabore um programa que: 

⦁	Pergunte quantas máquinas serão vendidas; 
⦁	Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo; 
⦁	Calcule e apresente na tela o custo total por máquina, o custo por tipo de motor e o custo total da compra.
*/

int main(void)
{
    int numMaquina;
    
    int motorVinte;
    int motorUm;
    int motorCinco;
    
    float valorMaquina;
    float valorMotorVinte;
    float valorMotorUm;
    float valorMotorCinco;
    float valorTotal;
    
    printf("Informe a quantidade de maquinas a serem compradas: ");
    scanf("%i",&numMaquina);
    
    valorMaquina = (1500 + (600*3) + (300*2)); 
    
    motorVinte = 1 * numMaquina;
    motorUm    = 2 * numMaquina;
    motorCinco = 3 * numMaquina;
    
    valorMotorVinte = motorVinte * 1500;
    valorMotorUm = motorUm * 300;
    valorMotorCinco = motorCinco * 600;
    
    valorTotal = valorMotorVinte + valorMotorUm + valorMotorCinco;
    
    printf("O numero de motores 20CV que deverao ser comprados são de: %i\n", motorVinte);
    printf("O numero de motores 1CV que deverao ser comprados são de: %i\n", motorUm);
    printf("O numero de motores 5CV que deverao ser comprados são de: %i\n", motorCinco);
    
    printf("O valor a pagar de 1 maquina é de %.1f\n", valorMaquina);
    
    printf("O valor a pagar nos motores 20CV é de %.1f\n",valorMotorVinte);
    printf("O valor a pagar nos motores 1CV é de %.1f\n",valorMotorUm);
    printf("O valores a pagar nos motores de 5CV é de %.1f\n",valorMotorCinco);
    
    printf("O valor total a pagar é de %.1f\n", valorTotal);
    
    return 0;
}