#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2, mergedSize = 0;


    printf("Input first array elements: ");
    scanf("%d", &arr1[0]);
    size1 = 1;
    char ch;
    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (scanf("%d", &arr1[size1]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        size1++;
    }


    printf("Input second array elements: ");
    scanf("%d", &arr2[0]);
    size2 = 1;
    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (scanf("%d", &arr2[size2]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        size2++;
    }


    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[mergedSize++] = arr1[i++];
        } else {
            merged[mergedSize++] = arr2[j++];
        }
    }


    while (i < size1) {
        merged[mergedSize++] = arr1[i++];
    }


    while (j < size2) {
        merged[mergedSize++] = arr2[j++];
    }


    printf("Merged array in ascending order = ");
    for (int k = 0; k < mergedSize; k++) {
        printf("%d", merged[k]);
        if (k < mergedSize - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
