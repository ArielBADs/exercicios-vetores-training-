#include <stdio.h>

int main() {
  int a[100000], resposta = 0;
  int k = 0, i, j;

  while (scanf("%d", &a[k]) != EOF) k++;
  for (i = 0; i < k - 1; i++) {
    for (j = i + 1; j < k; j++) {
      if (a[i] > a[j]) {
        int aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }
  for (i = 0; i < k; i++) {
    if (i == k - 1 || a[i] != a[i + 1]) {
      resposta = a[i];
      break;
    }
    i++;
  }
  for (int m = 0; m < k; m++) printf("%d ", a[m]);
  printf("\n%d", resposta);
  return 0;
}
