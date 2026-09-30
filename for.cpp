#include<stdio.h>
int main(){
	int num[4], i;
	
	for(i=0;i<=3;i++){
		printf("\nEnter number %d: ",i+1);
		scanf("%d",num[i]);
	}
	
	return 0;
}
