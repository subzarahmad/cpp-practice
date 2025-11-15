#include <iostream>
using namespace std;
int main(){
    float num1 , num2;
    cout << "enter two numbers to check which is greater";
    cin >> num1 >> num2;
    if(num1 < num2){
        cout << num2 << "is greater than" << num1;
    }else{
        cout << num1 << "is greater than " << num2;
    }
}
