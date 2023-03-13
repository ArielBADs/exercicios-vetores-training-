#include <stdio.h>

int garagem[501];

int main() {
  int n, k, v, m;
  char c;

  scanf("%d", &n);

  while (1) {
    scanf(" %c %d %d", &c, &k, &v);

    if (c == 'o') {
      break;
    }

    if (c == 'i') {
      if (garagem[v + 1] != 0) { 
        printf("Not empty\n");

        int i;
        for (i = v + 1; i <= n; i++) {
          if (garagem[i] == 0) {
            garagem[i] = k;
            break;
          }
        }

        if (i > n) {
          printf("FULL\n");
        }
      } else {
        garagem[v + 1] = k; 
      }
    } else if (c == 'r') {
      if (garagem[v + 1] == k) { 
        garagem[v + 1] = 0; 
      } else {
        printf("Not Found\n");
      }
    } else if (c == 'm') {
      scanf("%d", &m);

      if (garagem[v + 1] == k) { 
        if (garagem[m + 1] == 0) { 
          garagem[m + 1] = k; 
          garagem[v + 1] = 0; 
        } else {
          printf("Not empty\n");
        }
      } else {
        printf("Not Found\n");
      }
    }
  }

  int i;
  for (i = 0; i <= n; i++) {
    if (garagem[i] != 0) {
      printf("Vaga %d -> %d\n", i - 1, garagem[i]);
    }
  }

  return 0;
}
