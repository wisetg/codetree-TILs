#include <stdio.h>

int main() {
    int a;
    char b;

    scanf("%d", &a);

    b = a == 100 ? printf("pass") : printf("failure");

    return 0;
}