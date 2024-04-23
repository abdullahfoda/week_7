#include <stdio.h>

int main() {
    int size;

    printf("Input size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Input elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
