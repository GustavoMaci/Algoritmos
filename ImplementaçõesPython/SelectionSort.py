import random
import time

# Implementação do Selection Sort
def selection_sort(lista):
    n = len(lista)
    for j in range(n - 1):
        min_index = j
        for i in range(j + 1, n):
            if lista[i] < lista[min_index]:
                min_index = i
        if min_index != j:
            lista[j], lista[min_index] = lista[min_index], lista[j]
    return lista  

any_numbers = random.choices(range(1, 10000), k=1000000)

print("Números desordenados:", any_numbers)

print("\n") 

# Medir o tempo de execução
inicio_tempo = time.time()
ordenado = selection_sort(any_numbers.copy())  
fim_tempo = time.time()

print("Números ordenados:", ordenado)
print(f"Tempo de execução: {fim_tempo - inicio_tempo:.6f} segundos")
