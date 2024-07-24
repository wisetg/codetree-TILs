#include <stdio.h>

int main() {
    int a;
    char b;

    scanf("%d", &a);

    b = a =1 ? printf("t") : printf("f");
    return 0;
}