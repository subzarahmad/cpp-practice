#include <iostream>
using namespace std;
 int main(){
    int age;
    string nationality;
     cout << "Enter your age: ";
     cin >> age;
     cout << "enter your nationality: ";
     cin >> nationality;
     if(age >= 18 && (nationality == "indian" || nationality == "Indian" || nationality == "INDIAN")){
      cout << "you are eligible to vote";
     }else if(age < 18){
        cout << "you are not eligible to vote";
     }else{
        cout << "you are not eligible to vote because you are not indian citizen";
     }
     return 0;
 }