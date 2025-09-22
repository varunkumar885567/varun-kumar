#include<iostream>
using namespace std;

int main(){
	int a, b,i,j;
	
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	
	for(i=a+1;i<=b-1;i++){
		
		for(j=2;j<=i-1;j++){
			
			if(i%j==0)
			break;
		}
		
		if(j==i)
			cout<<i<<" ";
	}
	return 0;
}
