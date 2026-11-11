#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int i = s.length() - 1;
    int count = 0;

    // Ignore spaces from the end
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count last word characters
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    cout << "Length of last word: " << count;

    return 0;
}