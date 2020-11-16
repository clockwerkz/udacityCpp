// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare a class Rectangle
class Rectangle;

// Define class Square as friend of Rectangle
class Square {
    public:
        Square(int s) : side(s) {}
        friend class Rectangle;
    private:
        int side;
};

// Define class Rectangle
class Rectangle {
    public:
        Rectangle(Square *sq);
        int Area();
    private:
        int width;
        int height;
};

Rectangle::Rectangle(Square *sq) : width(sq->side), height(sq->side) {}

int Rectangle::Area() {
    return width * height;
}

int main()
{
    Square square = Square(4);
    Square *square_ptr = &square; //using pointers instead
    Rectangle rectangle(square_ptr);
    assert(rectangle.Area() == 16); 
}
