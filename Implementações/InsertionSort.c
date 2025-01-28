#include <stdio.h>
#include <time.h>

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
  int n = 100; // Tamanho do array (você pode alterar para testar diferentes tamanhos)
  int arr[n];

  // Gerar array aleatório
  generateRandomArray(arr, n);

  printf("Array original:\n");
  printArray(arr, n);

  // Medir o tempo de execução
  clock_t start, end;
  start = clock();
  insertionSort(arr, n);
  end = clock();

  printf("Array ordenado:\n");
  printArray(arr, n);

  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %f segundos\n", time_taken);

  return 0;
}
