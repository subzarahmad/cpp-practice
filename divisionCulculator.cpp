#include <iostream>
using namespace std;
int main(){
    int choice;
    double num1, num2, result;
    cout << "division culculator\n";
    cout << "press 1 : for division for two numbers \n";
    cout << "press 2 : find reminder (modulus)\n";
    cout << "enter your choice \n";
    cin >> choice;
    switch(choice){
        case 1: 
              cout << "enter two numbers you want to divide";
              cin >> num1 >> num2;
              if(num2 == 0){
                cout << "Error: division by 0 is not allowed";
              }else{
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << "=" << result;
              }
              break;
        case 2: 
             cout << "enter two numbers: " ;
             cin >> num1 >> num2;
             if(num2 == 0){
                cout << "Error: Modulus by 0 is not allowed";
                
             }else{
                result = (int)num1 % (int)num2;
                cout << "Remainder: " << (int)num1 << " %" << (int)num2 << " = " << result;
             }
             break;
       default:
            cout << "Invalid choice";      

    }
    return 0;
}