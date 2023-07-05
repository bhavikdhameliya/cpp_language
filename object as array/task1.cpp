//result.........

#include<iostream>
using namespace std;
class test
{
    private:
    int  maths,eng,guj,total; 
    float pr; 
    public:
    void setdata()
    {
    cout<<"enter maths marks :";
    cin>>maths;
    cout<<"enter eng marks :";
    cin>>eng;
    cout<<"enter guj marks :";
    cin>>guj;
       total=maths+eng+guj;
       pr=total/3;
    }
    void getdata()
    {
        cout<<"maths :"<<maths<<endl;
         cout<<"eng :"<<eng<<endl;
          cout<<"guj :"<<guj<<endl;
           cout<<"total :"<<total<<endl;
            cout<<"maths :"<<maths<<endl;
             cout<<"pr is :"<<pr;

    }

};
int main()
{   
    test a[5];
    int i;
    for(i=0;i<2;i++)
    {
        a[i].setdata();
    }
    for(i=0;i<2;i++)
    {
        a[i].getdata();
    }
    
}



