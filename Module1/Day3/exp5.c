#include <stdio.h>
void smallest_largest_digits(int n) {
    int i, number, digit;
        

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        int smallest_digit = 9; 
       int largest_digit = 0;
        if(number>=0 &&number<=9){
            printf("Not Valid\n");
        }
        else{

        while (number != 0) {
            digit = number % 10;
            if (digit < smallest_digit) {
                smallest_digit = digit;
            }
            if (digit > largest_digit) {
                largest_digit = digit;
            }
            number /= 10;
        }
         printf("Smallest Digit: %d\n", smallest_digit);
        printf("Largest Digit: %d\n", largest_digit);
        }
    }
 
        
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    smallest_largest_digits(n);

    return 0;
}
