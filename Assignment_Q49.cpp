#include<iostream>
using namespace std;

int main(){
	
	int num=5;
	for(int i=0; i<num;i++){
		char ch='A';
		for(int j=0; j<i+1;j++){
			
			cout<<ch<<" ";
			ch=ch+1;
		}
		cout<<endl;
	}
	return 0;
}
