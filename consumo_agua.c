#include <stdio.h>

int main(void)
{
    int resident;
    float consumption;
    float totalConsumption = 0;
    float averageConsumption;

    for (resident = 1; resident <= 5; resident++) {
        printf("Consumo mensal do morador %d (em m3): ", resident);
        scanf("%f", &consumption);

        if (consumption <= 20) {
            printf("Morador %d: consumo dentro da media.\n", resident);
        } else {
            printf("Morador %d: consumo acima da media.\n", resident);
        }

        totalConsumption += consumption;
    }

    averageConsumption = totalConsumption / 5;

    printf("\nConsumo medio geral: %.2f m3\n", averageConsumption);

    return 0;
}
