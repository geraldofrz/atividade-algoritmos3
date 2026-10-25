#include <stdio.h>

int main(void)
{
    int customer;
    float rating;
    float totalRating = 0;
    float averageRating;

    for (customer = 1; customer <= 10; customer++) {
        do {
            printf("Nota do atendimento do cliente %d (0 a 10): ", customer);
            scanf("%f", &rating);

            if (rating < 0 || rating > 10) {
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            }
        } while (rating < 0 || rating > 10);

        totalRating += rating;
    }

    averageRating = totalRating / 10;

    printf("\nMedia geral do atendimento: %.2f\n", averageRating);

    if (averageRating < 7) {
        printf("ALERTA: a media do atendimento esta abaixo de 7!\n");
    }

    return 0;
}
