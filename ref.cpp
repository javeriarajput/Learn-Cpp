#include<iostream>
using namespace std;
main(){
	int num;
	num=20;
	int &refOfNum= num;
	refOfNum=30;
	cout<<num;
	
} 
