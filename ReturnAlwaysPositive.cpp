#include<iostream>
using namespace std;
int main(){
	int frst, scnd;
	cout<<"[+] Enter Two number for getting result as positive value though result is negative :"<<endl;
	cin>>frst>>scnd;

	if(frst > scnd){
		cout<<frst-scnd<<endl;
	}
	else{
		cout<<-(frst-scnd)<<endl;
	}
	return 0;
}
