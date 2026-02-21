#include <stdio.h>

void countingSort(int arr[], int n) {
    int i;

    int max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int count[max + 1];
    for(i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for(i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int index = 0;
    for(i = 0; i <= max; i++) {
        while(count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}