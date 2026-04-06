#include <stdio.h>

float toMegajoules(float kwh) {
    return kwh * 3.6;
}

float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845;
}

int main() {
    float kwh;

    printf("Enter energy in kWh: ");
    scanf("%f", &kwh);

    printf("\nConversions:\n");
    printf("Megajoules: %.2f\n", toMegajoules(kwh)); // chaining
    printf("BTU: %.2f\n", toBTU(kwh));
    printf("Calories: %.2f\n", toCalories(kwh));

    return 0;
}
