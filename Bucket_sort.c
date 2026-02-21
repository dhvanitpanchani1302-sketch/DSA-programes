#include <stdio.h>

void bucketSort(int arr[], int n) {
    int bucket[10][10];
    int count[10] = {0};

    for(int i = 0; i < n; i++) {
        int index = arr[i] / 10;
        bucket[index][count[index]] = arr[i];
        count[index]++;
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 1; j < count[i]; j++) {
            int key = bucket[i][j];
            int k = j - 1;
            while(k >= 0 && bucket[i][k] > key) {
                bucket[i][k+1] = bucket[i][k];
                k--;
            }
            bucket[i][k+1] = key;
        }
    }

    int index = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < count[i]; j++) {
            arr[index++] = bucket[i][j];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bucketSort(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}