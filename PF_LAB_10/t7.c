#include <stdio.h>

int main() {
    FILE *fptr;
    char product[30];
    int qty;

    fptr = fopen("inventory.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter product name and quantity to add: ");
    scanf("%s %d", product, &qty);

    fprintf(fptr, "%s %d\n", product, qty);
    fclose(fptr);

    fptr = fopen("inventory.txt", "r");
    if (fptr == NULL) {   
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nCurrent Inventory:\n");
    while (fscanf(fptr, "%s %d", product, &qty) != EOF) {
        printf("%s: %d\n", product, qty);
    }

    fclose(fptr);

    return 0;
}
