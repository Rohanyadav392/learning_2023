#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int array[100];
    int length;

    printf("Enter size array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array  \n");
    for (int i = 0; i < length; i++) {
        scanf("%x", &array[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < length; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
