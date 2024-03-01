#include <stdio.h>


long int findmax(long long int A[], long long int M, int N){

    long long int sum = 0;
    long int res = -1;
    long int count = 0;

    for(int i=0; i<N; i++){
        sum=0;
        count = 0;

        for(int j=i; j<N; j++){
            


            if(A[j] > M){
                break;
            }

            sum+=A[j];
            count++;

            if(sum+A[j+1] > M){
                break;
            }

           
        }

        if(res < count){
            res = count;
        }

    }

    return res;

   
}

int main(){

int T;
scanf("%d", &T);

for(int i=0; i<T; i++){
    int N;
    long long int M;
    scanf("%d %lld", &N, &M);
    

    long long int A[N+5];
    long long int sum = 0;
    for(int j=0; j<N; j++){
        scanf("%lld", &A[j]);
    }

    long int res = findmax(A, M, N);

    if(res == -1){
         printf("Case #%d: -1\n", i+1);
    }
    else{
        printf("Case #%d: %ld\n", i+1,res);
    }
   

}



    return 0;
}

