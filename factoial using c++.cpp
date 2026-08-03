#include<iostream>
using namespace std;

long long fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;

    cout<<"fact = "<<fact(n);
    return 0;
}
