#include<iostream>
using namespace std;

int main(){
	
	float principal,rate,time, simpleinterest;
	
	
	cout<<"Enter the Principal (P) =";
	cin>>principal;
	
	cout<<"Enter the Rate(R) in percentage=";
	cin>>rate;
	
	cout<<"Enter the Time period(T) in years= ";
	cin>>time;
	
	simpleinterest= (principal   * rate * time)/100;
	
	cout<<"The Simple interest of the amount is "<<simpleinterest<<endl;
	
	return 0;
}
