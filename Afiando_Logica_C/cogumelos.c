#include <stdio.h>


int colherCogumelos(int tempoParaColher){
    return tempoParaColher / 3;
}


int main() {
    int tempoParaColher, cogumelosColhidos;

    // Lê a quantidade de minutos disponíveis para colheita
    scanf("%d", &tempoParaColher);

    // TODO: Calcule e imprima a quantidade de cogumelos colhidos.
    cogumelosColhidos = colherCogumelos(tempoParaColher);
    printf("%d\n", cogumelosColhidos);

    return 0;
}