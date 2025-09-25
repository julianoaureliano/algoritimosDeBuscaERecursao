# Atividade Prática: Algoritmos de busca + Recursão

Este repositório da atividade prática, contém implementações de algoritmos de busca, ordenação e contagem recursiva em C.

---

## 💻 Especificação das Funções Implementadas

Aqui estão as descrições detalhadas das funções presentes nos scripts, incluindo sua funcionalidade, complexidade, parâmetros esperados e valores de retorno.

### `bubble_sort`

Função de ordenação que utiliza o algoritmo **Bubble Sort**.

| Descrição                                                                                                                                 | Parâmetros                                                                                     | Retorno                                                       | Complexidade |
| :---------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------- | :------------------------------------------------------------ | :----------- |
| Ordena um array de inteiros em ordem crescente, comparando repetidamente elementos adjacentes e trocando-os se estiverem na ordem errada. | `int arr[]`: O array de inteiros a ser ordenado. <br> `int n`: O número de elementos no array. | `void`: A função modifica o array de entrada **diretamente**. | $O(n^2)$     |

### `busca_seq_ordenada`

Implementa uma **Busca Sequencial Otimizada** para arrays ordenados.

| Descrição                                                                                                                                       | Parâmetros                                                                                                                             | Retorno                                                                                  |
| :---------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------- |
| Procura um valor alvo em um array de inteiros **já ordenado**. A busca para se o elemento atual for maior que o alvo, aproveitando a ordenação. | `int arr[]`: O array de inteiros **ordenado**. <br> `int n`: O número de elementos no array. <br> `int alvo`: O valor a ser procurado. | `int`: O **índice** do elemento alvo se encontrado, ou **`-1`** se não estiver presente. |

### `conta_especialidades_distintas`

Conta a quantidade de elementos **distintos** (únicos) em um array de inteiros, utilizando o `bubble_sort` e o `busca_seq_ordenada`.

| Descrição                                                                                                                                                                                            | Parâmetros                                                                                 | Retorno                                                        |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------- | :------------------------------------------------------------- |
| Primeiro ordena o array de entrada. Em seguida, itera sobre o array ordenado, usando a `busca_seq_ordenada` em um array auxiliar para garantir que apenas elementos ainda não vistos sejam contados. | `int arr[]`: O array de inteiros de entrada. <br> `int n`: O número de elementos no array. | `int`: A quantidade total de elementos **distintos** no array. |

### `isBadVersion` (Simulação de API)

Função auxiliar para a busca binária. **Simula uma API externa** que verifica se uma versão de software é defeituosa.

| Descrição                                                                                                                                                                          | Parâmetros                                       | Retorno                                                                    |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------- | :------------------------------------------------------------------------- |
| Verifica se um número de versão é a partir da primeira versão defeituosa (`bad`). No contexto do código, `bad` está definido estaticamente, simulando um ponto de falha conhecido. | `int version`: O número da versão a ser testada. | `bool`: Retorna `true` se a versão for defeituosa, `false` caso contrário. |

### `busca_binaria`

Implementa o algoritmo de **Busca Binária** para encontrar a **primeira versão defeituosa** em um conjunto de versões.

| Descrição                                                                                                                                                                                                           | Parâmetros                                                           | Retorno                                                                                                                                                    | Complexidade |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------- |
| Utiliza a busca binária para encontrar a menor versão de software que é considerada defeituosa, conforme determinado pela função `isBadVersion`. O algoritmo reduz drasticamente o espaço de busca a cada iteração. | `int n`: O número total de versões existentes, numeradas de 1 a `n`. | `int`: O número da **primeira versão defeituosa** (o menor índice $i$ tal que **isBadVersion(i)** é `true`), ou **`-1`** se nenhuma versão for defeituosa. | $O(\log n)$  |

### `recursao`

Função que utiliza o conceito de **Recursão** para contar a ocorrência de um caractere específico em uma _string_.

| Descrição                                                                                                                                                                                                                          | Parâmetros                                                                                                   | Retorno                                                                | Complexidade |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------- | :----------- |
| Conta quantas vezes um caractere (`alvo`) aparece em uma string (`str`) usando recursão. A cada chamada, avança-se um caractere na string e o resultado é a soma do teste do caractere atual com o resultado da chamada recursiva. | `const char *str`: A string a ser analisada. <br> `char alvo`: O caractere cuja ocorrência deve ser contada. | `int`: O número total de vezes que o caractere alvo aparece na string. | $O(n)$       |

---

## 🛠️ Instruções de Uso dos Scripts

Os arquivos de cabeçalho (`.h`) contêm as declarações das funções, e os arquivos `.c` contêm suas implementações. O arquivo principal `main.c` (ou o arquivo que contém a função `main` descomentada no código fornecido) serve como um **script de teste unitário** simples para demonstrar o funcionamento das funções.

Na raiz do projeto abra o terminal e digite no Windows:

```c
mingw32-make test_c
```

No Linux:

```c
make teste_c
```

### Macro de Teste

O script de teste usa uma macro simples para facilitar a execução dos testes e exibir os resultados:

```c
#define RUN_TEST(name, expr, expected) \
    /* ... implementação ... */
```
