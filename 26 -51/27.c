#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("n is an odd number");
    }
    else {
        printf("n is an even number");
    }
    return 0;
}