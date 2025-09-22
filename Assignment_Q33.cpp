#include<iostream>
using namespace std;

int main(){
	int i,x,y,z;
	cout<<"Enter max. term:";
	cin>>i;
	
	x=0;
	y=1;
	for(z=0;z<=i;z=x+y){
		cout<<"\n"<<z;
		x=y;
		y=z;
	}
	return 0;
}
