#include <stdio.h> 
void swap(void* a, void* b) {
    int temp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2); 
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
