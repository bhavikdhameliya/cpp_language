//resturnt
#include<iostream>
#include<string.h>
using namespace std;

class Restaurant
{
     protected:
   string name, contact;
    public:
     void get_info()
     {
          cout<<"\n\t\t ========= COBRA VILAA     ========= \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
     }
       void show_info()
     {
          cout<<"\n\t Name : "<<name<<endl;
          cout<<"\n\t Contact Number : "<<contact<<endl;
     }
};

class Show_bill : public Restaurant
{
    protected :   

      double  GST  ,  disc , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty;
      string items[5];

     public :


      int item1()
      {
         cout<<"\n \tEnter  : ";cin>>quty;
         items[0] = "pav bhaji";

         return Bill = Bill + quty*780;
      }

      int item2()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
         items[1] = "pizza";
         return Bill = Bill + quty*650;
      }

      int item3()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[2] = " ice cream";
         return Bill = Bill + quty*1800;
      }

      int item4()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[3] = "panjabi";
         return Bill = Bill + quty*2400;
      }

      int item5()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[4] = "gujrati dish";
         return Bill = Bill + quty*1500;
      }


      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_disc()
      {
         if (bill_amt >  5000 )
        {
            return disc = ( bill_amt * 10 ) / 100; 
        }

        else 
        {
            return disc = 0;
        }
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - disc ;
      }
   

      void Show_Net_Bill()
      {
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
              cout<<"\n\t Items Bought     : "<<endl;
        for (int i = 0; i < 5; i++)
        {
            if (!items[i].empty())
                cout<<"\n\t\t "<<i + 1<<". "<<items[i]<<endl;
        }
      }

};


int main ()
{

     Show_bill J ;
     

        J.get_info();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1]pav bhaji : RS. 780 /- "; 
        cout<<" \n \t\t\t [2] pizza: RS. 650 /- "; 
        cout<<" \n \t\t\t [3] ice cream : RS. 1800 /- "; 
        cout<<" \n \t\t\t [4] panjabi  : RS. 2400 /- "; 
        cout<<" \n \t\t\t [5]  gujrati dish : RS. 1500 /- \n";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int i;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             J.item1();
             cout<<" \n \t\t\t [1]pav bhaji     : RS. 780 \n";
            break;
        case 2: 
             J.item2();
                 cout<<" \n \t\t\t [2]pizza     : RS. 650 \n";
            break;
        case 3: 
             J.item3();
                 cout<<" \n \t\t\t [3]ice cream : RS. 1800 \n";
            break;
        case 4: 
             J.item4();
             cout<<" \n \t\t\t [4]panjabi       : RS. 2400\n";
            break;
        case 5: 
            J.item5();
              cout<<" \n \t\t\t [5]gujrati dish : RS. 1500 \n";
            break;

        case 0: 
          break;
        }

} while (i!=0);


            J.show_info();
            J.Show_Net_Bill();

}