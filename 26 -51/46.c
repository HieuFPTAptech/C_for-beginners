#include<stdio.h>

int main() {
    int a, b;
    scanf("%d", &a, &b);
    int answer = 1;
    while (b >= 0)
    {
        answer *= a;
        b--;
    }
    printf("%d", answer);
    return 0;
}