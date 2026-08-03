#include<iostream>
using namespace std;
class student{
	private:
		int marks;
	public:
		void readmarks(int m){
			marks = m;
		}
		void putmarks(){
			cout<<"marks"<<marks<<endl;
		}
		void callbyvalue(student s){
			s.marks = 100;
		}
		void callbyreference(student &s){
			s.marks = 200;
		}
};
int main(){
	student s1,s2,obj;
	s1.readmarks(50);
	s2.readmarks(60);
	s1.putmarks();
	obj.callbyvalue(s1);
	s1.putmarks();
	s2.putmarks();
	obj.callbyreference(s2);
	s2.putmarks();
}
