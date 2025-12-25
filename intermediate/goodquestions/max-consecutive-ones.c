#include <stdio.h>
int maxConsecutiveOnes(int n) {
    int count = 0, maxCount = 0;
    while (n > 0) {
        if (n & 1) count++;
        else count = 0;
        if (count > maxCount) maxCount = count;
        n >>= 1;
    }
    return maxCount;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Max consecutive 1s: %d\n", maxConsecutiveOnes(num));
    return 0;
}
