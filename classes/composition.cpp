#include <iostream>
#include <cmath>
#include <assert.h>


#define PI 3.14159;

class LineSegment {
    public:
        LineSegment(int len) : length(len) {}
        int length;
};  

class Circle {
    public:
        Circle(LineSegment &seg) : radius(seg) { CalculateArea(); }
        int Area() { return radius.length * radius.length * PI; }
    private:    
        LineSegment &radius;
        float area;
        void CalculateArea() 
};

// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.Area()) == 28);
}