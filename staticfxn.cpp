#include<iostream>
using namespace std;
class registerId{
	private:
		static int total;
		int id;
	public:
		registerId(){
			total++;
			id = total;
		}
		~ registerId(){
			total--;
			cout<<"Id"<<id;
		}
		static void showtotal(){
			cout<<total;
		}
		void showId(){
			cout<<"Id is "<<id;
		}
};
 int registerId :: total = 0;
 
  int main(){
  	registerId a;
  	registerId :: showtotal();
  	registerId b, c, d;
  	registerId :: showtotal();
  	a.showId();
  	b.showId();
  	c.showId();
	d.showId();
	cout<<"End of program";
	return 0; 
	    }
