#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int counter;

void bubblesort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j+1] < arr[j]){
                swap(&arr[j], &arr[j+1]);
                counter++;
            }
        }
    }
}

int partition()

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        counter = 0;
        int n, f;
        scanf(" %d %d", &n, &f);
        int arr[n+5];
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &arr[j]);
            // printf(" %d", arr[j]);
        }

        bubblesort(arr, n);

        printf("Case #%d: %d\n",i+1 ,counter*f);
    }
    
}