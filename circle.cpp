#include<iostream>
using namespace std;
class circle {
	private:
		int r;
	public:
		void getRadius()
		{
			cout<<"Enter radius";
			cin>>r;
		}
		float calArea(){
			return 3.14 * r * r;
		}
		float calcirumference()
		{
			return 2 * 3.14 * r;
		}
};

int main(){
	circle C1;
	C1.getRadius();
	float Area = C1.calArea();
	float circumference = C1.calcirumference();
	cout<<"Area is "<<Area<<endl<<"Circumference is "<<circumference;
	}
