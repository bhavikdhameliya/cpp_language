// define a class student with the foollowing specification.
//1

#include<iostream>
using namespace std;
class student
{
    
    int adminno;
    char sname[20];
    float eng,sp,ba,total;
    float ctotal(){
        return eng+sp+ba;
    } 
     
     public:
     void takedata(){
        cout<<"enter admin no:";
        cin>>adminno;
        cout<<"enter name:";
        cin>>sname;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<" enter sp marks:";
        cin>>sp;
        cout<<"enter ba marks:";
        cin>>ba;
        total=ctotal();
    }
    void showdata(){
        cout<<"admin no:"<<adminno<<endl;
        cout<<"name :"<<sname<<endl;
        cout<<"eng marks:"<<eng<<endl;
        cout<<"sp marks :"<<sp<<endl;
        cout<<" ba :"<<ba<<endl;
        cout<<"total marks:"<<total<<endl;
    }

};
int main()
{
    student s;
    s.takedata();
    s.showdata();

}

