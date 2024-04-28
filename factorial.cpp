//Program calculates factorial of a number
#include<iostream>
using namespace std;
int main(){
  int n;
  long fact=1.0;
  cout<<"Enter a positive number";
  cin>>n;
  if(n<0)
    cout<<"Error! factorial of a negative number doesnot exist";
  else{
  	for(int i=1;i<=n;++i){
  		fact *=i;
	  }
	  cout<<"Factorail of "<<n<<"="<<fact;
  }
  return 0;
}
