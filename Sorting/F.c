#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct movie_struct {
    char name[1005];
    long long int priority;
} movie;

void swap(movie *a, movie *b) {
    movie temp = *a;
    *a = *b;
    *b = temp;
}

int partition(movie arr[], int low, int high) {
    int pivot_random = low + (rand() % (high - low));
    if (pivot_random != high) {
        swap(&arr[high], &arr[pivot_random]);
    }
    long long pivot_value = arr[high].priority;
    char pivot_name[1000];
    strcpy(pivot_name, arr[high].name);

    int j = low - 1;
    for (int i = low; i < high; i++) {
        if (pivot_value > arr[i].priority) {
            j++;
            swap(&arr[i], &arr[j]);
        } else if (pivot_value == arr[i].priority) {
            if (strcmp(arr[i].name, pivot_name) < 0) {
                j++;
                swap(&arr[i], &arr[j]);
            }
        }
    }

    swap(&arr[j + 1], &arr[high]);
    return j + 1;
}

void qsortrecursion(movie arr[], int low, int high) {
    srand(time(NULL));
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        qsortrecursion(arr, low, pivot_index - 1);
        qsortrecursion(arr, pivot_index + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    movie data[1000];

    for (int i = 0; i < n; i++) {
        scanf(" %s %lld", data[i].name, &data[i].priority);
        getchar();  // to consume the newline character
    }

    qsortrecursion(data, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%s\n", data[i].name);
    }

    return 0;
}
