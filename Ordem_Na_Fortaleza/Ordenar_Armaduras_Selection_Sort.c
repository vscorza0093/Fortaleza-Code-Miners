#include <stdio.h>

// void trocar(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// Crescente 

// void selectionSort(int array[], int quantidade){ 
//   for (int i = 0; i < quantidade; i++)
//   {
//     int menorNumero;
//     int temp;
//     int index;
//     menorNumero = array[i];
    
//     for (int j = i + 1; j < quantidade; j++)
//     {
//         if (menorNumero > array[j])
//         {
//             temp = array[i];
//             menorNumero = array[j];
//             index = j;
//         }
//     }
//     array[i] = menorNumero;
//     array[index] = temp;
//   }
// }

void selectionSort(int array[], int quantidade){ 
  for (int i = quantidade - 1; i > 0; i--)
  {
    int menorNumero;
    int temp;
    int index;
    int mudar = 0;
    menorNumero = array[i];
    
    for (int j = i; j >= 0; j--)
    {
        if (menorNumero > array[j])
        {
            mudar = 1;
            temp = array[i];
            menorNumero = array[j];
            index = j;
        }
    }
    if (mudar == 1)
    {
        array[i] = menorNumero;
        array[index] = temp;
    }
  }
}


int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int armaduras[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &armaduras[i]);
  }
  
  // Executa o algoritmo "selectionSort" para deixar as "armaduras" em ordem DECRESCENTE.
  selectionSort(armaduras, quantidade);
  
  // Imprime as "armaduras" ordenados.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", armaduras[i]);
  }
  
  return 0;
}