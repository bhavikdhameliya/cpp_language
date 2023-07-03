//destractor
//prectis
#include<iostream>
using namespace std;
class test
{
    int m;
    public:
    test()
    {
        cout<<"deful constractor is called.."<<endl;
        cout<<"enter m:";
        cin>>m;
    }
    ~test()
    {
        cout<<"destructor is called..."<<endl;
    }
    test(int a)
    {
        cout<<"parametrized constructor is called..a"<<a<<endl;
    }
    test(char a)
    {
        cout<<"parametrized constructor is called .. char is :a"<<endl;
    }
    void getdata()
    {
        cout<<"value of m ::"<<m<<endl;
    }

};
int main()
{
    test t,a(10);
    t.getdata();    

    
}