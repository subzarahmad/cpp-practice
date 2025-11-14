#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter any number to check weather it is divisible by 7 or 3 or not";
    cin >> num;
    if(num % 3 == 0 && num % 7 == 0 ){
        cout << num <<"is divisible by both";
    }else if(num % 3 ==0 ){
        cout << num << "is divisible by 3";
    }else if (num % 7 == 0){
        cout << num << "is divisible by 7";
    }else{
        cout  << "num is not divisible by 7 nor 3";
    }
}