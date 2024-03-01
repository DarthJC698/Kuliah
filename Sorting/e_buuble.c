#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct movie_struct{
    char name[1005];
    double temp;
    char tempname;
    double truetemp;
} movie;

void swap(movie *a, movie *b){
    movie temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(movie arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].truetemp > arr[j + 1].truetemp) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    movie data[105];
    int n = 0;
    
    while(fscanf(file, " %[^#]#%lf#%c\n", data[n].name, &data[n].temp, &data[n].tempname) != EOF){
        if(data[n].tempname == 'C'){
            data[n].truetemp = (data[n].temp * 9.0 / 5.0) + 32.0;
        } else {
            data[n].truetemp = data[n].temp;
        }
        n++;
    }


    // Using bubble sort
    bubblesort(data, n);

    for (int i = 0; i < n; i++) {
        printf("%s is %.2lf%c\n", data[i].name, data[i].temp, data[i].tempname);
    }  

    return 0;
}
