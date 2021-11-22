#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *num = &a;
	*num =20;
	cout<<a<<endl;
}
