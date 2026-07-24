#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    } else {
        cout << "The character is not a letter." << endl;
    }
    return 0;
}