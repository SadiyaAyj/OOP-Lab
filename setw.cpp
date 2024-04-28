//program using setwidth() 
#include<iostream>
#include<iomanip>
 using namespace std;
 int main()
{
	for(int i=0;i<=10;i++){
		cout<<i<<setw(5)<<i*i*i<<endl;
	}
	return 0;
}
