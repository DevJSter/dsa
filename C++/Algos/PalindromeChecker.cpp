#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

void explainPalindrome(string str) {
    cout << "The entered string is a palindrome." << endl;
    
    for (size_t i = 0; i < str.length(); ++i) {
        cout << "Position " << i + 1 << ": '" << str[i] << "' vs '" << str[str.length() - 1 - i] << "'" << endl;
    }
}

void explainMismatch(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    cout << "The entered string is not a palindrome." << endl;
    
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] != reversed[i]) {
            cout << "Mismatch at position " << i + 1 << ": '" << str[i] << "' vs '" << reversed[i] << "'" << endl;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        explainPalindrome(input);
    } else {
        explainMismatch(input);
    }

    return 0;
}