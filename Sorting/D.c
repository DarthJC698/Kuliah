#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

// #define max 4000

typedef struct movie_struct{
    char name[1005];
    char artist[1005];
    int view;
}movie;

void swap(movie *a, movie *b){
    movie temp = *a;
    *a=*b;
    *b=temp;
}

int partition(movie arr[], int low, int high){
    int pivot_random = low + (rand()%(high-low));
    if(pivot_random!=high){
        swap(&arr[high], &arr[pivot_random]);
    }
    int pivot_value = arr[high].view;
    int j = low - 1;
    for (int i = low; i < high; i++)
    {
        if(pivot_value<=arr[i].view){
            j++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[j+1], &arr[high]);
    return j+1;
}

void qsortrecursion(movie arr[], int low, int high){
    srand(time(NULL));
    if(low<high){
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index-1);
        qsortrecursion(arr, pivot_index+1, high);
    }
}

int main(){
    // printf("p\n");
    FILE *file = fopen("testdata.in", "r");
    movie data[1000];
    int n=0;
    while(fscanf(file, "%[^#]#%[^#]#%d\n", data[n].name, data[n].artist, &data[n].view)!=EOF){
        n++;
    }
    qsortrecursion(data, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%s by %s - %d\n", data[i].name, data[i].artist, data[i].view);
    }   
    fclose(file);
}