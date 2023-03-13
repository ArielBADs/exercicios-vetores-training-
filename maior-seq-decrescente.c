#include<stdio.h>
#include<stdlib.h>
#define n_max 100

int T, N, V[n_max];

int maior_sequencia(int N, int *V) {
    
  int i, j, maior, atual;
  
  maior = atual = 1;
  for (i = 1; i < N; i++) {
    if (V[i-1] > V[i]) {
      atual++;
      if (atual > maior) maior = atual;
    }else atual = 1;
  }return maior;
}

int main() {
    
    int a, b;
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        for (a = 0; a < N; a++) scanf("%d", &V[a]);
        int maior = maior_sequencia(N, V);
        if (maior == 1) printf("0\n");
        else {
            printf("%d\n", maior);
            int atual = 1;
            for (a = 0; a < N; a++) {
                if (V[a-1] > V[a]) atual++;
                else atual = 1;
                if (atual == maior) {
                    for (b = a-maior+1; b <= a; b++) printf("%d ", V[b]);
                    printf("\n");
                    break;
                }
            }
        }
    }
  return 0;
}
