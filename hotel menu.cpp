#include<iostream>
using namespace std;
int main(){
	int choice;
	int quantity;
	cout<<"\t\t\t\t\t<<<<<<<<<<DIAMOND HOTEL>>>>>>>>>>"<<endl;
	cout<<"\t\t-:main dishes:-"<<endl;
	cout<<"1.Butter Garliic naan                  45/-"<<endl;
	cout<<"2.Jira Rice                            59/-"<<endl;
	cout<<"3.chicken tikka masala                 439/-"<<endl;
	cout<<"4.paneer masala                        465/-"<<endl;
	cout<<"5.Shezuan Chowmin                      129/-"<<endl<<endl;

	cout<<"Enter an no. acording to the dish serial no."<<endl;
	cin>>choice;
	while(choice<=0)
switch(choice){
	default:
	cout<<"wrong info";
	cout<<"plase try again";
	break;
	    case 1:
			cout<<"your amount is 45."<<endl;		
			break;
			
		case 2:
			cout<<"your amount is 59";			
			break;
		case 3:
			cout<<"your amount is 439";
			break;
		case 4:
			cout<<"your amount is 465";
			break;
		case 5:
			cout<<"your amount is 129";
			}
			    if(1==choice){
			    	cout<<"give quantity of food that you want "<<endl;
			cin>>quantity;
			   cout<<"your total bill is:-> "<<quantity*49<<endl;
			}
           else if(2==choice){
		   	cout<<"give quantity of food that you want "<<endl;
			cin>>quantity;
           cout<<"your total bill is:-> "<<quantity*59;}
          else if(3==choice){
          	cout<<"give quantity of food that you want "<<endl;
			cin>>quantity;
	       cout<<"your total bill is:-> "<<quantity*439;}
          else if(4==choice){
          	cout<<"give quantity of food that you want "<<endl;
			cin>>quantity;
          cout<<"your total bill is:-> "<<quantity*468;}
          else if(5==choice){
          	cout<<"give quantity of food that you want "<<endl;
			cin>>quantity;
          cout<<"your total bill is:-> "<<quantity*129;}
       else
       cout<<"Out of the menu....";
cout<<"______________________________________________________________________";
cout<<"| _________________________WELCOME TO DIAMOND HOTEL ______________________|";
cout<<"_____________________________________________________________________________";
cout<<"|                                                                           |";
return 0;
}
