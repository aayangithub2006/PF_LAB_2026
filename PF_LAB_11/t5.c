#include <stdio.h>
#include <string.h>

struct Department {
    char deptCode[10];
    char deptName[50];
};

struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void searchByDepartment(struct Course c[], int n, char code[]) {
    int i, found = 0;

    printf("\nCourses in Department %s:\n", code);

    for(i = 0; i < n; i++) {
        if(strcmp(c[i].dept.deptCode, code) == 0) {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s\n", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            printf("Department Code: %s\n", c[i].dept.deptCode);
            printf("Department Name: %s\n", c[i].dept.deptName);
            found = 1;
        }
    }

    if(found == 0) {
        printf("No courses found for this department.\n");
    }
}

int main() {
    struct Course courses[3];
    int i;
    char searchCode[10];

    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Course %d\n", i + 1);

        printf("Enter Course Code: ");
        scanf("%s", courses[i].courseCode);

        getchar();
        printf("Enter Course Name: ");
        gets(courses[i].courseName);

        printf("Enter Credit Hours: ");
        scanf("%d", &courses[i].creditHours);

        printf("Enter Department Code: ");
        scanf("%s", courses[i].dept.deptCode);

        getchar();
        printf("Enter Department Name: ");
        gets(courses[i].dept.deptName);
    }

    printf("\n----- Course Details -----\n");

    for(i = 0; i < 3; i++) {
        printf("\nCourse %d\n", i + 1);
        printf("Course Code: %s\n", courses[i].courseCode);
        printf("Course Name: %s\n", courses[i].courseName);
        printf("Credit Hours: %d\n", courses[i].creditHours);
        printf("Department Code: %s\n", courses[i].dept.deptCode);
        printf("Department Name: %s\n", courses[i].dept.deptName);
    }

    printf("\nEnter Department Code to Search: ");
    scanf("%s", searchCode);

    searchByDepartment(courses, 3, searchCode);

    return 0;
}
