#include <stdio.h>
void printExponent(double x);

int main() {
    double x;
    printf("Enter a double value: ");
    scanf("%lf", &x);
    
    printExponent(x);
    
    return 0;
}

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    
    printf("Exponent (Hex): 0x%llX\n", exponent);
    
    printf("Exponent (Binary): 0b");
    int i;
    for (i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}