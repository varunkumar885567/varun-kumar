#include<iostream>
using namespace std;

int main(){
	
	int age;
	cout<<"Enter your age=";
	cin>>age;
	
	if(age<=12){
		cout<<"You are a Child"<<endl;
	}else if(age<=19){
		cout<<"You are a Teenager"<<endl;
	}else if(age<=60){
		cout<<"You are a Adult"<<endl;
	}else{
		cout<<"You are Senior"<<endl;
	}
	
	return 0;
}
