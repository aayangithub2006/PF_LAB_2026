#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30];
    char searchName[30];
    int found = 0;

    printf("Enter 5 student names:\n");

    int i;
    for (i = 0; i < 5; i++) {
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }

    printf("\nStudent List:\n");

    
    for (i = 0; i < 5; i++) {
        fputs(names[i], stdout);
        printf("\n");
    }

    printf("\nEnter name to search: ");
    fgets(searchName, 30, stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found\n");

    return 0;
}
