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
    for(int i = 0; i < n-1; i++){
    int swapped = 0;

    for(int j = 0; j < n-i-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swapped = 1;
        }
    }

    if(swapped == 0) 
    break;
}

    printf("the sorted arr is :");
    for(int i = 0; i < n-1; i++){
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);
    return 0;
    
}