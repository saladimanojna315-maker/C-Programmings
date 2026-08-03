#include<iostream>
using namespace std;
inline int add(int a, int b){
	return a+b;
}
inline int add(int p, int q, int r){
	return p+q+r;
}
int main(){
	cout<<add(1,2)<<" "<<add(1.4,1.5)<<" "<<add(10,20,30);
}
