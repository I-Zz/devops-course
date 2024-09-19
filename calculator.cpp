#include <bits/stdc++.h>
using namespace std;
// author @21bds066
int addFunc(int a, int b){
    return a+b;
}

// author @21bds008
int subtract(int a, int b){
    return a-b;
}

// author @21bds063
int Multi(int a, int b){
    return a*b;
}

// author @21bec045
int expo(int a, int b){
    return a^b;
}

// author @21bds004
inline int divide (int numerator, int denominator) {
    if (denominator == 0)
        throw overflow_error("Divide by zero exception");
    return numerator / denominator;
}

// author @21bds013
long long powFunc(int x, int n){
    return pow(x, n);
}

//author @21bds011
int modf(int a,int b){
    return a%b;
}

// author 21bec044
int squareSum(int a, int b){
    return a*a + b*b;
}


int main(){

// author @21bds022
    int a, b;
    int choice;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Select the operation to perform:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Exponentiate (a ^ b)\n";
    cout << "5. Divide\n";
    cout << "6. Power (a^b)\n";
    cout << "7. Modulus\n";
    cout << "8. Square Sum\n";
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    try {
        switch (choice) {
            case 1:
                cout << "Result: " << addFunc(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << Multi(a, b) << endl;
                break;
            case 4:
                cout << "Result: " << expo(a, b) << " (Note: This is bitwise XOR, not exponentiation)" << endl;
                break;
            case 5:
                cout << "Result: " << divide(a, b) << endl;
                break;
            case 6:
                cout << "Result: " << powFunc(a, b) << endl;
                break;
            case 7:
                cout << "Result: " << modf(a, b) << endl;
                break;
            case 8:
                cout << "Result: " << squareSum(a, b) << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }



    return 0;
}