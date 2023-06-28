//a
//b C
//d E f
//g H i J
//k L m N o

#include<iostream>
using namespace std;
int main()
{
    char i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {   
            a++;
            if(j%2==0)
            {
            cout<<" "<<char(a+95);
            }
            else
            {
                cout<<" "<<char(a+63);
            }
        }
        cout<<"\n";
    }

}





