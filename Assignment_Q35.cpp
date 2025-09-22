#include<iostream>
using namespace std;

int main(){
	
	int a,b,HCF;
	
	cout<<"Enter any two number:\n";
	cin>>a>>b;
	
	for(int i=1; i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
		HCF=i;
	}
	cout<<"HCF is "<<HCF;
	return 0;
}
