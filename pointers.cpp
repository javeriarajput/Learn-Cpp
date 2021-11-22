#include<iostream>
using namespace std;
int main(){
	int a=10;
//	0x6ffe1c
	int *num = &a;
	*num =20;
	cout<<a<<endl;
}
