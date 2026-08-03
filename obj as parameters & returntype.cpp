//object as parameters and return type
#include<iostream>
using namespace std;
class ReturnDemo{
	private:
		int val;
	public:
		void readvalue(int v){
			val = v;
		}
		void writevalue(){
			cout<<"value is "<<val<<endl;
		}
		ReturnDemo add(ReturnDemo r){
			ReturnDemo result;
			result.val = val+r.val;
			return result;
		}
};
int main(){
	ReturnDemo r1,r2,output;
	r1.readvalue(10);
	r2.readvalue(20);
	r1.writevalue();
	r2.writevalue();
	output = r1.add(r2);
	output.writevalue();
	}
