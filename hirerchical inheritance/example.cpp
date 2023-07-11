#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void getNumber()
    {
        cout << "Enter an integer number: ";
        cin >> num;
    }
   
    int returnNumber()
    {
        return num;
    }
};


class Square : public Number {
public:
    int getSquare()
    {
        int num, sqr;
        num = returnNumber(); 
        sqr = num * num;
        return sqr;
    }
};

class Cube : public Number {
private:
public:
    int getCube()
    {
        int num, cube;
        num = returnNumber(); 
        cube = num * num * num;
        return cube;
    }
};

int main()
{
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.getNumber();
    sqr = objS.getSquare();
    cout << "Square of " << objS.returnNumber() << " is: " << sqr << endl;

    objC.getNumber();
    cube = objC.getCube();
    cout << "Cube   of " << objS.returnNumber() << " is: " << cube << endl;

    return 0;
}