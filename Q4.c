#include <stdio.h>
struct Student{
	
	int roll;
	char name[25];
	int marks[5];
};
int main (void){
	int i;
	struct Student s1;

	printf("Enter the Name of Student: ");
    gets(s1.name);  
	printf("Enter Student Roll No.: ");
	scanf("%d", &s1.roll); 
	printf("Enter 5 subject marks:\n");
	for(i=0;i<5;i++){
		scanf("%d", &s1.marks[i]);
	}
	
    printf("\nStudent Name: ");
    printf(s1.name);
	printf("\nStudent Roll No.: %d", s1.roll);
	printf("\nThe marks of Student are:");
	for(i=0;i<5;i++){
		printf(" %d ", s1.marks[i]);
	}
}
