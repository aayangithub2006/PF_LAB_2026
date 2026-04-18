#include <stdio.h>

int main() {
    char name[30], line[100];
    int s1, s2, s3;
    float avg;

    printf("Enter name and 3 subject scores: ");
    scanf("%s %d %d %d", name, &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;

    FILE *fptr = fopen("report.txt", "w+");
    if (fptr == NULL) return 1;

    fprintf(fptr, "--- Report Card ---\nName: %s\nAverage: %.2f\nStatus: %s\n", 
            name, avg, (avg >= 50 ? "Pass" : "Fail"));

    rewind(fptr);

    printf("\nDisplaying from file:\n");
    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}
