#include <stdio.h>
void updateElement(int arr[], int newValue, int index, int size) {
    
    if (index >= 0 && index < size) {
         
        arr[index] = newValue;
        printf("? Ð? c?p nh?t thành công: arr[%d] = %d\n", index, newValue);
    } else {
        printf("? L?i: Ch? m?c (%d) không h?p l?. Ch? m?c ph?i n?m trong kho?ng [0, %d].\n", index, size - 1);
    }
}

 
void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
     
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("--- M?ng G?c Ban Ð?u (%d ph?n t?) ---\n", size);
    printArray(myArray, size);

    
    int newValue = 999;
    int updateIndex = 2;  

    
    printf("\n--- G?i Hàm C?p Nh?t Ph?n T? ---\n");
    updateElement(myArray, newValue, updateIndex, size);

    
    printf("\n--- M?ng Sau Khi C?p Nh?t ---\n");
    printArray(myArray, size);

    return 0;
}

