#include <stdio.h>

int validatePIN(int storedPIN, int enteredPIN) {
    return (storedPIN == enteredPIN);
}

int main() {
    int storedPIN = 4729;
    int enteredPIN;

    for (int i = 1; i <= 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (validatePIN(storedPIN, enteredPIN)) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            if (i == 3)
                printf("Card blocked. Contact your bank.\n");
            else
                printf("Wrong PIN. Attempts left: %d\n", 3 - i);
        }
    }

    return 0;
}
