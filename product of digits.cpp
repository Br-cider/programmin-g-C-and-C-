#include<iostream>
using namespace std;
int main(){
	int num,prod=1;
	cout<<"give an more then one digit number: ";
	cin>>num;
	while(num>0){
	 prod *= num%10;
	num/=10;}
	cout<<"the product of digits should be"<<prod;
	return 0;
}
