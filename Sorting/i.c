#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void swap(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long arr[], int low, int high){
    int pivot_random = low + (rand()%(high-low));
    if(pivot_random!=high){
        swap(&arr[pivot_random], &arr[high]);
    }

    long long pivot_value = arr[high];
    int j = low -1;

    for (int i = low; i < high; i++)
    {
        if(arr[i]<=pivot_value){
            j++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[high], &arr[j+1]);
    return j+1;
}

int qsortrecursion(long long arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index-1);
        qsortrecursion(arr, pivot_index+1, high);
    }
}


int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf(" %d", &n);
        long long arr[n+5];
        long long arr1[n+5];
        long long arr2[n+5];
        
        for (int j = 0; j < n; j++)
        {
            scanf(" %lld", &arr[j]);
        }

        qsortrecursion(arr, 0, n-1);
        long long max = 0;

        for (int j = 0; j < n-1; j++)
        {
            if(arr[j+1]-arr[j]>max && (j!=(n/2)-1)){
                max = arr[j+1]-arr[j];
            }
        }
        
        printf("Case #%d: %lld\n", i+1, max);
    }
    
}