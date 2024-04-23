#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], unique[MAX_SIZE];
    int size, uniqueSize = 0;


    printf("Input array elements: ");
    scanf("%d", &arr[0]);
    size = 1;
    char ch;
    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (scanf("%d", &arr[size]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        size++;
    }

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueSize++] = arr[i];
        }
    }

    printf("After removing all duplicate elements\n");
    printf("Elements of array are: ");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d", unique[i]);
        if (i < uniqueSize - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
