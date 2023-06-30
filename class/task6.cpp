#include<iostream>
using namespace std;
class report
{
    int i;
    int adno;
    char name[20];
    float marks[5];
    float av,total,per;
    float getavg()
    {
      for(i=0;i<5;i++)
      {
      total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
      per=total/5;
      return total;
      return per;
      }
    }
    public:
    void readinfo()
    {
      cout<<"enter admin no:";
      cin>>adno;
      cout<<"enter nmae:";
      cin>>name;
      for(i=0;i<5;i++)
    {
     cout<<"enter marks:";
     cin>>marks[i];
    }
    av=getavg();
    }
    void display()
    {
      cout<<"admin no:"<<adno<<endl;
      cout<<"name:"<<name<<endl;
      for(i=0;i<5;i++)
      {
        cout<<"marks:"<<marks[i]<<endl;
      }
      cout<<"avra:"<<av<<endl;
      cout<<"per:"<<per<<endl;
    }
};
int main()
{
  report r;
  r.readinfo();
  r.display();
}