#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter a character";
    cin >> ch;
     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z')){
        cout << ch <<"  is a alphabit ";
     }else if(ch >= '0' && ch <= '9'){
        cout << ch << "is a digit";
     }else{
        cout << ch << "is a special character";
     }
}