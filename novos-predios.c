#include <stdio.h>

int main()
{
    int q_predios, aux, dif, i, j, k, l, m, n, o;
    int count1=0, count2=0, altos=0, medios=0, baixos=0;
    
    scanf("%d", &q_predios);
    
    int predios[q_predios];
    
    for(i = 0 ; i < q_predios ; i++) {
        scanf("%d", &predios[i]);
        count1++;
    }for (m = 0; m < count1 - 1; m++) {
        for (j = m + 1; j < count1; j++) {
            if (predios[m] > predios[j]) {
               int aux = predios[m];
               predios[m] = predios[j];
               predios[j] = aux;
            }
        }
    }for (l = 0; l < count1; l++) {
        if (predios[l] != predios[l + 1]) count2++;
        if (predios[l] >= 100) altos++;
        if (predios[l] >= 50 && predios[l] < 100) medios++;
        if (predios[l] < 50) baixos++;
    }dif = predios[count1 - 1] - predios[0];
    
    printf("%d\n", count2);
    printf("%d\n%d\n%d", altos, medios, baixos);
    printf("\n%d", dif);
    

    return 0;
}
