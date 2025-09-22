#include<iostream>
using namespace std;

int main(){
	int i,j;
	
	for(i=1;i<=100;i++){
		
		for(j=2;j<=i;j++){
			if(i%j==0)
			break;
	}
		if(j>i/2)
		cout<<i<<" ";
		
	}
	return 0;
}
