#include<stdio.h>
int main(){
	int monno;
	printf("press 4(month in no. form 1,10,11,12)\n");//jan,oct,nov,dec //winter
	printf("press 2(month in no. form 3,4,5,6)\n");//mar,apr,may,june       //summer
	printf("press 3(month in no. form 7,8,9)\n");//july,aug ,sep               //raimfall 
	printf("press 1 (month in no. form 2)\n");//feb                               //spring
	printf("\ngive your required month's no.");
	scanf("%d",&mono);
	switch(mono){
		default:
		    printf("Invalid data....try again");
	    	break;
		case 1:
		   printf("it's spring season");	
			break;
		case 2:
		   	printf("It's summer season");
			break;
		case 3:
		   	printf("It's rainy season");
			break;
		case 4:
			printf("It's winter season");
	}
	return 0;	
}
