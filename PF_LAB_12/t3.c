#include <stdio.h>

int countWays(int n) {
    if (n == 0) return 1; // Base cases [cite: 50]
    if (n < 0) return 0;
    return countWays(n - 1) + countWays(n - 2); // Fibonacci structure [cite: 55]
}

void printPaths(int n, char* path, int index) {
    if (n == 0) {
        path[index-1] = '\0'; 
        printf("%s\n", path);
        return;
    }
    if (n >= 1) {
        path[index] = '1';
        path[index+1] = '+';
        printPaths(n - 1, path, index + 2);
    }
    if (n >= 2) {
        path[index] = '2';
        path[index+1] = '+';
        printPaths(n - 2, path, index + 2);
    }
}

int main() {
    int n;
    char pathBuffer[100];
    printf("Enter N (1-15): ");
    scanf("%d", &n);
    printf("Total distinct ways: %d\n", countWays(n));
    printf("Paths:\n");
    printPaths(n, pathBuffer, 0);
    return 0;
}
