//program displays cube of a number upto an 10
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i;
	for(i=0;i<=10;i++){
		cout<<i<<setw(6)<<i*i*i<<endl;
	}
	return 0;
}
