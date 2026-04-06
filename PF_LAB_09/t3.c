#include <stdio.h>

int totalRuns(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > avg)
            count++;
    return count;
}

int main() {
    int arr[10];
    int total, highest, count;
    float avg;

    printf("Enter 10 match scores:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    total = totalRuns(arr, 10);
    avg = (float) total / 10;
    highest = highestScore(arr, 10);
    count = aboveAverage(arr, 10, avg);

    printf("\nTotal Runs: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Highest Score: %d\n", highest);
    printf("Matches above average: %d\n", count);

    return 0;
}
