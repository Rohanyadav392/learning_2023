#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int temp = num;
    int divisor = 1;

    while (divisor <= temp) {
        int current = (temp / divisor / 10) * divisor + (temp % divisor);
        if (current > largest) {
            largest = current;
        }
        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    scanf("%d", &num);

    int result = findLargestNumber(num);
    printf("%d", result);

    return 0;
}