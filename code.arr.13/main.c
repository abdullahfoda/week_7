#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, duplicateCount = 0;


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
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }


    printf("Total number of duplicate elements = %d\n", duplicateCount);

    return 0;
}
