#include <stdio.h>
void generateMagicSquare(int n) {
    int magic[n][n], i, j;
    memset(magic, 0, sizeof(magic));
    i = 0, j = n / 2;
    for (int num = 1; num <= n * n; num++) {
        magic[i][j] = num;
        int newi = (i - 1 + n) % n, newj = (j + 1) % n;
        if (magic[newi][newj]) i++;
        else i = newi, j = newj;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%2d ", magic[i][j]);
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Only odd numbers allowed!\n");
    else generateMagicSquare(n);
    return 0;
}
