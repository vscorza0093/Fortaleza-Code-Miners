#include <stdio.h>
#include <stdlib.h>

void printarReliquias(int reliquias[], int quantidade){
  for (int i = 0; i < quantidade; i++){
      printf("%d", reliquias[i]);
  }
  printf("\n");
}


void insertionSort(int reliquias[], int quantidade){
  for (int i = 0; i < quantidade - 1; i++)
  {
    int temp = 0;
    if (reliquias[i] > reliquias[i + 1]){
      temp = reliquias[i + 1];
      reliquias[i + 1] = reliquias[i];
      reliquias[i] = temp; 
      for (int j = i; j > 0; j--)
      {
        if (reliquias[j - 1] >= 0)
        {
          if (reliquias[j] > reliquias[j - 1]){
            break;
          }
          else{
            temp = reliquias[j - 1];
            reliquias[j - 1] = reliquias[j];
            reliquias[j] = temp;
          }
        }
      }
    }
  }
}

// void insertionSort(int reliquias[], int quantidade) {
//     for (int i = quantidade - 1; i >= 0; i--)
//     {
//         int temp = 0;
//         for (int j = 0; j < 0 + i; j++)
//         {
//             if (reliquias[j] > reliquias[i])
//             {
//                 temp = reliquias[i];
//                 reliquias[i] = reliquias[j];
//                 reliquias[j] = temp;
//             }
//         }
//         printarReliquias(reliquias, quantidade);
//     }
// }

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int  reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", & reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar os "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenados
  for (int i = 0; i < quantidade; i++) {
    printf("%d ",  reliquias[i]);
  }
  return 0;
}