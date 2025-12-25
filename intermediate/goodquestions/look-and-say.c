#include <stdio.h>
#include <string.h>
void lookAndSay(int n) {
    char res[500] = "1", temp[500];
    for (int i = 1; i < n; i++) {
        int len = strlen(res), count = 1, k = 0;
        for (int j = 1; j <= len; j++) {
            if (res[j] == res[j - 1]) count++;
            else {
                temp[k++] = count + '0';
                temp[k++] = res[j - 1];
                count = 1;
            }
        }
        temp[k] = '\0';
        strcpy(res, temp);
    }
    printf("Term %d: %s\n", n, res);
}
int main() {
    int n;
    printf("Enter term number: ");
    scanf("%d", &n);
    lookAndSay(n);
    return 0;
}
