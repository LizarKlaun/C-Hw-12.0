#include <iostream>

using namespace std;

struct Square {
private:
    int side;
public:
    Square() {
        side = 5;
    }

    Square(int side) {
        this->side = side;
    }

    void AssignInfo(int side) {
        this->side = side;
    }

    void PrintInfoAboutVarialables() {
        cout << "Square has side with size: " << side << endl;
    }

    void PrintArea() {
        cout << "Area of square: " << side * side << endl;
    }

    void PrintPerimeter() {
        cout << "Perimeter of square: " << side * 4 << endl;
    }
};

struct Rombus {
private:
    int diagonal;
    int height;
public:
    Rombus() {
        diagonal = 5;
        height = 5;
    }

    Rombus(int diagonal1, int diagonal2) {
        this->diagonal = diagonal1;
        this->height = diagonal2;
    }

    void AssignInfo(int diagonal1, int diagonal2) {
        this->diagonal = diagonal1;
        this->height = diagonal2;
    }

    void PrintInfoAboutVarialables() {
        cout << "Diagonal: " << diagonal << "\nHeight: " << height << endl;
    }

    void PrintArea() {
        cout << "Area of rombus: " << diagonal * height << endl;
    }

    void PrintPerimeter() {
        cout << "Perimeter of rombus: " << diagonal * 4 << endl;
    }
};

struct Rectangle {
private:
    int side1;
    int side2;
public:
    Rectangle() {
        side1 = 3;
        side2 = 9;
    }

    Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    void AssignInfo(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    void PrintInfoAboutVarialables() {
        cout << "Side1: " << side1 << "\nSide2: " << side2 << endl;
    }

    void PrintArea() {
        cout << "Area of rectangle: " << side1 * side2 << endl;
    }

    void PrintPerimeter() {
        cout << "Perimeter of rectangle: " << (side1 + side2) * 2 << endl;
    }
};

struct Trapeze {
private:
    int height;
    int middleLine;
    int side1;
    int side2;
    int side3;
    int side4;
public:
    Trapeze() {
        height = 7;
        middleLine = 8;
        side1 = 4;
        side2 = 6;
        side3 = 6;
        side4 = 8;
    }

    Trapeze(int height, int middleLine, int side1, int side2, int side3, int side4) {
        this->height = height;
        this->middleLine = middleLine;
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
        this->side4 = side4;

    }

    void AssignInfo(int height, int middleLine, int side1, int side2, int side3, int side4) {
        this->height = height;
        this->middleLine = middleLine;
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
        this->side4 = side4;
    }

    void PrintInfoAboutVarialables() {
        cout << "Height: " << height << "\nMiddle line: " << middleLine << endl;
        cout << "Side1: " << side1 << " Side2: " << side2 << " Side3: " << side3 << "Side4: " << side4;
    }

    void PrintArea() {
        cout << "Area of trapeze: " << height * middleLine << endl;
    }

    void PrintPerimeter() {
        cout << "Perimeter of trapeze: " << side1 + side2 + side3 + side4 << endl;
    }
};

int main()
{

    Square squareObj;
    Square squareObj2 = Square(7);
    cout << "Square: " << endl;
    squareObj.PrintInfoAboutVarialables();
    squareObj2.PrintInfoAboutVarialables();
    squareObj.AssignInfo(10);
    squareObj.PrintInfoAboutVarialables();
    squareObj.PrintArea();
    squareObj.PrintPerimeter();
    cout << "-----------------" << endl;

    Rombus rombusObj;
    Rombus rombusObj2 = Rombus(7, 7);
    cout << "Rombus: " << endl;
    rombusObj.PrintInfoAboutVarialables();
    rombusObj2.PrintInfoAboutVarialables();
    rombusObj.AssignInfo(10, 10);
    rombusObj.PrintInfoAboutVarialables();
    rombusObj.PrintArea();
    rombusObj.PrintPerimeter();
    cout << "-----------------" << endl;

    Rectangle rectangleObj;
    Rectangle rectangleObj2 = Rectangle(7, 9);
    cout << "Rectangle: " << endl;
    rectangleObj.PrintInfoAboutVarialables();
    rectangleObj2.PrintInfoAboutVarialables();
    rectangleObj.AssignInfo(10, 13);
    rectangleObj.PrintInfoAboutVarialables();
    rectangleObj.PrintArea();
    rectangleObj.PrintPerimeter();
    cout << "-----------------" << endl;
    Trapeze trapezeObj;
    Trapeze trapezeObj2 = Trapeze(7, 9, 8, 7, 8, 9);
    cout << "Rectangle: " << endl;
    trapezeObj.PrintInfoAboutVarialables();
    trapezeObj2.PrintInfoAboutVarialables();
    trapezeObj.AssignInfo(7, 9, 8, 7, 8, 9);
    trapezeObj.PrintInfoAboutVarialables();
    trapezeObj.PrintArea();
    trapezeObj.PrintPerimeter();
    cout << "-----------------" << endl;
}