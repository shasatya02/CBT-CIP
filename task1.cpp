#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    int score = 0;

    cout << "Enter your password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    
    for (char ch : password) {
        if (isupper(ch))
            hasUpper = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (!isalnum(ch))
            hasSpecial = true;
    }


    if (password.length() >= 8)
        score++;

    if (hasUpper)
        score++;

    if (hasDigit)
        score++;

    if (hasSpecial)
        score++;

    //  result
    cout << "\nPassword Strength: ";
    if (score <= 2)
        cout << "Weak Password ";
    else if (score == 3)
        cout << "Medium Strength Password ";
    else
        cout << "Strong Password ";

    return 0;
}
