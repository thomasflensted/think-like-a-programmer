#include <iostream>
using namespace std;

// STEP 1: HANDLE double digit values (sum the two digits)
int getSum(int num) {
    int doubled = num * 2;
    if (doubled < 10) return doubled;
    return 1 + doubled % 10;
}

int convertCharToInt(char character) { return character - '0'; }

void takeDigitAsChar() {
    cout << "Type a number between 1 and 9:\n";
    char digit;
    cin >> digit;
    int num = convertCharToInt(digit);
    cout << "The number is: " << num;
}

int main() {
    // getSum()
    takeDigitAsChar();
    return 0;
}