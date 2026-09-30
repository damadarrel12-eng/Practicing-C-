#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the word: ");
	scanf("%s", &ch);
	
	if(ch >= 'a' && ch <= 'z'){
		printf("It is in lowercase.");
	}
	else{
		printf("It is in uppercase.");
	}
	return 0;
}

