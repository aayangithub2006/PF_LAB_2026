#include <stdio.h>

int main() {
    int arr[6] = {45, 50, 60, 30, 55, 40};
    int *p = arr;
    int highest = *p;

    printf("Original Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    for (int i = 1; i < 6; i++) {
        if (*(p + i) > highest)
            highest = *(p + i);
    }

    for (int i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    printf("\nScaled Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
