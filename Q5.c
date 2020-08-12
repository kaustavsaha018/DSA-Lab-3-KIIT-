#include<stdio.h>
#include<string.h>
struct Employee{
	char name[35];
	int emp_no;
	int salary;
};

int main(void){	
	int n;
	printf("Enter the number of Employees: ");
	scanf("%d", &n);
	struct Employee E[n];
	int i;
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the name of Employee %d: ",i+1);
		getchar();
		gets(E[i].name);
		printf("Enter the ID of Employee %d: ",i+1);
		scanf("%d", &E[i].emp_no);
		printf("Enter the salary of Employee %d: ",i+1);
		scanf("%d", &E[i].salary);
		printf("\n");
	}
	int j;
	printf("\tEmployee Name\t\t   Employee ID\t\tEmployee Salary\n\n");
	for(i=0;i<n;i++){
		printf(" ");
		printf(E[i].name);
		for(j=0;j<35-strlen(E[i].name);j++){
			printf(" ");
		}

		printf("%d\t\t%d",E[i].emp_no,E[i].salary);
		printf("\n\n");
	}
	printf("\n");
	int highest_sal=0,count;
	for(i=0;i<n;i++){
		if(highest_sal<E[i].salary){
			highest_sal=E[i].salary;
			count=i;
		}
	}
	
	printf(E[count].name);
	printf(" has got the highest salalry.");

}
