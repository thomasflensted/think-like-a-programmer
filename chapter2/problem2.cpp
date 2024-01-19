#include <iostream>
using namespace std;

// STEP 1: Print a rectangle of 4x7
void printRectangle(int num) {
    for (int i = 0; i <= num + 2; i++) {
        for (int j = 0; j < num; j++) {
            cout << "# ";
        }
        cout << "\n";
    }
}

// STEP 2: Come up with an expression that returns the values 1,2,3,4,3,2,1
// First loop: val = 4 - abs(4 - 1) = 4 - 3 = 1
// Middle loop: val = 4 - abs(4 - 4) = 4 - 0 = 4
// Last loop: val = 4 - abs(4 - 7) = 4 - 3 = 1
void numExpression(int num) {
    for (int i = 1; i <= num; i++) {
        int val = 4 - abs(4 - i);
        cout << val << " ";
    }
}

// STEP 3: Combine the two functions to print the shape
void printShape(int num) {
    for (int i = 1; i <= num; i++) {
        int val = 4 - abs(4 - i);
        for (int j = 1; j <= val; j++) {
            cout << "# ";
        }
        cout << "\n";
    }
}

int main() {
    int num = 7;
    // printRectangle(num);
    // numExpression(num);
    printShape(num);
    return 0;
}