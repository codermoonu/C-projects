#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0, temp, remainder, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}