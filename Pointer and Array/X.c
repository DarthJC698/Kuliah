#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quickSort(long long int arr[], int min, int max);

void swap(long long int *a, long long int *b) {
    long long temp = *a;
    *a =*b;
    *b = temp;
}

int partition(long long int arr[], int min, int max){
    long long pivot = arr[max];
    int i = min - 1;

    for(int j = min;  j < max; j++ ) {
        if(arr[j] > pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[max]);
    return i + 1;
}

void quickSort(long long int arr[], int min, int max){
    if(min < max) {
        int pivot = partition(arr, min, max);
        quickSort(arr, min, pivot - 1);
        quickSort(arr, pivot + 1, max);
    }
}

int main(){
    int testcase;
    scanf(" %d", &testcase); getchar();
    for (int i = 0; i < testcase; i++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        long long arr[n+5];
        long long res=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                scanf(" %lld", &arr[k]);
            }
            quickSort(arr,0, m-1);
            
            res+=arr[0];
            // printf("%lld\n", arr[0]);
        }
        printf("Case #%d: %lld\n", i+1, res);
        
    }
    
}