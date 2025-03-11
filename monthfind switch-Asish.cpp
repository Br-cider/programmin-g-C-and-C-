#include<stdio.h>
int main(){
	int numb;
	printf("We want to select a month\n");
	printf("Enter the month number : ");
	scanf("%d",&numb);
	switch(numb){
	defaulte:
	printf("default choice");
	break;
	case 01:
	    printf("jan");
	break;
	case 02:
	    printf("feb");
	break;
	case 03:
	   printf( "mar");
	break;
	case 04:
	   printf( "apr");
	break;
	case 05:
	    printf("may");
	break;
	case 06:
	    printf("jun");
	break;
	case 07:
	    printf("jul");
	break;
	case 8:
	   printf("aug");
	break;
	case 9:
	    printf("sep");
	break;
	case 10:
	    printf("oct");
	break;
	case 11:
	printf("nov");
	break;
	case 12:
	   printf("dec");}
return 0;}
