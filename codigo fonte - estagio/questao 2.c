#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, n1 = 0, n2 = 1, aux, numero, fazParte;   // variavel aux - auxiliar, para copiar o ultimo numero.
                                                        // variavel numero, para inserir um numero qualquer
                                                        // variavel fazParte, para verificar se o numero faz parte da sequencia
    printf("Digite um numero e veja se ele faz parte da sequencia de Fibonacci: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++) {

        if (numero == n1 || numero == n2) {
            fazParte = 1; // O número faz parte da sequência
            break;
        }

        aux = n1 + n2;
        n1 = n2;
        n2 = aux;

    }

    if (numero != n2) {
        printf("O numero '%d', não faz parte da sequencia de Fibonacci!", numero);
    }
    else{
        printf("O numero '%d', faz parte da sequencia de Fibonacci!", n2);
    }


}
