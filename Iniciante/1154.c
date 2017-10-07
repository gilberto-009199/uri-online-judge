#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalIdades = 0, idadeAtual = 0, qtdIdade = 0;
    while (1){
        scanf("%d", &idadeAtual);
        if (idadeAtual < 0)
            break;

        totalIdades += idadeAtual;
        qtdIdade++;
    }
    printf("%.2lf\n", totalIdades / (double)qtdIdade);
    return 0;
}
