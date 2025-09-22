#include<iostream>
using namespace std;

int main(){
	int a,b,HCF;
	cout<<"Enter any two number:";
	cin>>a>>b;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
		HCF=i;
	}
	
	if(HCF==1){
		cout<<"The numbers are CO-PRIME"<<endl;
	}else{
		cout<<"The numbers are NOT CO-PRIME"<<endl;
	}
	return 0;
}
