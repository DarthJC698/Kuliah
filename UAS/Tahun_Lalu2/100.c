#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    // int pivot_random = low + (rand()%(high-low));
    // swap(&arr[high], &arr[pivot_random]);

    int pivot_value = arr[high];
    int j = low-1;
    for(int i = low; i<high;i++){
        if(arr[i]<=pivot_value){
            j++;
            swap(&arr[j], &arr[i]);
            printf("%d", pivot_value);
            for (int k = 0; k < 10; k++)
            {
                printf(" %d", arr[k]);
            }
            printf("\n");
        }
    }
    swap(&arr[j+1], &arr[high]);

    return j+1;
}

void quicksort(int arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        quicksort(arr, low, pivot_index-1);
        quicksort(arr, pivot_index+1, high);
    }
}

int binarysearch(int arr[],int search ,int low, int high){
    int mid = low + (high-low)/2;
    if(low<=high){
        printf("%d == %d\n", arr[mid], search);
        if(arr[mid]==search&&(arr[mid]!=arr[mid-1]||mid-1<=0)){
            return mid;
        }
        else if(arr[mid]>search){
            return binarysearch(arr, search , low, mid-1);
        }
        else{
            return binarysearch(arr, search , mid+1, high);
        }
    }
    return -2;
}

int main(){
    int arr[10]={1, 5, 6, 4,2,3,4,1,3,-1};
    quicksort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");


    int q;
    scanf("%d", &q);
    printf("%d", binarysearch(arr, q, 0, 9)+1);
}