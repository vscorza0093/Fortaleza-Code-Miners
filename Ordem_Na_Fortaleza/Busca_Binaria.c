#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool estaOrdenado(int array[], int quantidade) {
    for (int i = 1; i < quantidade; i++) {
    if (array[i - 1] > array[i]) {
        return false;
    }
    }
    return true;
}

void bogoSort(int array[], int quantidade) {
    while (!estaOrdenado(array, quantidade)) {
    for (int i = 0; i < quantidade; i++) {
        int j = i + rand() % (quantidade - i);
        trocar(&array[i], &array[j]);
    }
    }
}

int buscaBinaria(int array[], int quantidade, int valor) {
    //TODO: Implemente o algoritmo de Busca Binária para encontrar o valor.
    if (array[quantidade/2] == valor){
        return 1;
    }
    if (quantidade == 1){
        return 0;
    }
    
    if (valor > array[quantidade/2]){
        int novo_index = quantidade/2 + 1;
        buscaBinaria(array + novo_index, novo_index, valor);
    }
    else{
        buscaBinaria(array, quantidade - quantidade/2, valor);
    }
}

int main() {
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int conteudos[quantidade];
    for (int i = 0; i < quantidade; i++) {
    scanf("%d", &conteudos[i]);
    }

    // Ordena os conteúdos usando Bogo Sort!?
    bogoSort(conteudos, quantidade);

    bool encontrou = buscaBinaria(conteudos, quantidade, 777);

    //TODO: Criar as condições necessárias para imprimir "S" ou "N".
    if (encontrou == true)
        printf("S");
    else
        printf("N");

    return 0;
}