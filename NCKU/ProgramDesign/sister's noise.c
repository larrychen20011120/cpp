#include <stdio.h>

int main() {
    int sister[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &sister[i]);
    long maxnoice = 0;
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if ((sister[i] + sister[j]) * (j - i) > maxnoice){
                maxnoice = (sister[i] + sister[j]) * (j - i) ;
            }
        }
    }
    printf("%ld", maxnoice);
    return 0;
}
