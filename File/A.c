#include <stdio.h>
#include <string.h>

typedef struct plants_struct{
    char plant[105];
    char name[105];
}plants;

int binarysearch(plants arr[], char search[], int low, int high){
    int mid = low + (high-low)/2;
    if(low<=high){
        if(strcmp(arr[mid].name, search)==0){
            return mid;
        }
        else if(strcmp(arr[mid].name, search)>0){
            return binarysearch(arr, search, low, mid-1);
        }
        else{
            return binarysearch(arr, search, mid+1, high);
        }
    }
    return -1;
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    int n;
    fscanf(file, "%d", &n); fgetc(file);
    plants data[n+5];
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%[^#]#%[^\n]\n", data[i].name, data[i].plant);
        // printf("%s#%s\n",data[i].name, data[i].plant);
    }
    int q;
    fscanf(file, "%d", &q); fgetc(file);
    for (int i = 0; i < q; i++)
    {
        char search[100];
        fscanf(file, " %[^\n]\n", search);
        int result = binarysearch(data, search, 0, n-1);
        if(result == -1) printf("Case #%d: N/A\n", i+1);
        else printf("Case #%d: %s\n", i+1, data[result].plant);
    }
}