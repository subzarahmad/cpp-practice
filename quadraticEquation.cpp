#include <iostream>
#include <cmath>
using namespace std;
//function to culculate discriminant
double getDiscriminant(double a, double b, double c){
    return (b * b) - (4 * a * c);
}
//function to solve quadratic equation
void solveQuadratic(double a, double b, double c){
    double D = getDiscriminant(a, b, c);

    cout << "Discriminant (D) = " << D << "\n";

    if(D > 0){
        //two distinct real roots
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
        cout << "roots are real and different: \n";
        cout << "root1 = " << root1 << endl;
        cout << "root 2 = "<< root2 << endl;
        }
        
        else if(D == 0){
               //one real  root
               double root = -b / (2 * a);
               cout << "roots are real and equal: \n";
               cout << "Root = " << root << endl;
        }

        else{
            //complex roots (imagenary)
            double realPart = -b /(2 *a );
            double imgPart = sqrt(-D) / (2 * a);
            cout << "roots are Imaginary: \n";
            cout << "root 1  = " << realPart << "+" << imgPart << "i" << endl;
            cout << "Root 2 = " << realPart << " - " << imgPart << "i" << endl;
        }
}

int main(){
    double a, b, c;
    cout << "Enter cofficient a: ";
    cin >> a;
    cout << "Enter cofficient  b : ";
    cin >> b;
    cout << "Enter cofficient c: ";
    cin >> c;
    if(a == 0){
        cout << "This is not a quadratic equation (a cannot be 0). ";

    }else{
        solveQuadratic(a,b,c);
    }
    return 0;
}