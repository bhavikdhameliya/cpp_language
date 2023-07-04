//*
#include<iostream>
using namespace std;
class box
{
    public:
    int l,w,h;
    void setdata (int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    box operator*(box &n)
    {
        box t;
        t.l=l*n.l;
        t.w=l*n.w;
        t.h=l*n.h;
        return t;
    }
};
int main()
{
    box a,b,c;
    b.setdata(2,2,2);
    cout<<"box b volum is:"<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"box a volm is:"<<a.getdata()<<endl;
    c=a*b;
    cout<<"box c volum is:"<<c.getdata()<<endl;
}

