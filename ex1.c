#include<stdio.h>
main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	int fd=n;
	while(fd>10){
		fd/=10;
	}
	int ld=n%10;
	
	printf("sum is:%d",fd+ld);
}
