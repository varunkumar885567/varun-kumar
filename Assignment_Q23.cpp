#include<iostream>
using namespace std;

int main(){
	
	int N=0;
	int sum=0;
	
	cout<<"Enter a Number:";
	cin>>N;
	
	for(int i=1;i<=N;i++){
		sum+=2*i;
	}
	
	cout<<"sum of first "<<N<<" even natural number is:"<<sum<<endl;
	
	return 0;
}
