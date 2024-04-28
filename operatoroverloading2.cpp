	#include<iostream>
	using namespace std;
	class point {
		private:
			int x, y;
		public:
			point():x(0),y(0){}
			void getxy(){
	         cout<<"Enter coordinates";
			 cin>>x>>y;			
			}
			void showxy(){
				cout<<x<<y;
			}
			bool operator < (point m){
				return x<m.x && y<m.y;
			}
			
	};
	
			int main(){
				point p1, p2;
				p1.getxy();
				p2.getxy();
				if(p1<p2)
				cout<<"P2 is greater";
				else
				cout<<"P1 is greater";
			}
