#include <iostream>

using namespace std;

class Shape{ // Abstract class
    public:
        virtual double getArea() const = 0; // Pure virtual function
};

class Circle: public Shape{
    private:
        double radius;
    
    public:
        Circle(double r): radius(r){}
        double getArea() const override{
            return 3.14159 * radius * radius;
        }
};

class Rectangle: public Shape{
    private:
        double length;
        double width;

    public:
        Rectangle(double len, double wid) : length(len), width(wid){}
        double getArea() const override{
            return length * width;
        }
};

int main(){
    Circle myCircle(5.0);
    Rectangle myRectangle(3.0, 4.0);

    Shape *myShape;

    myShape = &myCircle;
    cout << "Circle area --> " << myShape->getArea() << endl;
    myShape = &myRectangle;
    cout << "Rectangle area -->> " << myShape->getArea() << endl;
    
}