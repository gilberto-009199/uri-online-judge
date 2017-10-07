#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    int i, numeros, contador = 0;
    char expressao[10100];
    scanf("%d", &numeros);
    while (numeros--){
        stack<char> pilha = stack<char>();
        contador = 0;
        scanf(" %s", expressao);
        for (i = 0; i < strlen(expressao); i++){
            if (expressao[i] == '<'){
                pilha.push(expressao[i]);
            } else if (expressao[i] == '>'){
                if (!pilha.empty() && pilha.top() == '<'){
                    pilha.pop();
                    contador++;
                }
            }
        }
        printf("%d\n", contador);
    }
    return 0;
}