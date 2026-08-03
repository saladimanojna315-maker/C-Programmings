#include<iostream>
using namespace std;
class Addition{
	public:
		Addition(){
			cout<<"this is a default constructor"<<endl;
			}
		Addition(int a,int b){
			cout<<"Addition of two integers"<<a+b<<endl;
			}
		Addition(int x,int y,int z){
			cout<<"Addition of three integers"<<x+y+z<<endl;
			}
		Addition(double p,double q){
			cout<<"Addition of double two integers"<<p+q<<endl;
			}	
};
int main(){
	Addition a1;
	Addition a2(10,20);
	Addition a3(10,20,30);
	Addition a4(10.1,20.2);
}

