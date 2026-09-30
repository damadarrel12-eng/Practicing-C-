#include<stdio.h>
int main(){
	int num[4], i, max;
	
	for(i=0;i<=3;i++){
		printf("\nEnter number %d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<3;i++){
		if(num[i+1] >=num[i]){
			max = num[i+1];
		}
		else{
			max = num[i];
		}
}
	printf("%d",max);
	
	return 0;
}
