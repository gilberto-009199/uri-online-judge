#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int ti, di, hi, mi, si;     // Inicio
    int tf, df, hf, mf, sf;     // Fim
    int t, d, h, m, s;         // Resultado

    scanf("%*s %d %d : %d : %d", &di, &hi, &mi, &si);
    scanf("%*s %d %d : %d : %d", &df, &hf, &mf, &sf);

    ti = di * 86400 + hi * 3600 + mi * 60 + si;
    tf = df * 86400 + hf * 3600 + mf * 60 + sf;

    t = tf - ti;

    d = t / 86400;  t = t % 86400;
    h = t / 3600;   t = t % 3600;
    m = t / 60;     t = t % 60;
    s = t;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}
