#include <stdio.h>
void updateElement(int arr[], int newValue, int index, int size) {
    
    if (index >= 0 && index < size) {
         
        arr[index] = newValue;
        printf("da cap nhat thanh  cong : arr[%d] = %d\n", index, newValue);
    } else {
        printf(" Loi: Chon muc ko hop le  (%d)  [0, %d].\n", index, size - 1);
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

    printf("mang goc ban dau co cac phan tu %d\n", size);
    printArray(myArray, size);

    
    int newValue = 999;
    int updateIndex = 2;  

    
    printf("\nhma cap nhat phan tu\n");
    updateElement(myArray, newValue, updateIndex, size);

    
    printf("\nmang sau khi cap nhat la\n");
    printArray(myArray, size);

    return 0;
}


