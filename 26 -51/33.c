#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (0 >= a || a >= 10) {
        printf("The score is not valid");
    } else {
        printf("The score is valid");
    }
    return 0;
}