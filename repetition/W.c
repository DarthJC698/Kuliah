#include <stdio.h>

int simulation(int testcase){
int n;
scanf("%d", &n);
int number[n+1];
int index[n+1];
int z=0;
int count = 0;

for (int i = 0; i < n; i++)
{
    scanf("%d", &number[i]); getchar();
}
for (int i = 0; i < n+1; i++)
    {
    index[i]=-2;
    }

int k = 0;
for (int i = 0; i < n; i++)
    {
        int status = 1;
    for (int j = 0; j < n; j++)
    {
        if(index[j]==number[i]){
            status = 0;
        }
    }
    if(status){
        // printf("tambahin ke index %d\n", number[i]);
        index[k]=number[i];
        k++; 
    }}

for(int i = 0; i<n;i++){
    int index2=0;
    for (int k = i+1; k<n ; k++)
    {
        index2=number[i]+number[k];
        // printf("number ke %d + %d= %d\n",i, k, index2);
        for (int j = 0; index[j]!= -2; j++){
            // printf("error %d != %d\n", index2, index[j]);
            if(index2==index[j]){
                // printf("wow ini sama, %d = %d, dari %d + %d\n", index2, index[j], number[i], number[k]);
                count++;
                index[j]=-1;
            }
        }
    
        

    }
    }
    printf("Case #%d: %d\n", testcase, count);
    
    
}






int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
    simulation(i+1);

    }

    return 0;
}