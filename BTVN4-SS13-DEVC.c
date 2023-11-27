#include <stdio.h>
#include <string.h>

void longestDistinctSubstring(char *str) {
    int n = strlen(str);
    int res = 0; 
    char *res_str = NULL; 

    int lastIndex[256]; 
    memset(lastIndex, -1, sizeof(lastIndex)); 

    int i = 0;
    for (int j = 0; j < n; j++) {
        i = i > (lastIndex[str[j]] + 1) ? i : (lastIndex[str[j]] + 1);
        if (res < j - i + 1) {
            res = j - i + 1;
            res_str = &str[i];
        }
        lastIndex[str[j]] = j;
    }

    printf("Chuoi ky tu phan biet dai nhat: %.*s\n", res, res_str);
}

int main(){
    char str[] = "abccadbc";
    printf("chuoi ky tu da nhap la:%s\n",str); 
    longestDistinctSubstring(str);
    return 0;
}
