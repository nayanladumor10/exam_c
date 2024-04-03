#include<stdio.h>
main(){
	FILE *f1,*f2;
	f1=fopen("file1.txt","r");
	f2=fopen("file2.txt","w");
	char s;
	
	if(f1==NULL || f2==NULL){
		printf("unable to open files.");
		return 1;
	}
	
	while((s=fgetc(f1))!= EOF){
		fputc(s,f2);
	}
	
	printf("files copied succesfully.");
	
	fclose(f1);
	fclose(f2);
}
