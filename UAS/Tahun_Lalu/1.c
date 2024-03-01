#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char need[5]= {'a', 'i', 'u', 'e', 'o'};

typedef struct 
{
    int n;
    char sentence[105];
}sentence;

void swap(sentence *a, sentence*b){
    sentence temp = *a;
    *a= *b;
    *b = temp;
}

int partition(sentence arr[], int low, int high){
    int pivot_random = low + (high - low)/2;
    swap(&arr[high], &arr[pivot_random]);

    int pivot_value = arr[high].n;
    char pivot_sentence[105];
    strcpy(pivot_sentence, arr[high].sentence);

    int j = low - 1;
    for (int i = low; i < high; i++)
    {
        if(arr[i].n<pivot_value){
            j++;
            swap(&arr[j], &arr[i]);
        }
        else if(arr[i].n==pivot_value && strcmp(arr[i].sentence, pivot_sentence)<0){
            j++;
            swap(&arr[j], &arr[i]);
        }
    }
    
    swap(&arr[high], &arr[j+1]);
    return j+1;
}

void qsortrecursion(sentence arr[], int low, int high){
    srand(time(NULL));
    if(low<=high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index-1);
        qsortrecursion(arr, pivot_index+1, high);
    }
}

int main(){
    int n, p;
    scanf(" %d %d", &n, &p);

    sentence data[n+5];
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", data[i].sentence); getchar();
        int counter = 0;

        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if(data[i].sentence[j]==need[k]){
                    counter++;
                    break;
                }
            }
        }
        // printf("counter = %d\n", counter);
        data[i].n=counter;
    }
    qsortrecursion(data, 0, n-1);
    // printf("\n=============\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", data[i].sentence);
    }
}