#include<iostream>
using namespace std;
class BOOK
{
  int n;
  int bon;
  char bt[20];
  float p;
  float cost;
  float TOTAL_COST(int n)
  {
    return n*p;
  }
  public:
  void INPUT()
  {
    cout<<"enter book no:";
    cin>>bon;
    cout<<"enter book title:";
    cin>>bt;
    cout<<"enter price:";
    cin>>p;
  }
  void PURCHASE()
  {
    cout<<"enter number of book:";
    cin>>n;
    cout<<"BOOK NO:"<<bon<<endl;
    cout<<"book title:"<<bt<<endl;
    cout<<"price:"<<p<<endl;
    cost==TOTAL_COST(n);
    cout<<"total prize:"<<cost;
  }

};
int main()
{
    BOOK b;
    b.INPUT();
    b.PURCHASE();

}