#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int lista[], int n)
{
  int i, j, min_index, temp;
  for (j = 0; j < n - 1; j++)
  {
    min_index = j;
    for (i = j + 1; i < n; i++)
    {
      if (lista[i] < lista[min_index])
      {
        min_index = i;
      }
    }
    if (min_index != j)
    {
      temp = lista[j];
      lista[j] = lista[min_index];
      lista[min_index] = temp;
    }
  }
}

int main()
{
  int n = 1000000; // Tamanho do array
  int *any_numbers = malloc(n * sizeof(int));
  int *ordenado = malloc(n * sizeof(int));
  srand(time(NULL));

  // Preenche o array com números aleatórios entre 0 e 9999
  for (int i = 0; i < n; i++)
  {
    any_numbers[i] = rand() % 10000;
  }

  // Exibe todos os números desordenados
  printf("Numeros desordenados:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", any_numbers[i]);
  }
  printf("\n\n");

  // Copia os números para o array "ordenado"
  for (int i = 0; i < n; i++)
  {
    ordenado[i] = any_numbers[i];
  }

  // Mede o tempo de execução
  clock_t inicio_tempo = clock();
  selection_sort(ordenado, n); // Ordena o array
  clock_t fim_tempo = clock();

  // Exibe todos os números ordenados
  printf("Numeros ordenados:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", ordenado[i]);
  }
  printf("\n");

  // Calcula e exibe o tempo de execução
  double tempo_execucao = (double)(fim_tempo - inicio_tempo) / CLOCKS_PER_SEC;
  printf("\nTempo de execucao: %.6f segundos\n", tempo_execucao);

  // Libera a memória alocada
  free(any_numbers);
  free(ordenado);
  return 0;
}