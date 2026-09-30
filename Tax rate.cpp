#include<stdio.h>
int main(){
	int income,tax;
	
	printf("Enter your income: ");
	scanf("%d", &income);
	
	if(income < 2500){
		tax = 0;
		printf("You donot need to pay any tax.");
	}
	else if(income >= 2500 && income <= 5000){
		tax = 5;
		printf("Your tax is of %d\%",tax);
	}
	else if(income >= 5000 && income <= 10000){
		tax = 20;
		printf("Your tax is of %d\%",tax);
	}
	else if(income > 10000){
		tax = 30;
		printf("Your tax is of %d\%",tax);
	}
	else{
		printf("You enterd an invalid value");
	}
	
	return 0;
}
