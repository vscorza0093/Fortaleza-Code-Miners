#include <stdio.h>

#define ALTA printf("Alta")
#define BAIXA printf("Baixa")
#define IDEAL printf("Ideal")

void checarTemperatura(int temperatura)
{
    if (temperatura < 18)
        BAIXA;

    else if (temperatura > 24)
        ALTA;

    else
        IDEAL;
}

int main() {
    int temperatura;
    scanf("%d", &temperatura);
    
    // TODO: Crie as condições de acordo com as saídas deste desafio.
    checarTemperatura(temperatura);
}

