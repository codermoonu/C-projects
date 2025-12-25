#include <stdio.h>
#include <string.h>
void reverseVowels(char str[]) {
    int left = 0, right = strlen(str) - 1;
    char vowels[] = "aeiouAEIOU";
    while (left < right) {
        if (!strchr(vowels, str[left])) left++;
        else if (!strchr(vowels, str[right])) right--;
        else {
            char temp = str[left];
            str[left++] = str[right];
            str[right--] = temp;
        }
    }
}
int main() {
    char str[] = "hello";
    reverseVowels(str);
    printf("Modified string: %s\n", str);
    return 0;
}
