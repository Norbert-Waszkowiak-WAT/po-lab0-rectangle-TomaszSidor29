#include <iostream>

class Rectangle {
    private:

    double width;
    double hight;

    public:
    Rectangle(double w, double h){
        width = w;
        height = h;
    }
    void setWidth(double w){
        Width = w;
    }

    void setHeight(double h){
        height = h;
    }

    double getWidth() const{
        return width;
    }

    double getHeight() const{
        return height;
    }

    double area() const {
        return height * width;
    }

    double perimeter() const{
        return height * 2 + width * 2;
    }

    void display() const{
        cout << "Rectangle: " << width << "x" << height << endl; 
        cout << area() << endl;
        cout << perimeter() << endl;
    }
};