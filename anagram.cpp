#include<bits/stdc++.h>
using namespace std;
void f(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]);
        f(str, left + 1, right);
        swap(str[left], str[i]);
    }
}


int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    cout << "All anagrams of " << input << " are:" << endl;
    f(input,0,input.length()-1);
    return 0;
}

