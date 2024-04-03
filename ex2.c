#include<stdio.h>
main()
{
	char s[100];
	printf("enter the string:");
	scanf("%s",&s);
	
	char key;
	int c=0,i,j;
	for(i=0;s[i]!='\0';i++){
		c=0;
       key=s[i];
       for(j=0;s[j]!='\0';j++){
       	if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ){
       		       	if(key==s[j]){
       		c++;
		   }
		   }

	   }
	   printf("\n%c=%d",key,c);
	}
}
