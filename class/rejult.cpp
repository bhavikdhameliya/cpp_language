#include<iostream>
using namespace std;
class result
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
    }
    void claculation()
    {
       total=maths+eng+guj;
       pr=float(total)/300*100;
    }
    void printe()
    {
        cout<<"total is :"<<total<<endl;
        cout<<"pr is :"<<pr;

    }
    cout<<" "<<pr;
    if(pr>75)
    {
        
    }
};
int main()
{
    result x;
    x.setdata();
    x.claculation();
    x.printe();
}



