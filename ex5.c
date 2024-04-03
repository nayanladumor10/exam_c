#include<stdio.h>
main(){
	int n;
	printf("enter the size of arry:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the elemnts of first array:");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the elemnts of second array:");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	int *p1,*p2;
	p1=&a;
	p2=&b;
	
	int c[n];
	for(i=0;i<n;i++){
	 c[i]=*(p1+i)+*(p2+i);	
	}
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d",c[i]);
	}
}
