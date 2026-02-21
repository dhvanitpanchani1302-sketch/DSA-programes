#include<stdio.h>
int main(){
    int n;
    printf("enter the value of number you wanto sort:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++ ){
        printf("enter the value %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
    printf("the sorted arr is :");
    for(int i = 0; i < n-1; i++){
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);
    return 0;
    
}