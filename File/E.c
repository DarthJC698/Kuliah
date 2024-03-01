#include <stdio.h>

int absolute(int n){
    if(n<0){
        return n=0-n;
    }
    return n;
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    fscanf(file, " %d", &testcase); fgetc(file);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        fscanf(file, " %d", &n);fgetc(file);

        int area=0;

        int sequence[n+2];
        for (int j = 0; j < n; j++)
        {
            fscanf(file, " %d", &sequence[j]); fgetc(file);
            area+=sequence[j];
        }
        int length = 2;
        int total=2*n*length+length*sequence[0]+length*sequence[n-1];
        // printf("total awal = %d\n", total);
        for (int j = 0; j < n-1; j++)
        {
            if(sequence[j]==sequence[j+1]){
                continue;
            }
            total+=length*absolute(sequence[j]-sequence[j+1]);
        }
        printf("Case #%d: %d %d\n", i+1, total, area*4);
    }

}