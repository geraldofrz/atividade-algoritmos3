#include <stdio.h>

int main(void)
{
    int option;
    float balance = 0;

    do {
        printf("\n=== COFRINHO DIGITAL ===\n");
        printf("Saldo atual: R$ %.2f\n", balance);
        printf("1 - Adicionar moeda de R$ 0,50\n");
        printf("2 - Adicionar moeda de R$ 1,00\n");
        printf("3 - Adicionar moeda de R$ 2,00\n");
        printf("0 - Parar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                balance += 0.50;
                break;
            case 2:
                balance += 1.00;
                break;
            case 3:
                balance += 2.00;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (option != 0);

    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", balance);

    return 0;
}
