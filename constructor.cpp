#include<iostream>
using namespace std;
class Area{
	private:
		int b , h;
		
    public:
    	void getSides(){
    		cout<<"Enter base and altitude of Triange";
    		cin>>b>>h;
		}
		float calArea(){
			return 0.5 * b * h;
		}
		Area():b(0),h(0){            //constructor without arguments
		}
		
		Area (int x,int y):b(x),h(y){   //parametrized constructor
		}
		
};
  int main(){
  	Area triangle1, triangle(5,8);
  	triangle1.getSides();
  	float a = triangle1.calArea();
  	cout<<a;
  	float b = triangle.calArea();
  	cout<<b;
  }
