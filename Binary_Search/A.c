#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int partition(int arr[], int low, int high){
    int pivot_random = low + (rand()%(high-low));
    swap(&arr[high], &arr[pivot_random]);

    int j = low;
    int pivot_value = arr[high];
    for (int i = low; i < high; i++)
    {
        if(arr[i]>pivot_value){
            swap(&arr[i], &arr[j]);
            j++;
        }
    }

    swap(&arr[j], &arr[high]);
    return j;
}

void qsortrecursion(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        qsortrecursion(arr, low, pi - 1);
        qsortrecursion(arr, pi + 1, high);
    }
}

int binarysearch(int arr[], int key, int low, int high){
    int mid = low + (high-low)/2;
    if(low<=high){
        if(arr[mid]==key&&arr[mid]!=arr[mid-1]){
            return mid;
        }
        else if(arr[mid]<key){
            return binarysearch(arr, key, mid+1, high);
        }
        else{
            return binarysearch(arr,  key, low, mid-1);
        }
    }
    return -1;

}

int main(){
    int n, q;
    scanf(" %d %d\n", &n, &q);
    int arr[n+2];
    int query[q+2];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i <q; i++)
    {
        scanf(" %d", &query[i]);
    }
    for (int i = 0; i <q; i++)
    {
        int result = binarysearch(arr, query[i], 0, n-1);
        if(result!=-1){
            // while(arr[result]==arr[result-1]){
            //     result--;
            // }
            printf("%d\n", result+1);
        }
        else{
            printf("-1\n");
        }
    }

    
    


}