#include<iostream>
using namespace std;
class base
{
	protected:
		int n;
        
};
class drived:public base
{
	public:
    void getn ()

		{
			cout<<"enter the number :"<<endl;
			cin>>n;
			for(int i=0; i<=n; i++)
			{
				cout<<" squre of  is : "<<(i*i)<<endl;
			}
		}
};
int main()
{
    drived b;
    b.getn();
 
}