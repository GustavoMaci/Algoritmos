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
  int n = 1000000;
  int *any_numbers = malloc(n * sizeof(int));
  int *ordenado = malloc(n * sizeof(int));
  srand(time(NULL));

  for (int i = 0; i < n; i++)
  {
    any_numbers[i] = rand() % 10000;
  }

  printf("Números desordenados: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", any_numbers[i]);
  }
  printf("\n");

  printf("\n"); // Substituição por uma quebra de linha

  clock_t inicio_tempo = clock();
  for (int i = 0; i < n; i++)
  {
    ordenado[i] = any_numbers[i];
  }
  selection_sort(ordenado, n);
  clock_t fim_tempo = clock();

  printf("Números ordenados: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", ordenado[i]);
  }
  printf("\n");

  double tempo_execucao = (double)(fim_tempo - inicio_tempo) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %.6f segundos\n", tempo_execucao);

  free(any_numbers);
  free(ordenado);
  return 0;
}
