#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int arr[N];
        int totalSum = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            totalSum += arr[i];
        }

        // Check if it's possible to split the array into two parts with equal sums
        int currentSum = 0;
        int possible = 0;

        for (int i = 0; i < N; i++) {
            currentSum += arr[i];
            if (currentSum * 2 == totalSum) {
                possible = 1;
                break;
            }
        }

        printf("Case #%d: %s\n", t, (possible ? "Yes" : "No"));
    }

    return 0;
}