#include<stdio.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int tc;
    fscanf(file, "%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int n;
        fscanf(file,"%d", &n);
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int n;
            char blank[10000];
            int price;
            fscanf(file,"%d#%[^@]@%d\n", &n, blank, &price);
            sum += n*price;
        }
        printf("Costumer #%d: Rp %d\n", i+1, sum-=sum*15/100);
        
    }
    

    
}