#include <stdio.h>

float triageScore(int severity, int age, int vitals) {
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}

int main() {
    int severity, age, vitals;
    float score;

    printf("Enter severity, age risk, vitals: ");
    scanf("%d %d %d", &severity, &age, &vitals);

    score = triageScore(severity, age, vitals);

    printf("Triage Score: %.2f\n", score);

    if (score > 7.0)
        printf("Immediate attention required\n");
    else if (score >= 4.0)
        printf("Moderate priority\n");
    else
        printf("Can wait\n");

    return 0;
}
