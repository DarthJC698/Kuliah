#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// int ehe=0;

// int indexsama[5]={4, 9, 16, 25};
// int berapasama[5]={2, 3, 4, 5};

void swap(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long arr[], int low, int high){
    // int pivot_random = low + (rand()%(high-low));
    // if(pivot_random!=high){
    //     swap(&arr[pivot_random], &arr[high]);
    // }

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
        // int sudah[26] = 1;
        int sama={0};
        long long arr[26];
        for (int j = 0; j < 25; j++)
        {
            scanf(" %lld", &arr[j]);
        }
        
        qsortrecursion(arr, 0, 24);


        // long long numbers[26]={-1};
        // int counter[26]={0};
        // int index=1;

        // for (int j = 0; j < 25; j++)
        // {
        //     printf("%lld ", arr[j]);
        //     if(numbers[index]!=arr[j]){
        //         index++;
        //     }
        //     counter[index]++;
        //     numbers[index]=arr[j];


        // }
        // for (int j = 0; j < 25; j++)
        // {
        //     if(counter[j]==0){
        //         continue;
        //     }
        //     for (int k = 0; k < 5; k++)
        //     {
        //         if(counter[j]==indexsama[k]){
        //             sama[ehe++]=berapasama[k];
        //         }
        //     }
            
        //     printf("%lld ada %d\n", numbers[j], counter[j]);
        //     printf("Sama ada %d\n", sama);
        // }



        // arr1[0]=arr[0];
        // arr1[1]=arr[2];
        // arr1[6]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];
        // arr1[0]=arr[0];






        printf("Case #%d:", i+1);
        printf(" %lld", arr[0]/2);
        printf(" %lld", arr[3]/2);
        printf(" %lld", arr[12]/2);
        printf(" %lld", arr[21]/2);
        printf(" %lld", arr[24]/2);
        printf("\n");
    }
    
}