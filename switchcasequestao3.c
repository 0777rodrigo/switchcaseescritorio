#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portuguese");

    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;
    int opcao;
    printf("digite um numero \n ");
    scanf("%f", &numero1);

    printf("digite outro numero \n ");
    scanf("%f", &numero2);

    printf("escolha uma opcao \n ");
    printf("soma: 1 \n ");
    printf("subtracao: 2 \n ");
    printf("multiplicacao: 3 \n");
    printf("divisao: 4 \n ");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
        soma = numero1 + numero2;
        printf("%0.f + %0.f = %0.f ", numero1, numero2, soma);
        break;

    case 2:
        subtracao = numero1 - numero2;
        printf("%0.f - %0.f = %0.f ", numero1, numero2, subtracao);
        break;

    case 3:
        multiplicacao = numero1 * numero2;
        printf("%0.f * %0.f = %0.f ", numero1, numero2, multiplicacao);
        break;

    case 4:
        divisao = numero1 / numero2;
        printf("%0.f / %0.f = %0.f ", numero1, numero2, divisao);
        break;

    default:
        printf("numero invalido \n ");
        break;
    }

    return 0;
}