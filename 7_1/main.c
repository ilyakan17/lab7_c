#include <stdio.h>
#include "7.h"

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int m[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &m[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", m[i]);
    }

    shell_sort(m, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", m[i]);
    }
    return 0;
}