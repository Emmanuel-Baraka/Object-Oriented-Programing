#include <iostream>
using namespace std;

double volume(double radius, double height);

int main(){
	double  radius,height;
	
	
	cout<<"Enter the radius of the cylinder: "<<endl;
	cin>>radius;
	
	cout<<"Enter the height of the cylinder: "<<endl;
	cin>>height;
	
	
	double volume(double radius,double height );
	

	
	cout<<"The volume of the cylinder is : "<<volume;
	
	return 0;
}
double volume(double radius, double height){
	const double PI=3.142;
	double volume;
	volume=PI*radius*radius*height;
	return PI*radius*radius*height;
}
