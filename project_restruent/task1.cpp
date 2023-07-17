//mmm
#include <iostream>
using namespace std;

int main() {

   const double TAX_RATE = 0.06;
   double mealCost=0, taxAmount=0, totalCost=0, discount=0,grandtotal=0;
   int choice = 0;
   char n[20];
   int m;

   cout<<"\nWelcome to the COBRA VILAA " << endl;
   cout<<"\nEnter your name : ";
   cin>>n;
   cout<<"Enter your mobile no. : ";
   cin>>m;
   cout<<"\n-------------------------MENU-------------------------"<<endl;
   cout<<"1. PANEER TIKA - 500 \t 4.  ROTLI- 13" << endl;
   cout<<"2. KAJU KARI - 500 \t\t 5.  CHAS- 20" << endl;
   cout<<"3. SALAD - 50 \t\t 6.  PAPAD- 15" << endl;
   cout<<"7. Exit" << endl;

   do {
      cout <<"Select items from 1 to 7: ";
      cin >> choice;

      switch (choice) {
         case 1:
            mealCost += 500;
            cout<<"PNEER TIKA\t";
            break;
         case 2:
            cout<<"KAJU KARI\t\t";
            mealCost += 500;
            break;
         case 3:
            mealCost += 50;
            cout<<"SALAD\t\t";
            break;
         case 4:
            mealCost += 13;
            cout<<"ROTLI\t\t";
            break;
         case 5:
            mealCost += 20;
            cout<<"CHAS\t\t";
            break;
         case 6:
            mealCost += 15;
            cout<<"PAPAD\t\t";
            break;
        case 7:
            break;
         default:
            cout<<"Invalid choice. Please try again." << endl;
            break;
      }
   } while(choice != 7);



   taxAmount = mealCost * TAX_RATE;
   totalCost = mealCost + taxAmount;
 
   cout << "\nCustomer name : "<<n<<endl;
   cout << "Customer mobile no. : "<<m<<endl;
   cout << "Cost of Meal: " << mealCost << endl;
   cout << "Tax Amount: " << taxAmount << endl;
   cout << "Total Cost: " << totalCost << endl;

   if(totalCost>300)
      {
         cout<<"\nCongrats! You'll get 10% discount";
         discount = (totalCost*10)/100;
         grandtotal = totalCost-discount;
      }
     
     cout<<"\nDiscount is :__________________ "<<discount << endl;
     cout<<"Your total with discount is : "<<grandtotal << endl;

 return 0;
}
