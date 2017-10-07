#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtd, total, qtdRato = 0, qtdSapo, qtdCoelho, casos;
    char tipo;

    scanf("%d", &casos);
    //printf("##%d\n", casos);
    total = qtdCoelho = qtdRato = qtdSapo = 0;
    for (i = 0; i < casos; i++){
        scanf("%d %c", &qtd, &tipo);
         //printf("##%d %c\n", qtd, tipo);
        total += qtd;
        if (tipo == 'C'){
            qtdCoelho = qtdCoelho + qtd;
            //printf("%d\n", qtdCoelho);
            // qtdCoelho += qtd;
        } else if (tipo == 'S'){
            qtdSapo += qtd;
        } else {
            qtdRato += qtd;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", qtdCoelho);
    printf("Total de ratos: %d\n", qtdRato);
    printf("Total de sapos: %d\n", qtdSapo);
    double percCoelhos = (qtdCoelho * 100) / (double)total;
    double percRatos = (qtdRato * 100) / (double)total;
    double percSapos = (qtdSapo * 100) / (double)total;
    printf("Percentual de coelhos: %.2lf \%\n", percCoelhos);
    printf("Percentual de ratos: %.2lf \%\n", percRatos);
    printf("Percentual de sapos: %.2lf \%\n", percSapos);

    return 0;
}
