#include <stdio.h>
#include <stdlib.h>

/*Construa um algoritmo que peça a temperatura em graus Farenheit(ºF)
, transforme e mostre na tela a temperatura em graus Celsius(ºC). C=5*(F-32)/9}.*/

int main(void)
{
    float Farenheit;
    float Celsius;
    
    printf("Informe a temperatura em Farenheit(ºF): ");
    scanf("%f",&Farenheit);

    Celsius = 5*(Farenheit-32)/9;
    
    printf("A temperatura de %.1f\n Farenheit ", Farenheit);
    printf("em Celsius é %.1f\n", Celsius);
  
    return 0;
}