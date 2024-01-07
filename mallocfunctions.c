#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *arr3;
    int size1, size2, newSize;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    arr1 = (int *)malloc(size1 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }
    printf("Memory allocated successfully for arr1.\n");
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    arr2 = (int *)calloc(size2, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        free(arr1);
        return 1;
    }
    printf("Memory allocated successfully for arr2.\n");
    printf("Enter the new size for the first array: ");
    scanf("%d", &newSize);
    arr3 = (int *)realloc(arr1, newSize * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory reallocation failed for arr3.\n");
        free(arr1);
        free(arr2); 
        return 1;
    }
    printf("Memory reallocated successfully for arr3.\n");
    free(arr2);
    free(arr3);
    return 0;
}
