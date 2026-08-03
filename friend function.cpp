#include<iostream>
using namespace std;
class friendex{
    protected:
    	int i=10;
		void print(){
			cout<<"print() function is from friendex class"<<endl;
		}
    public:
    	friend void add (friendex f);
};
void add(friendex fe){
	cout<<fe.i<<endl;
	fe.print();
}
int main(){
	friendex fe;
	add(fe);
}
