#include <stdio.h>

int main() {
    FILE *fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("Config file not found. Creating default...\n");
        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\ntimeout=30\nmode=admin\n");
        printf("Default config.txt created.\n");
    } else {
        printf("Configuration file found and loaded successfully.\n");
    }
    
    if (fptr) fclose(fptr);
    return 0;
}
