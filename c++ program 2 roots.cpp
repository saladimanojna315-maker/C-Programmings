//write a c++ program to find roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,x1,x2;
	cout<<"enter a,b,c values:";
	cin>>a>>b>>c;
	d = b*b-4*a*c;
	x1 = (-b+sqrt(d))/(2*a);
	x1 = (-b+sqrt(d))/(2*a);
	if(d == 0){
		cout<<"real roots";
		cout<<"roots are:"<<x;
	}
	else if(d > 0){
		cout<<"distinct roots";
		cout<<"roots are:"<<x;
	}
	else{
		cout<<"complex roots";
		cout<<"roots are:"<<x;
	}
}
