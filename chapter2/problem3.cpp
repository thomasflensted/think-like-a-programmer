#include <iostream>
#include <string>
using namespace std;

// STEPS:
// Take a number 0-9, double it and return the sum of its digits
// convert char to int
// read number from user of fixed length and sum the the digitis with doubling
//

// STEP 1: double number and return sum of its digits
int doubleAndSum(int num) {
    int doubled = num * 2;
    if (doubled < 10) return doubled;
    return (1 + (doubled - 10));
}

// STEP 2: convert char to int
int ctoi(char character) { return character - '0'; }

// STEP 3: Sum each digit of a number
/*int sumDigits(string num) {
    int sum = 0;
    for (size_t i = 0; i < num.length(); i++) {
        sum += ctoi(num[i]);
    }
    return sum;
}*/

// STEP 4: sum digits, but double every other value and sum the result's digits
/*int sumDigits(string num) {
    int sum = 0;
    for (size_t i = 0; i < num.length(); i++) {
        if (i % 2 == 1) {
            int digit = ctoi(num[i]);
            sum += doubleAndSum(digit);
        } else {
            sum += ctoi(num[i]);
        }
    }
    return sum;
}*/

// STEP 5: Loop backwards
void loopBackwards(string num) {
    for (size_t i = num.length(); i--;) {
        cout << num[i];
    }
}

// STEP 6: Combine above to loop backwards and double every other digit
// use a counter to make sure every other digit is doubled regardless of string
// length (i.e. it doesn't matter if string length is even or odd)
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

// STEP 7: Check if sum is divisible by 10
bool ccNumIsValid(int num) { return num % 10 == 0; }

int main() {
    string ccNum;
    cout << "Type your credit card number: ";
    cin >> ccNum;
    int sum = sumDigits(ccNum);
    if (ccNumIsValid(sum)) {
        cout << "Credit card number is valid";
    } else {
        cout << "Credit card number is invalid";
    }
    return 0;
}

// 1 2 3 4 5 6 => 1 4 3 8 5 3 => 24