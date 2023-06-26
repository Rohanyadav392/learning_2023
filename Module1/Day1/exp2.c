#include <stdio.h>
int main() {
    int sc;
    printf("Enter the student score: ");
    scanf("%d", &sc);

    if (sc >= 90 && sc <= 100) {
        printf("Grade A\n");
    } else if (sc >= 75 && sc <= 89) {
        printf("Grade B\n");
    } else if (sc >= 60 && sc <= 74) {
        printf("Grade C\n");
    } else if (sc >= 50 && sc <= 59) {
        printf("Grade D\n");
    } else if (sc >= 0 && sc <= 49) {
        printf("Grade F\n");
    }  
    return 0;
}
