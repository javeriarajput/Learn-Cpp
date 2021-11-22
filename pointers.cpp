#include<iostream>
using namespace std;
int main(){
	int num = 20;
	int *numPtr = &num;
	*numPtr=10;
	cout<<num<<endl;
//	cout<<*numPtr<<endl;
}
