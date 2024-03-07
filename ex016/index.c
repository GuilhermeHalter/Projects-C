#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre:

⦁	o produto do dobro do primeiro com metade do segundo .(FEITO)
⦁	a soma do triplo do primeiro com o terceiro.(FEITO)
⦁	o terceiro elevado ao cubo
*/

int main(void)
{
    int numberP;
    int numberS;
    float numberT;
    
    float questaoP;
    float questaoS;
    float questaoT;
    
    printf("Informe o valor do primeiro numero ");
    scanf("%i",&numberP);
    
    printf("Informe o valor do segundo numero ");
    scanf("%i",&numberS);
    
    printf("Informe o valor do terceiro numero ");
    scanf("%f",&numberT);
    
    
    questaoP = (numberP * 2) * (numberS / 2);
    printf("O valor do dobro do primeiro com metade do segundo %.1f\n", questaoP);
    
    questaoS = (numberP * 3) + numberT;
    printf("O valor da soma do triplo do primeiro com o terceiro %.1f\n", questaoS);
    
    questaoT = numberT * numberT * numberT;
    printf("O terceiro numero elevado ao quadrado é %f\n", questaoT);
    
  
    return 0;
}