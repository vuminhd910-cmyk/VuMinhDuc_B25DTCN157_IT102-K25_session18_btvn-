#include <stdio.h>
void swap_values(int *ptr_a, int *ptr_b){
	int temp; 
	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp; 
} 
int main(){
	int a = 12; 
	int b = 20;
	printf("gia tri cua a: %d\n",a);
	printf("gia tri cua b: %d\n",b);
	swap_values(&a,&b);
	printf("gia tri moi cua bien a la: %d\n",a);
	printf("gia tri moi cua bien b la: %d\n",b); 
} 
