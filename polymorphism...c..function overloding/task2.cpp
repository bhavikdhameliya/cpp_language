//solid shape volume find out.........

#include<iostream>
using namespace std;
class volum
{
    public:
    int work(int a)
    {
     cout<<"volume of cube:"<<a*a*a<<endl;
    }
    int work(int a,int b,int h)
    {
     cout<<"volume ofcubiod:"<<a*b*h<<endl;
    }
    int work(double r,double h)
    {
        cout<<"volume of cone:"<<3.14*r*r/3<<endl;
    }
     int work (int r,int h)
     {
        cout<<"volume of culinder :"<<3.14*r*r*h<<endl;
     }
};
int main()
{
    volum t;
    t.work(5);
    t.work(4,5,6);
    t.work(4.5,8.5);
}