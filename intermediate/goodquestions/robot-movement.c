#include <stdio.h>
int uniquePaths(int m, int n) {
    if (m == 1 || n == 1) return 1;
    return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
}
int main() {
    int m, n;
    printf("Enter grid size (m n): ");
    scanf("%d %d", &m, &n);
    printf("Unique paths: %d\n", uniquePaths(m, n));
    return 0;
}
