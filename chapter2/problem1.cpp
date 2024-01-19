#include <iostream>
using namespace std;

// break the problem into smaller problems:

// Step 1: Print a line of hashes:
void printLine(int num) {
    for (int i = 0; i < num; i++) {
        cout << "# ";
    }
    cout << "\n";
}

// Step 2: Print a square of hashes by repeating the line 5 times:
void printSquare(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << "# ";
        }
        cout << "\n";
    }
}

// Problem: The second for-loop prints the same number of hashes on each run, so
// it needs to be modified to print one less hash on each run.

// Step 3: Write a for loop that goes from 0 to n (positive int) but prints
// values in the oppsite order, i.e. starts at n and ends at 5
void countDown(int num) {
    // print num - i on each run, i.e. 5 (5-0) on the first run, 4 (5-1) on the
    // second run, etc.
    for (int i = 0; i < num; i++) {
        cout << num - i << "\n";
    }
}

// Step 4: combine the steps to print a half sqaure
void printHalfSquare(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << "# ";
        }
        cout << "\n";
    }
}

int main() {
    int num = 5;
    // printLine(num);
    // printSquare(num);
    // countDown(num);
    printHalfSquare(num);
}