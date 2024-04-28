#include<iostream>
using namespace std;
template<class T>
T square(T x)
{
	return x* x;
}
int main(){
	int a = 10;
	cout<<square(a)<<endl;
	float b = 20.3;
	cout<<square(b)<<endl;
	long c = 6203;
	cout<<square(c)<<endl;
}
