#include <stdio.h>
int main(){
	int n; 
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	int *arrPtr=arr;
	for(int i=0; i<n; i++){
	printf("arr[%d] = ",i);
	scanf("%d",arrPtr+i);
}
printf("cac phan tu trong mang: \n");
for(int i=0; i<n; i++){
	printf("arr[%d]=%d\n",i,*(arrPtr+i));
}
printf("\n"); 
}
