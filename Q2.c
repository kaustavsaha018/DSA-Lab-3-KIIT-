#include <stdio.h>
int *arrayReverse(int *arr,int n);
int main (){
	int n;
	printf("Enter the size of the Array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elements:\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int *p;
	p = arrayReverse(&arr[0],n);

	for(i=0;i<n;i++){
		printf(" %d ", *(p+i));
	}
	return 0;
}

int *arrayReverse(int *arr,int n){
	int i,j,temp,k;
	
	for(i=0;i<n/2;i++){
			j=n-i-1;
			temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
	}
	
	return (arr);		
}
