#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    int i;

    printf("\n%-10s %-20s %-5s %-10s %-30s\n", "ID", "Name", "Age", "Blood", "Diagnosis");
    printf("-------------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-5d %-10s %-30s\n",
               p[i].patientID,
               p[i].name,
               p[i].age,
               p[i].bloodType,
               p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id) {
    int i, found = 0;

    for(i = 0; i < n; i++) {
        if(p[i].patientID == id) {
            printf("\nPatient Found:\n");
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Patient ID: %d\n", p[i].patientID);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Patient not found\n");
    }
}

int main() {
    struct Patient patients[5];
    int i, searchID;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details for Patient %d\n", i + 1);

        printf("Enter Name: ");
        getchar();
        gets(patients[i].name);

        printf("Enter Age: ");
        scanf("%d", &patients[i].age);

        printf("Enter Blood Type: ");
        scanf("%s", patients[i].bloodType);

        printf("Enter Patient ID: ");
        scanf("%d", &patients[i].patientID);

        printf("Enter Diagnosis: ");
        getchar();
        gets(patients[i].diagnosis);
    }

    displayAll(patients, 5);

    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchID);

    searchByID(patients, 5, searchID);

    return 0;
}
