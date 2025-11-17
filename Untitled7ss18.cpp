#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

 
void bubbleSort(int arr[], int size) {
    printf("Tien hanh sap xep\n");
    int i, j;
    
     
    for (i = 0; i < size - 1; i++) {
        
        for (j = 0; j < size - i - 1; j++) {
             
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
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
     
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("--- Mang ban dau \n", size);
    printArray(myArray, size);

    
    
    bubbleSort(myArray, size);

     
    printf("\n--- Mang sau khi sap xep  ---\n");
    printArray(myArray, size);

    return 0;
}
 

