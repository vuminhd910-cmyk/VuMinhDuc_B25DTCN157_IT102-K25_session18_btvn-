#include <stdio.h>
int findElement(int arr[], int targetValue, int size) {
      
    for (int i = 0; i < size; i++) {
        
        if (arr[i] == targetValue) {
           
            return i;
        }
    }

     
    return -1;
}

int main() {
    
    int myArray[] = {5, 12, 3, 25, 8, 17, 42};
    
    int size = sizeof(myArray) / sizeof(myArray[0]);

     
    int valueToFind1 = 25;
    int valueToFind2 = 100;

    printf("--- Mang da Khai Bao ---\n");
    printf("[5, 12, 3, 25, 8, 17, 42]\n");
    printf("kich thuoc mang : %d\n", size);

    
    printf("\n--- TH 1: tim gia tri  %d ---\n", valueToFind1);
     
    int position1 = findElement(myArray, valueToFind1, size);

     
    if (position1 != -1) {
        printf("tim thay phan tu : %d\n", valueToFind1, position1);
    } else {
        printf(" khong tim thay phan tu\n", valueToFind1);
    }

    
    printf("\n--- TH2: Tim gia tri  %d ---\n", valueToFind2);
     
    int position2 = findElement(myArray, valueToFind2, size);

     
    if (position2 != -1) {
        printf(" tim thay phan tu  %d\n", valueToFind2, position2);
    } else {
        printf(" khong tim thay phan tu %d \n", valueToFind2);
    }

    return 0;
}
