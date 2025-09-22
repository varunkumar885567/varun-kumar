#include<iostream>
using namespace std;

int main(){
	int i,x,y,z,count=1;
	cout<<"Enter No of term:";
	cin>>i;
	
	x=0;
	y=1;
	z=0;
	for(count=1;count<=i;count=count+1){
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
	}
	return 0;
}
