#include<iostream>
using namespace std;

int main(){
	
	int scores;
	cout<<"Enter student's scores=";
	cin>>scores;
	
	if(scores>=91){
		cout<<"Grade 'A'"<<endl;
	}else if(scores>=80){
		cout<<"Grade 'B'"<<endl;
	}else if(scores>=70){
		cout<<"Grade 'C'"<<endl;
	}else if(scores>=50){
		cout<<"Grade 'D'"<<endl;
	}else{
		cout<<"Grade 'F'"<<endl;
	}
	
	return 0;
}
