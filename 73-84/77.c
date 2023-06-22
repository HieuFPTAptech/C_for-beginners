#include<stdio.h>

void sortArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr [j];
                arr[j]= temp;
            }   
        }
    }
int main(){
    int n;
    int arr[100];
    scanf("%d", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
}