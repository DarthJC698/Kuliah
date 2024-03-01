#include<stdio.h>
#define max 100000000

int search(long long rooms[], int finding, int length) {
    for (int i = 0; i < length; i++) {
        // printf("%d == %d\n", rooms[i], finding);
        if (rooms[i] == finding) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    long long arr[n+5];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        
        int room;
        scanf(" %d", &room);
        if(search(arr, room, counter+1)){
            arr[counter]=room;
            counter++;
        }
        else{
            continue;
        }
    }
    printf("%d\n", counter);
}