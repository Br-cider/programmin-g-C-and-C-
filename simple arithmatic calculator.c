#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	char ops;
	printf("Enter your first no.");
	scanf("%d",&a);
	printf("Enter an opeation that you want to perform(+ , - , * , / , %)\n");
	scanf("%c",&ops);	
	printf("Enter your second no.\n");
	scanf("%d",&b);
	switch(ops){
	    default:
		printf("Invalid data....try again");
	break;
		case '+' :
	    printf("the sum of given no is",a+b);
    break;
        case '-' :
	    printf("the sub of given no is",a-b);
	break;
	    case '*' :
	    printf("the mul of given no is",a*b);
	break;
	    case '/' :
	    printf("the div of given no is",a/b);
	break;
	    case '%' :
	    printf("the mod of given no is",a%b);
	}
	return 0;	
}
