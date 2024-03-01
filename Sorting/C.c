#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define max 100

typedef struct plant_struct{
    char id[max];
    char name[max];
}plant;

void swap(plant *a, plant *b){
    plant temp = *a;
    *a=*b;
    *b=temp;
}

int partition(plant arr[], int low, int high){
    int pivot_random = low + (rand()%(high-low));
    if(pivot_random!=high){
        swap(&arr[high], &arr[pivot_random]);
    }

    char pivot_value[100];
    strcpy(pivot_value, arr[high].id);

    int j = low - 1;
    for (int i = low; i < high; i++)
    {
        if(strcmp(pivot_value,arr[i].id)>0){
            j++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[j+1], &arr[high]);
    return j+1;
}

void qsortrecursion(plant arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index-1);
        qsortrecursion(arr, pivot_index+1, high);
    }
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    int n;
    fscanf(file, " %d", &n);
    plant data[n+5]; fgetc(file);
    for (int i = 0; i < n; i++)
    {
        fscanf(file, " %s %[^\n]", data[i].id, data[i].name); fgetc(file);
    }
    qsortrecursion(data, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%s %s\n", data[i].id, data[i].name);
    }   
}