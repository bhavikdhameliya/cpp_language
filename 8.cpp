//total even 2,4,6
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=2;i<=10;i=i+2)
    {
        cout<<i;
        total += i;
        
    }
    cout<<" "<<total;
    
}
