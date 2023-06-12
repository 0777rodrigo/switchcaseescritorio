#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("escreva o codigo \n");
    scanf("%d", &codigo);

    switch (codigo)
    {

    case 100:
        printf("detergente \n");
        printf("valor = 1.59 \n");
        break;

    case 101:
        printf("esponja \n");
        printf("valor = 4.59 \n");
        break;

    case 102:
        printf("la de aco \n");
        printf("valor = 1.79 \n");

    default:
        printf("numero invalido \n");
        break;
    }

    return 0;
}
