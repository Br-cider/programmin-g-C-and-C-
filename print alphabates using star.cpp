#include<iostream>
using namespace std;
int main(){
int i,j,rows;
char alphab;
cout<<"enter the range ";
cin>>rows;	
cout<<"Give an alphabate that you want: ";
cin>>alphab;

//for A
if(alphab == 'A'){

	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1|| j==rows||i==(rows/2)+1)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for B
}else if
(alphab == 'B'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1|| j==rows||i==(rows/2)+1||i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for C
}else if
(alphab == 'C'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1|| i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for E
}else if
(alphab == 'E'){
for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1||i==(rows/2)+1)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for F
}else if
(alphab == 'F'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1||i==(rows/2)+1)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for G
}else if
(alphab == 'G'){
for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1||i==rows) 
	cout<<" * ";
else  cout<<"   ";
if(i==(rows-(1/2)/2)+1)
cout<<"* ";
else
cout<<"  ";
 if(j==rows)
 
 cout<<"";
cout<<
cout<<"";}
cout<<endl;}

//for H
}else if
(alphab == 'H'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if( j==1||i==(rows/2)+1||j==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for I
}else if
(alphab == 'I'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if( i==1||j==(rows/2)+1||i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for L
	}else if
(alphab == 'L'){
for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if( j==1||i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

//for O
	}else if
(alphab == 'O'){
		for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 || j==1|| j==rows||i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

	//for T 
	}else if
(alphab == 'T'){
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if(i==1 ||j==(rows/2)+1)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}

	//for U
	}else if
(alphab == 'U'){
		for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
	if( j==1|| j==rows||i==rows)
	cout<<" * ";
else  cout<<"   ";
cout<<"";}
cout<<endl;}
}else{
cout<<"choose the uper and lower case chars.....\n please try again";
}
return 0;
}
