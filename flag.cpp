//program using flag control to print natural numbers upto 100 using flag controlled loop
#include<iostream>
 using namespace std;
 int main()
{
   int i=1;
   bool flag=true;
   while(flag){
   	cout<<i<<endl;
   	if(i>=100){
   			flag=false;
	   }
    i++;
   } 
	return 0;
}
