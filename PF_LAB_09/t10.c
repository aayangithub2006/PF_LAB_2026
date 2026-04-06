#include <stdio.h>

// Functions
int basicAttack(int dmg, int hp) {
    return hp - dmg;
}

int powerStrike(int dmg, int hp) {
    return hp - (int)(dmg * 2.5);
}

int heal(int dmg, int hp) {
    return hp + 20;
}

int poisonAttack(int dmg, int hp) {
    printf("Poison effect applied!\n");
    return hp - (dmg / 2);
}

int main() {
    int hp = 100, dmg = 25, choice;
    int (*action)(int, int);

    for (int i = 1; i <= 3; i++) {
        printf("\nTurn %d\n", i);
        printf("1. Basic Attack\n2. Power Strike\n3. Heal\n4. Poison Attack\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: action = basicAttack; break;
            case 2: action = powerStrike; break;
            case 3: action = heal; break;
            case 4: action = poisonAttack; break;
            default:
                printf("Invalid choice\n");
                continue;
        }

        hp = action(dmg, hp);
        printf("Updated HP: %d\n", hp);
    }

    return 0;
}
