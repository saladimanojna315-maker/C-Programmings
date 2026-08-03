#include<iostream>
using namespace std;
class outer{
	public:
		void display(){
			cout<<"display() function is from outer class"<<endl;
		}
		class inner{
			public:
				void display(){
					cout<<"display() function is from inner class"<<endl;
				}
		};
};
int main(){
	outer::inner obj;
	obj.display();
	outer out;
	out.display();
	}
