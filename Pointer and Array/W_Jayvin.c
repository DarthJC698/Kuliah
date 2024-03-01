#include <stdio.h>

int main() {
    int tc, n;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; t++) {
        scanf("%d", &n);
        int arr[201];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        int flag = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    for (int k = 0; k < n; k++) {
                        if (j != k && i != k) {
                            if (arr[i] == arr[j] + arr[k]) {
                                count++;
                                flag = 1;
                                break; 
                            }
                        }
                    }
                    if (flag == 1) {
                        flag = 0;
                        break; 
                    }
                }
            }
        }

        printf("Case #%d: %d\n", t, count);
    }

    return 0;
}
