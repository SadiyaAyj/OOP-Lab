//program to print numbers from 1 to 50 when the value of the counter will be 50 loop should stop.
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	for(;;){
		cout<<i<<endl;
		if(i==50){
			break;
		}
		i++;
	}
	return 0;
}
