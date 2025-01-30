import time
import random

# Implementação do Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Função para gerar dados aleatórios
def gerar_array_aleatorio(n, max_value=10000):
    return [random.randint(0, max_value) for _ in range(n)]

# Main
if __name__ == "__main__":
    n = 10000  # Tamanho do array (mude para testar diferentes tamanhos)
    arr = gerar_array_aleatorio(n)

    print("Array original:")
    print(arr)

    # Medir o tempo de execução
    inicio_tempo = time.time()
    bubble_sort(arr)
    fim_tempo = time.time()

    print("Array ordenado:")
    print(arr)

    print(f"Tempo de execução: {fim_tempo - inicio_tempo:.6f} segundos")
