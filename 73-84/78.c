#include<stdio.h>

int sumofArray(int arr[1000], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    printf("%d", sumofArray(arr, n));
    return 0;
}