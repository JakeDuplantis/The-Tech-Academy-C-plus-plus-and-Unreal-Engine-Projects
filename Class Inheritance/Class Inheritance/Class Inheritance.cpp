
#include <iostream>
using namespace std;

const double PI = 3.14159;

//parent class
class Shape
{
public:
    string Color;

    virtual double getArea() = 0;

    virtual ~Shape() {} //destructor
};


//child classes
class Rectangle : public Shape
{
    double width;
    double height;
public:
    //construtors take parameters then initialize data members
    Rectangle(double widthParam, double heightParam) : width(widthParam), height(heightParam) {} 
    double getArea() 
    {       
        return width * height;
    }
};

class Triangle : public Shape
{
    double base;
    double height;
public:
    Triangle(double baseParam, double heightParam) : base(baseParam), height(heightParam) {}
    double getArea() 
    {
        return 0.5 * base * height;
    }
};

class Circle : public Shape
{
    double radius;
public:
    Circle(double radiusParam) : radius(radiusParam) {} 
    double getArea() 
    {
        return 2 * PI * radius;
    }
};



int main()
{
    //creat objects, pass numbers as arguments, assign a color
    Rectangle rectangle1(4, 4);
    rectangle1.Color = "red";

    Triangle triangle1(5, 6);
    triangle1.Color = "blue";

    Circle circle1(3);
    circle1.Color = "yellow";

    //print to console
    cout << "rectangle area is " << rectangle1.getArea() << " and color is " << rectangle1.Color << "\n";
    cout << "triangle area is " << triangle1.getArea() << " and color is " << triangle1.Color <<"\n";
    cout << "circle area is " << circle1.getArea() << " and color is " << circle1.Color <<"\n";

    return 0;
}


