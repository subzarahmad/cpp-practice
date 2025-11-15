#include <iostream>
using namespace std;
//function for checking prime number
bool isPrime(int n) {
    if( n <= 1) return false;
    for(int i = 2; i <= n /2 ; i++){
        if (n % i == 0) return false;
    }
    return true;
}
// function for compute factorial
long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n ; i++){
        fact *= i;
    }
    return fact;
}
//function to print fibonacci series
void fibonacci(int n){
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++){
        cout << a <<" ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main(){
    int choice, num;
    cout << "Menu \n";
    cout << "1: check prime number \n";
    cout << "2: factorial \n";
    cout << "3: fibonacci series \n";
    cout << "enter your choice \n";
    cin >> choice;
    switch (choice){
        case 1: 
              cout << "Enter a number : ";
              cin >> num;
              if(isPrime(num))
               cout << num << "is a prime number.";
               else 
               cout << num << "is not a prime number";
               break;
        case 2: 
              cout << "enter a number: ";
              cin >> num;
              cout << "factorial of " << num << " = " << factorial(num) ;
              break;
        case 3: 
              cout << "Enter number of terms: "  ;
              cin >> num;
              fibonacci(num);
              break;
        default: 
              cout << "Invalid choice";       
    }
    return 0;
}