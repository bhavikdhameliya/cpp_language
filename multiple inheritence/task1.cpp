#include<iostream>
using namespace std;
class a
{
    protected:
    int n;
    public:
    void seta()
    {
        cout<<"enter value of n:";
        cin>>n;
    }
    };
    class b : public a
    {
        protected:
        int i,j;
    };
    class derived : public b{
        public:
        void setb()
        {
            for(i=1;i<=10;i++)
            {
                j=n*i;
                cout<<n<<" * "<<i<<" = "<<j<<endl;
            }
        }
    };
    int main()
    {
        derived x;
        x.seta();
        x.setb();
    }