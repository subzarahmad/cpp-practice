#include <iostream>
using namespace std;
//function to check vowels using switch
void checkVowel( char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                  cout << ch << "is a vowel.";
                  break;
        default:
                cout << ch << "is not a vowel";      
    }
}

int main(){
    char ch;
    cout << "Enterr any alphabet : ";
    cin >> ch;

    checkVowel(ch); //function call
    return 0;
}