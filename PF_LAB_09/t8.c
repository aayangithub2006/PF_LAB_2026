#include <stdio.h>

int main() {
    void *sensor;

    int vibrations = 847;
    float temperature = 73.6;
    char status = 'W';

    // Integer
    sensor = &vibrations;
    printf("Vibrations: %d\n", *(int *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    // Float
    sensor = &temperature;
    printf("Temperature: %.2f\n", *(float *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    // Char
    sensor = &status;
    printf("Status: %c\n", *(char *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    // Condition check
    if (*(char *)sensor == 'N')
        printf("System Normal\n");
    else if (*(char *)sensor == 'W')
        printf("Warning Alert!\n");
    else if (*(char *)sensor == 'C')
        printf("Critical Alert!\n");

    return 0;
}
