#include <stdio.h>

int main() {
    FILE *fptr;
    int score, sum = 0, val;

    fptr = fopen("survey.txt", "w");
    printf("Enter 5 scores (1-10):\n");
    int i;
    for ( i = 0; i < 5; i++) {
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);

    fptr = fopen("survey.txt", "r");
    
    for (i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &val);
        sum += val;
    }
    fclose(fptr);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / 5);

    return 0;
}
