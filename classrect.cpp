#include<iostream>
using namespace std;
class Rectangle {
	private:
		int length;
		float width;
	public:
		Rectangle (float l, float w){
			length = l;
			width = w;
		}
		
		float calculateArea()
		{
			return length * width;
		}
		float calculatePerimeter(){
			return 2 * (length + width);
		}
};

  int main(){
    float length , width;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter width of rectangle: ";
    cin>>width;
    Rectangle rectangle (length, width);
    cout<<"Area of Rectangle :"<<rectangle.calculateArea()<<endl;
    cout<<"Perimeter of Rectangle :"<<rectangle.calculatePerimeter()<<endl;
    return 0;
	}
