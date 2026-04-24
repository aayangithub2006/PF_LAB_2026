#include <stdio.h>

int countUpper(char *str) {
    if (*str == '\0') return 0; 
    
    int count = (*str >= 'A' && *str <= 'Z') ? 1 : 0;
    return count + countUpper(str + 1);
}

int countDigits(char *str) {
    if (*str == '\0') return 0;
    
    int count = (*str >= '0' && *str <= '9') ? 1 : 0;
    return count + countDigits(str + 1);
}

int main() {
    char password[100];
    printf("Enter password: ");
    scanf("%s", password);
    printf("Uppercase letters: %d\n", countUpper(password));
    printf("Digits: %d\n", countDigits(password));
    return 0;
}
