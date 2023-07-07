#include<iostream>
using namespace std;
class current_account 
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"Balance :"<<balance<<endl;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"Enter amount to Deposit :  "<<endl;
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"Balance : "<<balance<<endl<<endl;
        cout<<"Enter amount to be withdraw :"<<endl;
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"Balance Amount After Withdraw: "<<balance<<endl;
        }
        else
        {
            cout<<" Insufficient Balance"<<endl;
        }
 
    }
};
 
int main()
{
    current_account s1;

     char type;
     cout<<"Enter  s for saving  a/c customer : "<<endl;
     cin>>type;
     int choice,exit;
   
     if(type=='s' || type=='S')
    {
    
        while(1)
        {
            cout<<"Choose Your Choice"<<endl<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.c_deposit();  
                break;
            case 2 :
                s1.c_withdraw();
                break;
            case 3 :
                s1.c_display();
                break;

                cout<<"Entered choice is invalid"<<endl<<endl;
            }
        }
    }
    else
    {
        cout<<"Invalid Account Selection"<<endl;
    }
end:
    cout<<"Thank You for Banking with us.."<<endl;

}