import time
import random

# Implementação do Insertion Sort
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

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
    insertion_sort(arr)
    fim_tempo = time.time()

    print("Array ordenado:")
    print(arr)

    print(f"Tempo de execução: {fim_tempo - inicio_tempo:.6f} segundos")
