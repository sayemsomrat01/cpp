#include<iostream>
using namespace std;
int returnPositive(int a, int b){
	return (a>b)?a-b:-(a-b);
}
int main(){
	int fst, scnd;
	cout<<"[+] Enter two Numbers : "<<endl;
	cin>>fst>>scnd;
	cout<<"[==] Actual Difference between two numbers : "<<returnPositive(fst,scnd)<<endl;
	return 0;
}
