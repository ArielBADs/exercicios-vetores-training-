#include <stdio.h>

int sort(int *b, int cont) {
    
    int i, j, aux;
    
    for (i = 0; i < cont - 1; i++) 
        for (j = i + 1; j < cont; j++) 
            if (b[i] > b[j]) {
            aux = b[i];
            b[i] = b[j];
            b[j] = aux;}}

int main()
{
    int a[100], b[100], c[100];
    int k=0, c1=0, c2=0, c3=0;
    int i;
    
    do{
        scanf("%d", &a[k]);
        c1++;
        k++;
    }
    while(a[k-1] != 420);
    k=0;
    do{
        scanf("%d", &b[k]);
        c2++;
        k++;
    }
    while(b[k-1] != 420);
    k=0;
    do{
        scanf("%d", &c[k]);
        c3++;
        k++;
    }
    while(c[k-1] != 420);
    
    sort(a, c1);
    sort(b, c2);
    sort(c, c3);
    
    printf("%d\n", c1);
    for(i = 0 ; i < c1 ; i++) printf("%d ", a[i]);
    printf("\n%d\n", c2);
    for(int i = 0 ; i < c2 ; i++) printf("%d ", b[i]);
    printf("\n%d\n", c3);
    for(int i = 0 ; i < c3 ; i++) printf("%d ", c[i]);
    
    return 0;
}
