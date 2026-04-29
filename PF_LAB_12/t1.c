#include <stdio.h>

//totalPower(1) returns 100.
//totalPower(2) returns $200 + 100 =$ 300.
//totalPower(3) returns $400 + 300 =$ 700.
//totalPower(4) returns $800 + 700 =$ 1500.
//Final Result: A building with 4 floors consumes 1500 kWh in a single day.

int totalPower(int floors) {
    if (floors == 1) {
        return 100; 
    }
    int currentFloorPower = 100;
    int i;
    for( i = 1; i < floors; i++) {
        currentFloorPower *= 2; 
    }
    return currentFloorPower + totalPower(floors - 1);
}

int main() {
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);
    printf("Total power consumption: %d kWh\n", totalPower(n));
    return 0;
}
