#include<iostream>
using namespace std;

int main(){
	
	double volume,length,breadth,height;
	
	cout<<"Length of Cuboid=";
	cin>>length;
	
	cout<<"Breadth of Cuboid=";
	cin>>breadth;
	
	cout<<"Height of Cuboid=";
	cin>>height;
	
	volume=length*breadth*height;
	
	cout<<"Volume of Cuboid is "<<volume<<endl;
	
	return 0;
}
