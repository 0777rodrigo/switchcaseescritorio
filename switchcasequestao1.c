#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("digite o primeiro dia \n");
    scanf("%d", &dia);

    switch (dia)
    {

    case 1:
        printf("domingo \n");
        printf("final de semana \n");
        break;

    case 2:
        printf("segunda-feira \n");
        printf("dia util \n");
        break;

    case 3:
        printf("terca-feira \n");
        printf("dia util \n");
        break;

    case 4:
        printf("quarta-feira \n");
        printf("dia util \n");
        break;

    case 5:
        printf("quinta-feira \n");
        printf("dia util \n");
        break;

    case 6:
        printf("sexta-feira \n");
        break;

    case 7:
        printf("sabado \n");
        printf("final de semana \n");
        break;

    default:
        printf("numero invalido \n");
        break;
    }

    return 0;
}
