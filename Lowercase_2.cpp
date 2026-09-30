#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	
	printf("Enter the word: ");
	scanf("%s", &ch);
	
	if(islower(ch)){
		printf("It is in lowercase.");
	}
	else{
		printf("It is in uppercase.");
	}
	return 0;
}
