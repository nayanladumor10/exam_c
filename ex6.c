#include<stdio.h>

struct mobile{
 char name[100];
 char col[100];
 int mod;
 int pr;
};

main(){
	int n;
 printf("enter the number of mobiles.");
 scanf("%d",&n);
 struct mobile m[n];
 int i;
 for(i=0;i<n;i++){
 	printf("\nenter the ditail of %d phone",i+1);
 	printf("\nenter the company name:");
 	scanf("%s",&m[i].name);
 	printf("\nenter the color:");
 	scanf("%s",&m[i].col);
 	printf("\nenter the model num:");
 	scanf("%d",&m[i].mod);
 	printf("\nenter the price:");
 	scanf("%d",&m[i].pr);
 }
 
 for(i=0;i<n;i++){
 	printf("\ncompany-name:%s",m[i].name);
 	printf("\ncolor:%s",m[i].col);
 	printf("\nmodel:%d",m[i].mod);
 	printf("\nprice:%d",m[i].pr);
 }	
	
}
