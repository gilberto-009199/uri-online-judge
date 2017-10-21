#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int casos, pa, pb;
    double g1, g2;
    scanf("%d", &casos);
    while(casos--){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        int anos = 0;
        while (pa <= pb && anos <= 100){
            pa += pa * (g1 / 100.0);
            pb += pb * (g2 / 100.0);
            anos++;
        }
        if (anos > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", anos);
    }
    return 0;
}
