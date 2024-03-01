#include <stdio.h>

int main(){

    int T, N, k = 0;
    scanf("%d", &T);

    long long int sum;

    for (int i = 0; i < T; i++){

        scanf("%d", &N);
        long long Arr [N][N];

        for (int k = 0; k < N; k++){
            for (int j = 0; j < N; j++){
                scanf("%lld", &Arr[k][j]);
            }
        }

        printf("Case #%d:", i+1);

        for (int j = 0; j < N; j++){
            sum = 0;
            for (int k = 0; k < N; k++){
                sum += Arr[k][j];
            }
                printf(" %lld", sum);

            // printf("%d ", sum);
        }

        printf("\n");

    }

    // int Arr [N][N];
    // for (int i = 0; i < N; i++){
    //     for (int j = 0; j < N; j++){
    //         scanf("%d", &Arr[i][j]);
    //     }
    // }

    return 0;
}