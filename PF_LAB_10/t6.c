#include <stdio.h>

int main() {
    FILE *fptr;
    char name[30];
    int grade;

    fptr = fopen("grades.txt", "w");
    if (fptr == NULL) return 1;
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter name and grade: ");
        scanf("%s %d", name, &grade);
        fprintf(fptr, "%s %d\n", name, grade);
    }
    fclose(fptr);

    fptr = fopen("grades.txt", "r");
    printf("\nStored Records:\n");
    while (fscanf(fptr, "%s %d", name, &grade) != EOF) {
        printf("Name: %s, Grade: %d\n", name, grade);
    }
    fclose(fptr);

    return 0;
}
