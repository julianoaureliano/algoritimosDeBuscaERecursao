#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

int main() {
    //Vetor desordenado <POPULAR>
    std::vector<int> arr1 = {};
    //Tamanho do vetor <ALTERAR>
    int n1 = 0;
    //Vetor ordenado <POPULAR>
    std::vector<int> arr2 = {};
    //Tamanho do vetor <ALTERAR>
    int n2 = 0;

    //Eexemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas das funcao), resposta_esperada);
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(), 0);
    RUN_TEST("Busca binaria", busca_binaria(), 0);
    RUN_TEST("Recursao", recursao(), 0);

    return 0;
}

