#include<stdio.h>
#include<string.h>
int main(){
	char p[18];
	char c[18];
	printf("Enter the Password=");
	gets(p);
	int num=strlen(p);
	if(num>=18){}
	else{
	    printf("Does not Exit please enter 10 character...\n");
	return 1;
	}
	printf("Enter again to confirm the password:- ");
	gets(c);
	strcmp(p,c);
	
	if(strcmp(p,c)==0){
	
		printf("Successful set the password\n");
	    printf("THANK YOU.VISIT AGIAN!!!");}
	else{
	
	    printf("Not set the password\n");
	    printf("Please Enter The Correct Password");}
	return 0;
}
