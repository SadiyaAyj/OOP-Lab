#include<iostream>
using namespace std;
class point {
	private:
		int x , y;
	public:
		point():x(0),y(0){}
		point(int m,int n):x(m),y(n){}
		void getPoint(){
			cout<<"Enter coordinates:";
			cin>>x>>y;
		}
		void showPoint(){
			cout<<x<<y;
		}
		point addPoint(point m, point n){
			point temp;
			temp.x = m.x + n.x;
			temp.y = m.y + n.y;
			return temp;
		}
};

  int main(){
  	point p1, p2, p3;
  	p1.getPoint();
  	p2.getPoint();
	p3 = p1.addPoint(p1,p2);
	p3.showPoint();
}
