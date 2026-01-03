#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;     
    }
    return sum;
}
int digitalRoot(int num) {
    while (num >= 10) {  
        num = sumOfDigits(num);
    }
    return num;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = digitalRoot(number);
    printf("The Digital Root of %d is: %d\n", number, result);

    return 0;
}