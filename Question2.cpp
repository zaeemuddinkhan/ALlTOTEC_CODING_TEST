//2. Function "IsNumeric" to check whether the given string is numeric:

#include <iostream>

using namespace std;

bool isNumeric(string str) {
    for (char c : str) {
        if (isdigit(c)) {
            return true;  
        }
    }
    return false;  
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isNumeric(input)) {
        cout << "The string is numeric." << endl;
    } else {
        cout << "The string is not numeric." << endl;
    }

    return 0;
}
