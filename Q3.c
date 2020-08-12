#include <stdio.h>
void swapByValue(int a, int b);
void swapByReference(int *a, int *b);
int main(){
	
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d\n%d", &a,&b);
	
	swapByValue(a,b);
	
	swapByReference(&a, &b);
	printf(" a = %d\n b = %d ",a,b);
	
	return 0;
}

void swapByValue(int a, int b){
	printf("Using swapByValue Function\n");
	int temp;
	temp=a;
	a=b;
	b=temp;	
	printf(" a = %d\n b = %d ",a,b);
}
void swapByReference(int *a, int *b){
	printf("\nUsing swapByReference Function\n");
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
