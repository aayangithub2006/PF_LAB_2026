#include <stdio.h>
#include <string.h>

int main() {
    char masterPass[] = "Secret123";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strlen(input) == 0) continue;

        int result = strcmp(input, masterPass);

        if (result == 0) {
            printf("Access Granted!\n");
            return 0;
        } else {
            attempts++;
            if (result < 0) printf("Hint: Alphabetically before stored password.\n");
            else printf("Hint: Alphabetically after stored password.\n");

            if (attempts == 2) {
                printf("System Hint: The password starts with '%.3s'\n", masterPass);
            }
        }
    }

    printf("Account Locked after 3 failed attempts.\n");
    return 0;
}
