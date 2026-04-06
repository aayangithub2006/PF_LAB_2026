#include <stdio.h>

float totalRevenue(float bills[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += bills[i];
    return sum;
}

int bestTable(float bills[], int n) {
    int maxIdx = 0;
    for (int i = 1; i < n; i++)
        if (bills[i] > bills[maxIdx])
            maxIdx = i;
    return maxIdx;
}

int isProfitable(float total) {
    return (total > 10000);
}

int main() {
    float bills[5];
    float total;
    int best;

    printf("Enter bills for 5 tables:\n");
    for (int i = 0; i < 5; i++)
        scanf("%f", &bills[i]);

    total = totalRevenue(bills, 5);
    best = bestTable(bills, 5);

    printf("\nTotal Revenue: %.2f\n", total);
    printf("Best Table: Table %d\n", best + 1);

    if (isProfitable(total))
        printf("Profitable night\n");
    else
        printf("Not profitable\n");

    return 0;
}
