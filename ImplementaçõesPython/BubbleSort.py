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
def generate_random_array(n, max_value=10000):
    return [random.randint(0, max_value) for _ in range(n)]

# Main
if __name__ == "__main__":
    n = 100  # Tamanho do array (mude para testar diferentes tamanhos)
    arr = generate_random_array(n)

    print("Array original:")
    print(arr)

    # Medir o tempo de execução
    start_time = time.time()
    bubble_sort(arr)
    end_time = time.time()

    print("Array ordenado:")
    print(arr)

    print(f"Tempo de execução: {end_time - start_time:.6f} segundos")
