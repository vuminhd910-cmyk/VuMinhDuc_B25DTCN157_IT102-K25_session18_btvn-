#include <stdio.h>
#define MAX_CAPACITY 10

 
void printArray(int arr[], int currentSize) {
    printf("[");
    for (int i = 0; i < currentSize; i++) {
        printf("%d", arr[i]);
        if (i < currentSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

  
int deleteElement(int arr[], int index, int *currentSize) {
     
    if (*currentSize <= 0) {
        printf(" loi mang rong .\n");
        return 0;
    }
    if (index < 0 || index >= *currentSize) {
        printf("loi chi muc ko hop le\n", index, *currentSize - 1);
        return 0;
    }

    printf("phan tu vi tri %d có gia tri  %d se duoc  xoa.\n", index, arr[index]);

     
    for (int i = index; i < *currentSize - 1; i++) {
        arr[i] = arr[i + 1];
    }

     
    (*currentSize)--;

    return 1;
}

int main() {
      
    int myArray[MAX_CAPACITY] = {10, 20, 30, 40, 50, 60};
    int currentSize = 6;  
    printf("mang goc ban dau\n", currentSize);
    printArray(myArray, currentSize);

     
    int deleteIndex = 2;  
     
    printf("\n--- ham xoa phan tu  ---\n");
    if (deleteElement(myArray, deleteIndex, &currentSize)) {
        
        printf("xoa thanh cong .\n");
        printf("\n---  ---\n", currentSize);
        printArray(myArray, currentSize);
    }
    
     ---
    deleteIndex = currentSize - 1; 
    printf("\n--- Th? Xóa Ph?n T? Cu?i Cùng ---\n");
    if (deleteElement(myArray, deleteIndex, &currentSize)) {
        printf("? Xóa thành công.\n");
        printf("\n--- M?ng Sau Khi Xóa L?n 2 (%d ph?n t?) ---\n", currentSize);
        printArray(myArray, currentSize);
    }

    return 0;
}
 
