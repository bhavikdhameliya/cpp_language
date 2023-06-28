//1,4,9,16......n
#include<iostream>
using namespace std;
int main()
{
     int limit,count;
     cout<<"enter limit :";
     cin>>limit;
     for(count=1;count<=limit;count++)
     {
        cout<<" "<<(count*count);
     }

}