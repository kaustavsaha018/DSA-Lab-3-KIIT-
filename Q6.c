#include<stdio.h>
struct Distance{
	int km;
	int m;
};

int main(void){
	struct Distance d1;
	struct Distance d2;
	printf("Enter the first distance:\n\nHow many kilometers: ");
	scanf("%d",&d1.km);
	printf("How many meters: ");
	scanf("%d",&d1.m);
	printf("\nEnter the Second distance:\n\nHow many kilometers: ");
	scanf("%d",&d2.km);
	printf("How many meters: ");
	scanf("%d",&d2.m);
	
	int totalKiloMeters = d1.km + d2.km;
	int totalMeters = d1.m + d2.m;
	if(totalMeters>=1000){
		totalMeters = 1000 - totalMeters;
		totalKiloMeters++;
	}
	
	printf("\nAfter adding the total distance is: %d km %d m",totalKiloMeters,totalMeters);
}
