#include "../include_c/busca_binaria.h"
#include <stdio.h>
#include <stdbool.h> // adiciona suporte ao tipo bool porque nao existe suporte nativamente no c

// Simulação da API
int bad = 4; // primeira versão defeituosa
bool isBadVersion(int version)
{
    return version >= bad;
}

// busca binaria : O(log n)
// muito mais rápido que testar todas as versões de 1 a n
int busca_binaria(int n)
{
    int inicio = 1; // limite inferior
    int fim = n;    // limite superior da busca
    int resultado = -1;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2; // para evitar overflow quando os numeros são grandes

        if (isBadVersion(meio))
        {
            resultado = meio; // candidato a primeira ruim
            fim = meio - 1;   // procurar versoes para a esquerda
        }
        else
        {
            inicio = meio + 1; // procurar versoes para a direita
        }
    }

    return resultado; // guarda o indice da primeira versão defeituosa, se não tiver nenhuma o resultado é -1
}

/*
int main()
{
    int n = 98;
    printf("Primeira versao defeituosa: %d\n", busca_binaria(n));
    return 0;
}*/