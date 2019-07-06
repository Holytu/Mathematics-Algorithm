#include <iostream>

using namespace std;

class Shape
{
private:
	int width;
	int height;
public:
	Shape(double a, double b);	
	void TriangleArea();
	void RectangleArea();
};

Shape::Shape(double a, double b)
{
	width = a;
	height = b;
}
void Shape::TriangleArea()
{
	cout<<width * height / 2.0;
}
void Shape::RectangleArea()
{
	cout<<width * height;
}

int main()
{
	Shape c1(4.0,5.0);
	c1.TriangleArea();
	cout<<endl;
	c1.RectangleArea();
	cout<<endl;
	return 0;
}