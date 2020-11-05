#include <stdio.h>

int main() {
    int n;
    scanf("%d ", &n);
    char string[n];
    for (int i = 0; i < n ; i++){
        string[i] = getchar();
    }
    for (int i = n - 1; i >= 0; i--){
        putchar(string[i]);
    }
    return 0;
}
