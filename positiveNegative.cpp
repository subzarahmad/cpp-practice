#include <iostream>
using namespace std;

//function for check if a number is  positive or negative
void checkNumber(int num){
    if (num > 0){
        cout << num << "is a positve number";
    }else if (num < 0){
         cout << num << "is a negative number";
    }
           
    else {
        cout << "num is Zero";
    }
}

int main(){
    int number;
    cout << "enter a number";
    cin >> number;
    checkNumber(number); //calling function
    return 0;
}