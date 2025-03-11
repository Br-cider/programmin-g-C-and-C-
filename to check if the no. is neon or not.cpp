#include<iostream>
using namespace std;
int main(){
	int num,sum;
	cout<<"give an more then one digit number: ";
	cin>>num;
	while(num>0){
	int remind=num%10;
	int sum= remind;
	num/=10;
cout<<"the product of digits should be"<<sum<<endl;
}
int square= sum^2;
if(square == num)
cout<<"the number is an neon number";
else
cout<<"its not an neon number";
	return 0;
}
