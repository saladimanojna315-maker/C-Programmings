#include<iostream>
using namespace std;
class staticfn{
	public:
		static int i;
		int j=1;
		static void print(){
			cout<<"value is "<<i;
		}
};
int staticfn::i =10;
int main(){
	staticfn :: print();
}
