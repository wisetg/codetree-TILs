#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    if (n<0){
        printf("%d\nminus", n);
    }
    else{
        printf("%d", n);
    }
    return 0;
}