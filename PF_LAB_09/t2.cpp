#include <stdio.h>

float applyDiscount(float price, int tier) {
    if (tier == 1) return price * 0.95;
    else if (tier == 2) return price * 0.90;
    else if (tier == 3) return price * 0.80;
    else if (tier == 4) return price * 0.70;
    else return price;
}

void printInvoice(float original, float discounted) {
    float delivery = 0;

    if (discounted < 2000)
        delivery = 150;

    printf("\n----- INVOICE -----\n");
    printf("Original Price: %.2f\n", original);
    printf("Discount: %.2f\n", original - discounted);
    printf("Delivery: %.2f\n", delivery);
    printf("Total: %.2f\n", discounted + delivery);
}

int main() {
    float price, discounted;
    int tier;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter tier (1-4): ");
    scanf("%d", &tier);

    discounted = applyDiscount(price, tier);
    printInvoice(price, discounted);

    return 0;
}
