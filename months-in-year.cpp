#include <iostream>
using namespace std;
int main(){
    int month;
    cout << "enter any month:";
    cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
        cout << month << "has 31 days";
    }else if ( month == 4 || month == 6 || month == 9 || month == 11 ){
        cout << month << "has 30 days";
    }else if (month == 2 ){
        cout << month << "has 28 or 29 days";
    }else{
        cout << "invalid month";
    }
}