#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	
	cout<<"Enter any number:";
	cin>>n;
	int temp=n;
	while(n!=0){
		int rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(temp==sum)
	cout<<"ARMSTRONG Number: "<<sum;
	else
	cout<<"Not ARMSTRONG Number:"<<sum;
	return 0;
}
