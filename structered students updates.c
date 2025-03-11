#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp;  
struct student{
	char name[20];
	int std;
	int roll;
	float fees;	
};
int menu();
int add();
int remove();
int modify();
int search();

//this used for to add an student
int add(){
	struct student s;
	fp=fopen("newdata.txt","a");
		printf("Enter the student name=\n");
	    scanf("%s",&s.name);
	    printf("Enter the student class=\n");
	    scanf("%d",&s.std);
	    printf("Enter the student Roll no.=\n");
	    scanf("%d",&s.roll);
	    printf("Enter the student fees=\n");
	    scanf("%f",&s.fees);

	  fprintf(fp,"%s\t%d\t%d\t%f\n",s.name,s.std,s.roll,s.fees);
	
	   printf("Record inserted...\n");
	fclose(fp);
}
// in this part we search that students data
int search(){
	struct student s;
	FILE *readfile = fopen("newdata.txt","r");
	int rollnum,found = 0;
	
	if(readfile == NULL){
		printf("File not found");
	}
	
	printf("\nenter Student's Roll Number'");
	scanf("%d",&rollnum);
	
	while(fscanf(readfile,"%s%d%d%f",s.name,&s.std,&s.roll,&s.fees)!=EOF){
		if(s.roll ==  rollnum){
			printf("\nRecord Found Successfully\n");
			printf("\n");
			printf("| Name\t\t| Class \t\t | RollNumber | \t\t Fees Paid |\n");
			printf("|||||\n");
			printf("%s \t\t %d \t\t\t%d \t\t %f \n",s.name,s.std,s.roll,s.fees);
			printf("|||||\n");
			found = 1;
			break;
		}
	}
		
	if(!found){
		    printf("\nRecord not found ! check your roll number ");
	}
}



 int menu(){
 	    printf("\t\t\t\t\t<<<<<<<<STUDENT MANAGEMENT SYSTEM>>>>>>>>\n");
 	int ch;
 
	 
	while(1){
	printf("\n Press 1 to insert new record \n Press 2 to search record \n Press 3 to modify record \n Press 4 to delete \n Press 5 to exit\n\n\n");
	 scanf("%d",&ch);
	 switch(ch){
	 	default :
			printf("Please enter the correct choice to see your required.....");
			break;
	 	case 1:
	 		add();
	 		 break;
	 	case 2:
	 		search();
	 		 break;
	 	case 3:
	 		  printf("Please enter the correct choise number:");
	 		  break;
	 	case 4:
	 		printf("Please enter the correct choise number:");
			 break;
		case 5:
			exit(0);
			printf("thank you for visiting, see you soon....");
	 }
	 }
	}
	
int main(){
menu();
	return 0;
}
