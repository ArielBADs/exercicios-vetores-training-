#include <stdio.h>
#include <string.h>

int main() {
 
  int tam, deslocamento, i, j, alfa_tam = 26, p_tam;

  scanf("%d", &tam);
  
  char mensagem[tam + 1];

  scanf("%s", mensagem);

  scanf("%d", &deslocamento);
  
  p_tam = strlen(mensagem);

  for (i = 0; i < tam; i++) {
    char c = mensagem[i];
    if (c >= 'a' && c <= 'z') {
      mensagem[i] = 'a' + (c - 'a' + deslocamento) % alfa_tam;
    }
  }
  if (tam < p_tam){
      for(j = tam; j < p_tam; j++) mensagem[j] = ' ';
  }
  
  printf("%s", mensagem);

  return 0;
}
