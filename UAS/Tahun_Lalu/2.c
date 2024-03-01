#include<stdio.h>
#include<string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int n;
    fscanf(file, " %d", &n);

    int arr[n+5];

    double sum=0.0;
    for (int i = 0; i < n; i++)
    {
        fscanf(file, " %d", &arr[i]);
        sum+=arr[i];
    }
    // double result= sum/n;
    printf("%.2lf\n", sum/n);
}