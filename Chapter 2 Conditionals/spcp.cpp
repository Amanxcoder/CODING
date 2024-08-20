#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter The Cost Price  :  ";
     cin >> cp;
    int sp;
    cout << "Enter The Selling Price  :  ";
    cin >>sp;

   {
    if (sp>cp) cout<<" The Shopkeeper Made Profit of :  "<<sp-cp;
     
    }

   { 
    if (sp<cp) cout<< " The Shopkeeper Made Loss of  :  "<<cp-sp ;  
    
    }
    if (sp==cp) cout<< " The Shopkeeper has no profit & no loss";

}