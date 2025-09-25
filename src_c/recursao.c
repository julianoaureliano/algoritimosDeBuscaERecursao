
#include "../include_c/recursao.h"
#include <stdio.h>
// função de recursão para contar quantas vezes um caractere aparece em uma string : O(n)
int recursao(const char *str, char alvo)
{
    if (*str == '\0') // caso base : se o caractere atual é o terminador \0(fim da string), a função para e retorna 0
        return 0;
    // recursão : retorna 1 se o caractere atual for igual ao alvo, senão 0, depois chama recursiva, avançando um caractere na string
    return (*str == alvo) + recursao(str + 1, alvo);
    // no final, a soma resulta no total de vezes que alvo aparece
}

/*
int main()
{
    char *palavra = "banana";
    char alvo = 'a';
    int resultado;
    resultado = recursao(palavra, alvo);
    printf("%d\n", resultado);
}
*/