#include <stdio.h>
// Algoritimo de ordenação Merge sort

// Função para fundir dois subarrays ordenados
void merge(int arr[], int left[], int left_size, int right[], int right_size)
{
    int i = 0, j = 0, k = 0;

    // Comparar elementos dos subarrays e fundi-los em ordem crescente
    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    // Copiar os elementos restantes do subarray esquerdo, se houver
    while (i < left_size)
    {
        arr[k++] = left[i++];
    }

    // Copiar os elementos restantes do subarray direito, se houver
    while (j < right_size)
    {
        arr[k++] = right[j++];
    }
}

// Função de ordenação Merge Sort
void mergeSort(int arr[], int size)
{
    if (size <= 1)
    {
        return; // Já está ordenado
    }

    // Dividir o array em dois subarrays
    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    memcpy(left, &arr[0], mid * sizeof(int));             // Copiar os elementos para o subarray esquerdo
    memcpy(right, &arr[mid], (size - mid) * sizeof(int)); // Copiar os elementos para o subarray direito

    // Ordenar recursivamente os subarrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Fundir os subarrays ordenados
    merge(arr, left, mid, right, size - mid);
}

int main()
{
    int arr[] = {44, 384, 33, 4, 22, 13, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    mergeSort(arr, size);

    printf("Array ordenado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
