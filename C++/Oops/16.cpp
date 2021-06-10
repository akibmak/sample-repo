#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1,int y1) { x = x1; y = y1; }

	// Copy constructor
	Point(const Point &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{

    Point *t1 = new Point(10,20);
    Point *t2 = new Point(30,40);
    Point *t3 = t1;//t1,t3 will point to the same object.
    


	// Let us access values assigned by constructors
	

	return 0;
}
