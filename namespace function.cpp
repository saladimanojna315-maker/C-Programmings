#include<iostream>
using namespace std;
class staticEX{
	public:
		static int count;
		void print(){
			count++;
		}
};
int staticEX :: count = 0;
int main(){
	staticEX s1,s2,s3;
	s1.print();
	s2.print();
	s3.print();	
	cout<<s3.count;
}
