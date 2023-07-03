// solid shape volume fine out .............
#include<iostream>
using namespace std;
class test
{
    int m;
    public:
    test()
    {
        cout <<"defult construtor auto call..."<<endl;
    }
    ~test()
    {
        cout<<"destrructor auto when object work end(destore to object)is call...."<<endl;
    }
    test(int a)
    {
        cout<<"paramererized construtor is called...a:"<<a<<endl;
    }
    test(char a)
    {
        cout<<"char value of a is"<<a<<endl;
    }
};
int main()
{
    test t,a=21,b('3');
}