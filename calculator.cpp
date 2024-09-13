#include <bits/stdc++.h>
using namespace std;

// author @21bds022
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

// author @21bds004
inline int divide (int numerator, int denominator) {
    if (denominator == 0)
        throw std::overflow_error("Divide by zero exception");
    return numerator / denominator;
}

// author @21bds013
long long pow(int n, int x){
    return pow(n, x);
}


int main(){

// author @21bds066
     int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Addition: " << addFunc(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << Multi(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;

    return 0;
}

// author 21bec044
int divide(int a, int b){
    return a/b;
}
