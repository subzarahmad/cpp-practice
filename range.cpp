#include <iostream>
using namespace std;

void range(int num){
    if(num < 10 && num > 100 ){
        cout << "number is not in range between 10 - 100";
    }else{
        cout << "number is in range ";
    }
}

int main(){
    int number;
    cout << "enter any number ";
    cin >> number;

    range(number);
    return 0;
}