#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, tamanhoPalavra;
    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    tamanhoPalavra = strlen(palavra);

    printf("\nA palavra ao contrario: ");
    for(i = tamanhoPalavra - 1; i >= 0; i--)
     {
       printf("%c" ,palavra[i]);
     }

}

