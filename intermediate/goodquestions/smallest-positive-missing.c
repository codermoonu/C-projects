#include <stdio.h>
void findMissing(int arr[], int n) {
    int present[n + 1], i;
    memset(present, 0, sizeof(present));
    for (i = 0; i < n; i++)
        if (arr[i] > 0 && arr[i] <= n)
            present[arr[i]] = 1;
    for (i = 1; i <= n; i++)
        if (!present[i]) {
            printf("Smallest missing: %d\n", i);
            return;
        }
    printf("Smallest missing: %d\n", n + 1);
}
int main() {
    int arr[] = {3, 4, -1, 1}, n = 4;
    findMissing(arr, n);
    return 0;
}
