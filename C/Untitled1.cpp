#include <stdio.h>
#include <assert.h>

int contarVogais(char palavra[]) {
    char vogais[] = "aeiouAEIOU";
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {
                numVogais++;
                break;
            }
        }
    }

    return numVogais;
}


int main() {

    char palavra[] = "abecedario";
    assert(6 == contarVogais(palavra));

    return 0;
}
