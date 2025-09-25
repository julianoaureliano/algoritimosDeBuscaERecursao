#include <stdio.h>
/* se der algum erro de header usar o caminho absoluto, mas não vai precisar
porque o erro estava dando porque tinha muitos main() nos arquivos por isso estão todos comentados */

// #include "../include_c/busca_seq_ordenada.h"
// #include "../include_c/busca_binaria.h"
// #include "../include_c/recursao.h"
#include "busca_binaria.h"
#include "recursao.h"
#include "busca_seq_ordenada.h"

#define RUN_TEST(name, expr, expected)                  \
    do                                                  \
    {                                                   \
        int result = (expr);                            \
        printf("%-25s : %s\n", name,                    \
               (result == (expected)) ? "OK" : "FAIL"); \
    } while (0)

int main()
{
    // Vetor desordenado <POPULAR>
    int arr1[] = {3, 1, 2, 3, 4, 2, 2, 2, 8, 1, 5, 6};
    // Tamanho do vetor <ALTERAR>
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // 12
    //  Vetor ordenado <POPULAR>
    int arr2[] = {9, 8, 7, 6, 5, 5, 4, 3, 2, 1, 3};
    //  Tamanho do vetor <ALTERAR>
    int n2 = sizeof(arr2) / sizeof(arr2[0]); // 11

    int quantidadeDeVersoes = 98;
    // Eexemplo de chamada da macro RUN_TEST
    // RUN_TEST("Titulo do teste", nome_da_funcao(entradas da funcao), resposta_esperada);
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr2, n2), 9); // 9 valores distintos
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr1, n1), 7); // 7 valores distintos
    RUN_TEST("Busca binaria", busca_binaria(quantidadeDeVersoes), 4);        // no arquivo da busca_binaria.c o numero da versao defeituosa é 4 (mudar lá para mais testes)
    RUN_TEST("Recursao - banana", recursao("banana", 'a'), 3);
    RUN_TEST("Recursao - abacaxi", recursao("abacaxi", 'x'), 1);
    RUN_TEST("Recursao - soulindo", recursao("soulindo", 'o'), 2);

    return 0;
}
