#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Função para trocar dois elementos
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Implementação do Bubble Sort
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// Função para gerar dados aleatórios
void generateRandomArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 10000; // Números entre 0 e 9999
  }
}

// Função para exibir o array
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int n = 10000; // Tamanho do array (você pode alterar para testar diferentes tamanhos)
  int arr[n];

  // Gerar array aleatório
  generateRandomArray(arr, n);

  printf("Array original:\n");
  printArray(arr, n);

  // Medir o tempo de execução
  clock_t start, end;
  start = clock();
  bubbleSort(arr, n);
  end = clock();

  printf("Array ordenado:\n");
  printArray(arr, n);

  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("Tempo de execucao: %f segundos\n", time_taken);

  return 0;
}
