#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct ehe_struct
{
    char sentence[100];
}ehe;

void swap(ehe *a, ehe *b){
    ehe temp = *a;
    *a = *b;
    *b=temp;

}

int partition(ehe arr[], int low, int high){
int pivot_random=low+(rand()%(high-low));
swap(&arr[pivot_random], &arr[high]);

char pivot_value[100];
strcpy(pivot_value, arr[high].sentence);
int i = low;
for (int j = low; j < high; j++)
{
    if(strcmp(pivot_value, arr[j].sentence)<=0){
        swap(&arr[i],&arr[j]);
        i++;
    }
}

swap(&arr[high], &arr[i]);
return i;
}

void qsortrecursion(ehe arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, pivot_index+1, high);
        qsortrecursion(arr, low, pivot_index-1);
    }
}

int main(){
    int n;
    scanf(" %d", &n);
    ehe data[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", data[i].sentence); getchar();
    }
    qsortrecursion(data, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", data[i].sentence);
    }
}