#include<iostream>
using namespace std;
template <class T>
class stack{
	T st[10];
	int top;
	public:
		stack():top(-1){}
		void push(T x){
			st[++top] = x;
		}
		T pop(){
			return st[top--];
		}
};

   int main(){
   	stack<int>s1;
   	s1.push(20);
   	s1.push(30);
   	cout<<s1.pop();
	 
	 stack<float>s2;
	 s2.push(20.0f);
	 s2.push(30.5f);
	 cout<<s2.pop();
	      }
