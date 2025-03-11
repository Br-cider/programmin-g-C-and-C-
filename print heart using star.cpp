#include<iostream>
using namespace std;
int main(){
	int a,b,size=15;
	for(a = size/2; a<= size; a=a+2){
		for(b = 1; b< size-a; b=b+2)
	cout<<" ";
	for(b=1; b<= a; b++)
	cout<<"3";
	for(b=1; b<= size-a; b++)
	cout<<" ";
	for(b=1; b<= a-1; b++)
	cout<<"1";
	cout<<"\n";
	}
	
	for(a=size; a>= 0; a--)
{
	for(b=a;b<size;b++)
	cout<<" ";
	for(b=1;b<=((a*2)-1);b++)
	cout<<"4";
	
	cout<<"\n";
	}	
	return 0;
}
