#include<iostream>
using namespace std;

int main(){
	
	int num=5;
	
	for(int i=1 ;i<=num ;i++){
		for(int j=1 ;j<=num ;j++){
			if(i>=j)
			cout<<j;
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
