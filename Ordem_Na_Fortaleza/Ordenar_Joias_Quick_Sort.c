#include <stdio.h>
#include <stdlib.h>

void swapValues(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int array[], int left, int right){ 
  // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
  int pivot = array[left];
  int i = left;
  int temp; 
  for (int j = left + 1; j <= right; j++){
    if (array[j] <= pivot){
      i++;
      swapValues((array + i), (array + j));
    }
  }
  swapValues((array + i), (array + left));
  return i;
}

void quickSort(int array[], int left, int right){
  if (left < right) {
    int index_pivot = partition(array, left, right);
    quickSort(array, left, index_pivot - 1);
    quickSort(array, index_pivot + 1, right);
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  int left = 0;
  int right = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, left, right);
  
  //Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}