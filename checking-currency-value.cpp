#include <iostream>
using namespace std;
 int main(){
    int choice;
    double result, amount;
    const double usd_rate  = 88.0;
    cout << "currency converter \n";
    cout << " press 1 : for indian rupees to USD \n";
    cout << "press 2 : for usd to indian rupees \n"; 
    cout << "enter you choice\n";
    cin >> choice;
    switch(choice){
        case 1 :
                cout << "enter amount in indian rupees";
                cin >> amount;
                result = amount / usd_rate;
                cout << amount <<"INR = " << result << "USD";
        break;
        case 2 :
                 cout << "enter you amount in us dollars: " ;
                 cin >> amount;
                 result = amount * usd_rate;
                 cout << amount << "USD = " << result << "INR";
        break;
        default : 
                cout << "invalid choice!!! ";      
    }
 }