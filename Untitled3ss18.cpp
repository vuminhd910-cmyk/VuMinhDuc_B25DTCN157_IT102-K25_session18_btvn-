#include <stdio.h>
 void calculateSum(int *pNum1, int *pNum2, int *pResult) {
     
    *pResult = *pNum1 + *pNum2;
}

int main() {
    
    int num1 = 15;
    int num2 = 7; 
    int result;
    printf("Hai so nguyen da cho là: %d và %d\n", num1, num2);
    calculateSum(&num1, &num2, &result);
    printf("--- KET QUA---\n");
    printf("Tong cua %d và %d là: %d\n", num1, num2, result);

    return 0;
} 

