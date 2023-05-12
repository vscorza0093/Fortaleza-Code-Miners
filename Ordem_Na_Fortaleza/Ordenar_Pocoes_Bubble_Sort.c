#include<stdio.h>
#include<stdlib.h>


void trocar(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;   
}

void bubbleSort(int array[], int quantidade){ 
    // TODO: Implemente o algoritmo "Bubble Sort".
    for (int i = 0; i < quantidade; i++)
    {
        int temp = 0;
        for (int j = 0; j < quantidade -1; j++)
        {
            if (array[j] > array[i]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}
/*
9
1000 1 10 100 0 4 4000 400 40
*/

int main() {
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int frascos[9];
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &frascos[i]);
    }

    // Executa o algoritmo "bubbleSort" para ordenar os "frascos".
    bubbleSort(frascos, quantidade);

    // Imprime os "frascos" ordenados.
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", frascos[i]);
    }

    return 0;
}