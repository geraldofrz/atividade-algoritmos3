#include <stdio.h>

int main(void)
{
    int steps;
    int totalSteps = 0;
    int hours = 0;
    const int dailyGoal = 10000;

    while (totalSteps < dailyGoal) {
        printf("Passos dados na hora %d: ", hours + 1);
        scanf("%d", &steps);

        if (steps < 0) {
            printf("Quantidade invalida! Digite um valor maior ou igual a zero.\n");
        } else {
            totalSteps += steps;
            hours++;
            printf("Total ate agora: %d passos\n", totalSteps);
        }
    }

    printf("\nMeta de %d passos atingida!\n", dailyGoal);
    printf("Total de passos: %d\n", totalSteps);
    printf("Horas necessarias: %d\n", hours);

    return 0;
}
