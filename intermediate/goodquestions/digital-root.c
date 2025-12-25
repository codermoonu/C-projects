#include <stdio.h>
int superDigit(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return superDigit(sum);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Super Digit: %d\n", superDigit(num));
    return 0;
}