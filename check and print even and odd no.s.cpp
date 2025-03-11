#include<stdio.h>
int main(){
	int i,range;
	printf("Enter an range that you want to give: ");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
			printf("%d",i);
		if(i%2 == 0)
		printf("= it is an even no.\n");
		else
		printf("= it's an odd no.\n");
}
	return 0;
}

	
	
	
