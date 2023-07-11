//squre and cube


#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void getN()
    {
        cout << "Enter an integer number: ";
        cin >> num;
    }
   
    int retn()
    {
        return num;
    }
};
class Square : public Number {
public:
    int getS()
    {
        int num, sqr;
        num = retn(); 
        sqr = num * num;
        return sqr;
    }
};
class Cube : public Number {
private:
public:
    int getC()
    {
        int num, cube;
        num = retn(); 
        cube = num * num * num;
        return cube;
    }
};
int main()
{
    Square S;
    Cube C;
    int sqr, cube;

    S.getN();
    sqr = S.getS();
    cout << "Square of  is: " << sqr << endl;

    C.getN();
    cube = C.getC();
    cout << "Cube  of is: " << cube << endl;

    return 0;
}