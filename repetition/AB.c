#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int matrix;
        scanf("%d", &matrix);
        int matrixes[matrix][matrix];
        int res[matrix][matrix];
        for (int  j = 0; j < matrix; j++)
        {
            for (int k = 0; k < matrix; k++)
            {
                
                scanf("%d", &matrixes[j][k]);
            }
            
        }
        for (int  j = 0; j < matrix; j++)
        {
            int vertical=0;
            for (int k = 0; k < matrix; k++)
            {
                int horizontal=0;
                res[j][k]=matrixes[j][k]
            }
            
        }
        
    }
    

    return 0;
}