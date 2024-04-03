#include<stdio.h>
main(){
	int i,j,s;
	for(i=10;i>=6;i--){
		for(s=i;s<=10;s++){
			printf(" ");
		}
		for(j=i;j>=6;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
