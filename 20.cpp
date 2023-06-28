//A
//AB
//ABC
//ABCD
//ABCDE

#include<iostream>
using namespace std;
int main()
{
    char i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

}