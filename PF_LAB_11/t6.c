#include <stdio.h>
#include <string.h>

struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};

float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char *status) {
    int i, found = 0;

    printf("\nOrders with status: %s\n", status);

    for(i = 0; i < n; i++) {
        if(strcmp(orders[i].status, status) == 0) {
            printf("\nOrder ID: %d\n", orders[i].orderID);
            printf("Customer Name: %s\n", orders[i].customerName);
            printf("Product Name: %s\n", orders[i].productName);
            printf("Quantity: %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);
            printf("Status: %s\n", orders[i].status);
            printf("Total Bill: %.2f\n", computeTotal(orders[i]));
            found = 1;
        }
    }

    if(found == 0) {
        printf("No orders found with this status.\n");
    }
}

int main() {
    struct Order orders[4];
    int i;
    char searchStatus[20];

    for(i = 0; i < 4; i++) {
        printf("\nEnter details for Order %d\n", i + 1);

        printf("Enter Order ID: ");
        scanf("%d", &orders[i].orderID);

        getchar();
        printf("Enter Customer Name: ");
        gets(orders[i].customerName);

        printf("Enter Product Name: ");
        gets(orders[i].productName);

        printf("Enter Quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &orders[i].unitPrice);

        getchar();
        printf("Enter Order Status: ");
        gets(orders[i].status);
    }

    printf("\n----- Itemized Bills -----\n");

    for(i = 0; i < 4; i++) {
        printf("\nOrder ID: %d\n", orders[i].orderID);
        printf("Customer: %s\n", orders[i].customerName);
        printf("Product: %s\n", orders[i].productName);
        printf("Quantity: %d\n", orders[i].quantity);
        printf("Unit Price: %.2f\n", orders[i].unitPrice);
        printf("Status: %s\n", orders[i].status);
        printf("Total Bill: %.2f\n", computeTotal(orders[i]));
    }

    printf("\nEnter Status to Filter Orders: ");
    gets(searchStatus);

    filterByStatus(orders, 4, searchStatus);

    return 0;
}
