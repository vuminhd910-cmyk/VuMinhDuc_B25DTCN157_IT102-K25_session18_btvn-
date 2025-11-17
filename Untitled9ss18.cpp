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

 
int insertElement(int arr[], int newValue, int index, int *currentSize, int maxCapacity) {
     
    if (*currentSize >= maxCapacity) {
        printf("loi\n");
        return 0;
    }

     
    if (index < 0 || index > *currentSize) {
        printf("? Loi\n", index);
        return 0;
    }

    
    for (int i = *currentSize - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[index] = newValue;

   
    (*currentSize)++;

    printf("? da them %d tai vi tri %d.\n", newValue, index);
    return 1;
}

int main() {
     
    int myArray[MAX_CAPACITY] = {10, 20, 30, 40, 50};
    int currentSize = 5;   

    printf("--- Mang goc ban dau ---\n", currentSize, MAX_CAPACITY);
    printArray(myArray, currentSize);

    
    int newValue = 99;
    int insertIndex = 2;  

    
    printf("\n--- Ham Them Phan Tu---\n");
    insertElement(myArray, newValue, insertIndex, &currentSize, MAX_CAPACITY);

     
    printf("\n--- mang sau khi them (%d/%d ph?n t?) ---\n", currentSize, MAX_CAPACITY);
    printArray(myArray, currentSize);

     
    newValue = 77;
    insertIndex = currentSize; 
    printf("\n--- Them vao cuoi mang ---\n");
    insertElement(myArray, newValue, insertIndex, &currentSize, MAX_CAPACITY);

    printf("\n---mang sau khi thêm lan 2 (%d/%d ph?n t?) ---\n", currentSize, MAX_CAPACITY);
    printArray(myArray, currentSize);


    return 0;
}

