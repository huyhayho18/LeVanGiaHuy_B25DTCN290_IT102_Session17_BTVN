#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[50], longest[50];
    int i = 0, j = 0, max_len = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > 0) { 
                if (strlen(word) > max_len) {
                    max_len = strlen(word);
                    strcpy(longest, word);
                }
            }
            j = 0; 
        }

        if (str[i] == '\0') break;
        i++;
    }

    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", max_len);

    return 0;
}

