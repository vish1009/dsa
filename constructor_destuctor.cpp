#include<iostream>
using namespace std;
class point{
	int x;
	int y;
	public:
		//instilzing with insitilizaton list
		point():x(0),y(0){
//			x=0;
//			y=0;
		cout<<"constructor called\n";
		}
		point(int x1,int y1):x(x1),y(y1){
//			x=x1;
//			y=y1;
		cout<<"constructor called\n";
		}
		public:
	    void print(){
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
int main(){
	point p1,p2(10,30);
	p1.print();
	p2.print();
	point *p3=new point(2,3);
	
	p3->print();
	
}
