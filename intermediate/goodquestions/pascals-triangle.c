#include <stdio.h>
int fact(int n) {
    return (n == 0) ? 1 : n * fact(n - 1);
}
int comb(int n, int k) {
    return fact(n) / (fact(k) * fact(n - k));
}
int main() {
    int n, i, j;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)
            printf("%d ", comb(i, j));
        printf("\n");
    }
    return 0;
}
