#include <stdio.h>

int main()
{
    printf("Hello C\n");

    int consumo1, consumo2, consumo3;

    scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

    float soma = (consumo1 + consumo2 + consumo3);

    float resultado = soma / 3;
    
    printf("\nMédia de consumo: %.2f\n", resultado);

    char exit;
    scanf("%c", &exit);

    printf("Press Enter to exit");

    scanf("%c", &exit);

    return 0;
}