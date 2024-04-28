//Program call by pointers
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m=20,n=10;
	cout<<m<<setw(5)<<n<<endl;
	swap(&m,&n);
	cout<<m<<n<<endl;
	return 0;
}
void swap(int *x,int *y){
	int temp;
	temp=*x;
	x*=*y;
	*y=temp;
	cout<<x<<y<<endl;
}
