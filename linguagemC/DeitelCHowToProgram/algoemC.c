#include <stdio.h>

int main(int argc, char const *argv[])
{
    int gallons = 0,
        contador = 0;

    double averageMilesPerGallon = 0,
           milesPerGallon = 0,
           acumulador = 0;

    while (gallons != -1)
    {
        puts("\nInforme quantidade em gallons e quantidade em milhas percorridas:");
        scanf("%d", &gallons);
        if (gallons == -1)
        {
            break;
        }
        else if (gallons <= 0)
        {
            continue;
        }
        else
        {
            int milesDriven = 0;
            scanf("%d", &milesDriven);
            if (milesDriven > 0)
            {
                milesPerGallon = (double)milesDriven / gallons;
            }
            printf("Este tanque apresentou %.2f miles per gallon.\n", milesPerGallon);
            acumulador += milesPerGallon;
            contador++;
        }
    }

    averageMilesPerGallon = acumulador / contador;
    if (averageMilesPerGallon > 0)
    {
        printf("No geral a média de miles per gallon foi %.2f.\n", averageMilesPerGallon);
    }
    else
    {
        puts("Não foram inseridos dados para cálculo.");
    }

    return 0;
}
