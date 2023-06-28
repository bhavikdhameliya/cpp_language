
#include<iostream>
using namespace std;
class text
{
    int testcode;
    char des[20];
    int  noca;
    int center;
    float CALCNTER()
    {
      return noca/100+1;
    }
    public:
    void schedule()
    {
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"ebnter discription:";
        cin>>des;
        cout<<"enter nocandidate:";
        cin>>noca;
        center=CALCNTER();
    }
    void disptest()
    {
        cout<<"\n";
        cout<<"estcode:"<<testcode<<endl;
        cout<<"discription:"<<des<<endl;
        cout<<"nocandidate:"<<noca<<endl;
        cout<<"centerred:"<<center<<endl;
    }
};
int main()
{
    text t;
    t.schedule();
    t.disptest();

}