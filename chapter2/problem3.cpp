#include <iostream>
#include <string>
using namespace std;

// STEPS:
// Read string from user input (string makes it easier to loop over value)
// Loop backwards over characters in string
// Convert character to int
// Double int and return the sum of its digits (e.g. 8*2 = 16 = 7 (1+6))
// Loop over string and detect every other character
// Combine above -> Loop over string and sum digits, double every other one
// If total sum is divisible by 10, number is valid

// prototyping
string getUsersNum();
int doubleAndSum(int num);
int ctoi(char character);
int sumDigits(string num);
bool ccNumIsValid(int num);

int main() {
    string ccNum = getUsersNum();
    int sum = sumDigits(ccNum);
    if (ccNumIsValid(sum)) {
        cout << "Credit card number is valid";
    } else {
        cout << "Credit card number is invalid";
    }
    return 0;
}

string getUsersNum() {
    string ccNum;
    cout << "Type your credit card number: ";
    cin >> ccNum;
    return ccNum;
}

int doubleAndSum(int num) {
    int doubled = num * 2;
    if (doubled < 10) return doubled;
    return (1 + (doubled - 10));
}

int ctoi(char character) { return character - '0'; }

int sumDigits(string num) {
    int sum = 0;
    int evenTracker = 1;
    for (size_t i = num.length(); i--;) {
        if (evenTracker % 2 == 0) {
            int digit = ctoi(num[i]);
            sum += doubleAndSum(digit);
        } else {
            sum += ctoi(num[i]);
        }
        evenTracker++;
    }
    return sum;
}

bool ccNumIsValid(int num) { return num % 10 == 0; }