#include<iostream>
using namespace std;
class Room {
	private:
		int l,b;
	public:
		void getLB()
		{
			cout<<"Enter length and breadth of room:";
			cin>>l>>b;
		}
		int calArea(){
	
		return l * b;
     	}
};


int main(){
	Room r1 , r2;
	r1.getLB();
	int a1 = r1.calArea();
	
	r2.getLB();
	int a2 = r2.calArea();
	
	cout<<"Area of rooms are "<<a1<<endl<<a2;
}
