#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

// #define max 4000

typedef struct movie_struct{
    char name[1005];
    double temp;
    char tempname;
    double truetemp;
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
    double pivot_value = arr[high].truetemp;
    char pivot_name[1000];
    strcpy(pivot_name, arr[high].name);
    int j = low - 1;
    for (int i = low; i < high; i++)
    {
        if(pivot_value>arr[i].truetemp){
            j++;
            swap(&arr[i], &arr[j]);
        }
        else if(pivot_value==arr[i].truetemp){
            if(strcmp(arr[i].name, pivot_name)<0){
                j++;
                swap(&arr[i], &arr[j]);
            }
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
    while(fscanf(file, " %[^#]#%lf#%c\n", data[n].name, &data[n].temp, &data[n].tempname)!=EOF){
        if(data[n].tempname=='C'){
            data[n].truetemp = (data[n].temp *9.0/5.0)+32.0;
            // printf("%lf\n", data[n].truetemp);
            // printf("%lf\n", data[n].temp);
        }
        else{
            data[n].truetemp = data[n].temp;
            // printf("%lf\n", data[n].truetemp);
            // printf("%lf\n", data[n].temp);
        }
        n++;
    }

    qsortrecursion(data, 0, n-1);

     for (int i = 0; i < n; i++)
    {
        printf("%s is %.2lf%c\n", data[i].name, data[i].temp, data[i].tempname);
    }  
}