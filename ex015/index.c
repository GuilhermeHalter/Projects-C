#include <stdio.h>
#include <stdlib.h>

/*⦁	Construa um algoritmo que peça uma temperatura em graus Celsius(ºC), 
transforme e mostre na tela a temperatura em graus Farenheit(ºF).*/

int main(void)
{
    float Farenheit;
    float Celsius;
    
    printf("Informe a temperatura em : Celsius(ºC) ");
    scanf("%f",&Celsius);

    Farenheit = (Celsius * 1.8) + 32;
    
    printf("A temperatura de Celsius %.1f\n", Celsius);
    printf("em Farenheit é %.1f\n", Farenheit);
  
    return 0;
}