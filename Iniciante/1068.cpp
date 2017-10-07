#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    int i;
    char expressao[10100];
    while (scanf("%s", expressao) != EOF){
        stack<char> pilha = stack<char>();
        for (i = 0; i < strlen(expressao); i++){
            if (expressao[i] == '('){
                pilha.push(expressao[i]);
            } else if (expressao[i] == ')'){
                if (pilha.empty()){
                    pilha.push(')');
                    break;
                } else {
                    pilha.pop();
                }
            }
        }

        printf("%s\n", pilha.empty() ? "correct" : "incorrect");
    }
    return 0;
}