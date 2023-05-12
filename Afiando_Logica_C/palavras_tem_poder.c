#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
    //int leng = len(palavra);

    int leng = strlen(palavra);
    char palavra_final[100];
    int j = 0;

    for (int i = leng - 1; i >= 0; i--, j++)
    {
        palavra_final[j] = palavra[i];
        printf("%s", palavra_final[j]);
    }
    printf("%s\n", palavra_final);
}

int main() {
    char palavra[100];

    // Lê a palavra a ser invertida do usuário.
    scanf("%s", palavra);

    // Chama a função que inverte a palavra.
    inverter(palavra);

    return 0;
}

// Solução do Chat GPT

#include <stdio.h>
#include <string.h>

char* inverteString(char *str){
  int tamanho = strlen(str);
  char tmp;
  for(int i = 0; i < tamanho/2; i++){
    tmp = str[i];
    str[i] = str[tamanho - i - 1];
    str[tamanho - i - 1] = tmp;
  }
  return str;
}

int main(){
  char string[101];
  fgets(string, 100, stdin);
  printf("%s", inverteString(string));
  return 0;
}