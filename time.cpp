#include<stdio.h>
int main(){
	int subject_1, subject_2, subject_3;
	float Total;
	
	printf("Enter your mark in subject 1 : ");
	scanf("%d", &subject_1);
	printf("Enter your mark in subject 2: ");
	scanf("%d", &subject_2);
	printf("Enter your mark in subject 3: ");
	scanf("%d", &subject_3);
	
	Total = subject_1 + subject_2 + subject_3;
	
	if(Total/60*100 >= 40 && subject_1*5 >= 33 && subject_2*5 >= 33 && subject_3*5 >= 33){
		printf("\nYou passed.\nYou ain't dumb. :)");
	}
	else{
		printf("\nYou failed\nReally bro :(");
	}
	
	return 0;
}
