#include "../include_c/busca_seq_ordenada.h"
#include <stdio.h>

// usando o BubbleSort (não otimizado) feito na aula : O(n²)
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // compara elementos adjacentes e troca se estiverem fora de ordem
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*
Busca sequencial  que retorna o
índice do elemento ou -1 se nao encontrar
*/
int busca_seq_ordenada(int arr[], int n, int alvo)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == alvo)
        {
            return i; // encontrou o elemento
        }
        if (arr[i] > alvo)
        {
            break; // como o vetor já está ordenado pode parar a busca
        }
    }
    return -1; // retorna -1 se não achar
}

// usa a busca_seq_ordenada para não contar repetidos

int conta_especialidades_distintas(int arr[], int n)
{
    // primeiro ordena o vetor
    bubble_sort(arr, n);

    int distintos[n]; // vetor auxiliar para armazenar os numeros unicos
    int qtd = 0;      // contador de distintos

    for (int i = 0; i < n; i++)
    {
        // para cada elemento do array original verifica se já está em distintos, se não estiver, adiciona e aumenta qtd.
        if (busca_seq_ordenada(distintos, qtd, arr[i]) == -1)
        {
            distintos[qtd] = arr[i];
            qtd++;
        }
    }
    return qtd; // retorna a quantidade de elementos distintos
}
/*
// Exemplo de uso
int main()
{
    int arr[] = {3, 1, 2, 3, 4, 2, 2, 2, 8, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // quantidade de elementos do array

    int resultado = conta_especialidades_distintas(arr, n);
    printf("Quantidade de especialidades distintas: %d\n", resultado);

    return 0;
}
*/