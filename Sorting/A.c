#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(long long int *a, long long int *b){
    long long int temp = *a;
    *a=*b;
    *b=temp;
}

int partition(long long int arr[], int low, int high){
    int pivot_random = low + (rand()%(high-low));
    if(pivot_random!=high){
        swap(&arr[high], &arr[pivot_random]);
    }

    long long pivot_value = arr[high];
    int j = low - 1;
    for (int i = low; i < high; i++)
    {
        if(pivot_value>=arr[i]){
            j++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[j+1], &arr[high]);
    return j+1;
}

void qsortrecursion(long long arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index-1);
        qsortrecursion(arr, pivot_index+1, high);
    }
}

int absolute(int n){
    if(n<0){
        return 0-n;
    }
    else{
        return n;
    }
}

int main(){
    int n;
    scanf(" %d", &n);
    long long arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %lld", &arr[i]);
        // printf("%d\n", arr[i]);
    }
    qsortrecursion(arr, 0, n-1);

    long long ehe=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]-arr[i]>ehe){
            ehe=arr[i+1]-arr[i];
            // printf("%lld\n", ehe);
        }
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d = %lld\n",i+1, arr[i]);
    }

    int ehe1=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]-arr[i]==ehe){
            if(ehe1>0){
                printf(" ");
            }
            printf("%lld %lld", arr[i], arr[i+1]);
            ehe1++;
        }
    }
    printf("\n");
    
    
}