#include<stdio.h>

main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	div(n);
}

div(n){
	if(n%3==0 && n%5==0){
		printf("the given number is dividable with both 3&5");
	}else{
	printf("the given number is not dividable with both 3&5");	
	}
}
