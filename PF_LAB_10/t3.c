#include <stdio.h>
#include <string.h>

int main() {
    char email[100], buffer[100], display[120] = "Email: ";
    
    printf("Enter email: ");
    scanf("%s", email);

    strcpy(buffer, email);

    char *atSymbol = strchr(buffer, '@');

    if (atSymbol != NULL) {
        char *domain = atSymbol + 1;
        
        if (strstr(domain, ".") != NULL) {
            printf("Domain: %s\n", domain);
            
            strcat(display, buffer);
            printf("%s\n", display);
        } else {
            printf("Error: Invalid domain format (missing '.').\n");
        }
    } else {
        printf("Error: '@' symbol not found.\n");
    }

    return 0;
}
