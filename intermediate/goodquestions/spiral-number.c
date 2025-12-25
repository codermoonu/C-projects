#include <stdio.h>
#define N 4
int main() {
    int arr[N][N], i, j, num = 1, top = 0, bottom = N - 1, left = 0, right = N - 1;
    while (num <= N * N) {
        for (i = left; i <= right; i++) arr[top][i] = num++;
        top++;
        for (i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;
        for (i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;
        for (i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}