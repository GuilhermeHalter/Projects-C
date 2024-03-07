#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main(void)
{
    float Lado;
    float Area;
    float dobroArea;
   
    printf("Informe a medida do lado do quadrado: ");
    scanf("%f",&Lado);
    
    Area = Lado * Lado;
    dobroArea = Area * 2;
    
    printf("A area do quadrado é: %.1f\n", Area);
    printf("E o dobro da Area é: %.1f\n", dobroArea);

    return 0;
}
