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
def generate_random_array(n, max_value=10000):
    return [random.randint(0, max_value) for _ in range(n)]

# Main
if __name__ == "__main__":
    n = 1000000  # Tamanho do array (mude para testar diferentes tamanhos)
    arr = generate_random_array(n)

    print("Array original:")
    print(arr)

    # Medir o tempo de execução
    start_time = time.time()
    insertion_sort(arr)
    end_time = time.time()

    print("Array ordenado:")
    print(arr)

    print(f"Tempo de execução: {end_time - start_time:.6f} segundos")
