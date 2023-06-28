//1
//0 1
//0 1 0
//1 0 1 0
//1 0 1 0 1


#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" "<<a%2;
            a++;
        }
        cout<<"\n";
    }

}