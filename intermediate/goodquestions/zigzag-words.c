#include <stdio.h>
#include <string.h>
#define ROWS 3
void printZigzag(char str[]) {
    int len = strlen(str), i, row = 0, dir = 1;
    char arr[ROWS][len];
    memset(arr, ' ', sizeof(arr));
    for (i = 0; i < len; i++) {
        arr[row][i] = str[i];
        row += dir;
        if (row == ROWS - 1 || row == 0) dir = -dir;
    }
    for (i = 0; i < ROWS; i++) {
        for (int j = 0; j < len; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }
}
int main() {
    char str[] = "HELLO_WORLD";
    printZigzag(str);
    return 0;
}
