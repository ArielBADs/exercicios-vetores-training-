#include <stdio.h>
#include <math.h>

int main()
{
    int t, dia1, dia2, mes1, mes2, mes_f, mes_r;
    int i, j, k, l=0;
    float lat, longi, lat_f, longi_f;
    
    scanf("%d/%d - %d/%d", &dia1, &mes1, &dia2, &mes2);
    scanf("%d\n%f\n%f", &t, &lat, &longi);
    
    mes_r = mes2 - mes1;
    if (dia1 == dia2 && t == 30) mes_r = 0;
    
    j = dia1;
    for (i = 0; i <= mes_r ; i++){
        do {
            if (j > 30) {
                k = j - 30;
                k = 30 - k;
            }else k = j;
            if (j <= 30) {
                lat = lat + (cos(j) * t);
                longi = longi + (sin(j) * t);
                j = j + t;
            }else j = j + t;
            if (i == mes_r && j > dia2 || j == dia2) break;
        }while (j < 30);
        if (j > 30) j = j - 30;
        l++;
    }if (mes_r != 0 && j == 30) mes_f = mes2;
    else if (k + t <= 30 && mes_r == 0) mes_f = mes2;
    else if(k + t > 30 && mes_r == 0) mes_f = mes2 + 1;
    else mes_f = mes1 + l;
    
    printf("o proximo assassinato sera dia %02d/%02d\n", j, mes_f);
    printf("As coordenadas sao lat = %.2f�, long = %.2f�", lat, longi);

    return 0;
}
