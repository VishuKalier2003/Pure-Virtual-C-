// Implementation of Pure Virtual Function
#include <iostream>
#include <cmath>
using namespace std;
class Shapes
{
    public:
    virtual void Properties() = 0;
};
class Circle: public Shapes
{
    public:
        int radius;
        Circle()
        {radius = 0;}
        Circle(int r)
        {radius = r;}
        void Properties()
        {
            cout << "The Properties of the Circle are : " << endl;
            cout << "The diameter of the Circle is : " << 2 * radius << endl;
            double area = 3.14 * radius * radius;
            cout << "The Area of the Circle is : " << area << endl;
            double peri = 2 * 3.14 * radius;
            cout << "The Perimeter of the Circle is : " << peri << endl;
        }
};
class Rectangle: public Circle
{
    public:
        int length, breadth;
        Rectangle(int l, int b)
        {length = l; breadth = b;}
        void Properties()
        {
            cout << "The Properties of the Rectangle are : " << endl;
            double diagonal = sqrt((length * length) + (breadth * breadth));
            cout << "The Length of the Diagonal is : " << diagonal << endl;
            double area = length * breadth;
            cout << "The Area of the Rectangle is : " << area << endl;
            cout << "The Perimeter of the Rectangle is : " << 2 * (length + breadth) << endl;
        }
};
int main()
{
    Shapes *shapes;
    Circle circle(10);
    Rectangle rectangle(3, 4);
    shapes = &circle;
    shapes -> Properties();
    shapes = &rectangle;
    shapes -> Properties();
    return 0;
}