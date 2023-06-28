//0.5,1,2.5.....n
#include<iostream>
using namespace std;
int main()
{
    float i,n,j=0.5;
    cout<<"enter n";
    cin>>n;
    for(i=0.5;i<=n;i++)
    {
        j+=i*1;
        cout<<" "<<i;
    }
}

