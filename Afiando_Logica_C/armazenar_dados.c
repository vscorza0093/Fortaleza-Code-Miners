#include <stdio.h>

int main() {
    int capacidadeAtual, aumentoPercentual;
  
  // Lê as entradas do usuário
    scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

  // TODO: Declare e calcule a nova capacidade do disco de Mithril.
    double percentual = aumentoPercentual / 100.00;
    double capacidadeAtualizada = (capacidadeAtual * percentual) + capacidadeAtual;

  // TODO: Imprima a nova capacidade.
    printf("%.0f", capacidadeAtualizada);

  return 0;
}