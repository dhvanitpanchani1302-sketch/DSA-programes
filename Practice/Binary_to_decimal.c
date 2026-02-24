#include<stdio.h>
#include<stdlib.h>
void binary_To_Decimal(int n) {
    int decimal = 0, base = 1, temp;
    while(n > 0) {
        temp = n % 10;
        decimal += temp * base;
        n /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
}
void decimal_To_Binary(int n) {
    int binary[32], i = 0;
    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary equivalent: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main(){
    int choice, decimal, binary;
    while (1){
        printf("Enter 1 to convert Binary to Decimal \n 2 to convert Decimal to Binary \n 3 for exit: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
            
                printf("Enter a binary number: ");
                scanf("%d", &binary);
                binary_To_Decimal(binary);
                break;
            }
            case 2: {
            
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                decimal_To_Binary(decimal);
                break;
            }
            case 3: {
                printf("Exiting the program.\n");
                exit(0);
                
            }
            default: {
                printf("Invalid choice. Please try again.\n");
            }
            
        }
    }
    
    
}