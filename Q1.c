#include<stdio.h>
double simpleInterest(float principle, float time, float rate);
int main(){
	float principle, time, rate;
	printf("Enter the principle ammount: ");
	scanf("%f", &principle);
	printf("\nEnter the time (in years): ");
	scanf("%f", &time);
	printf("\nEnter the rate of interest: ");
	scanf("%f", &rate);
	
	double SI = simpleInterest(principle,time,rate);
	printf("The Simple Interest is: %.2lf",SI);
	return 0;
}

double simpleInterest(float principle, float time, float rate){
	return ((principle*rate*time)/100);
}
