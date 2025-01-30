#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Implementação do Insertion Sort
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;

    // Move elementos maiores que a "key" uma posição à frente
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

// Função para gerar dados aleatórios
void ArrayAleatorio(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 10000;
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
  int n = 100000; // Tamanho do array (você pode alterar para testar diferentes tamanhos)
  int arr[n];

  // Gerar array aleatório
  ArrayAleatorio(arr, n);

  printf("Array original:\n");
  printArray(arr, n);

  // Medir o tempo de execução
  clock_t inicio, fim;
  inicio = clock();
  insertionSort(arr, n);
  fim = clock();

  printf("Array ordenado:\n");
  printArray(arr, n);

  double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  printf("Tempo de execucao: %f segundos\n", tempo_gasto);

  return 0;
}
