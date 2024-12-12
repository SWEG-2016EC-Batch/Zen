#include <iostream>
using namespace std;

// Function to print a full pyramid
void fullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

// Function to print an inverted half pyramid
void invertedHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}

// Function to print an inverted full pyramid
void invertedFullPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

// Function to print a hollow inverted half pyramid
void hollowInvertedHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// Function to print a hollow full pyramid
void hollowFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the dimension for the patterns: ";
    cin >> n;

    cout << "\nFull Pyramid:\n";
    fullPyramid(n);

    cout << "\nInverted Half Pyramid:\n";
    invertedHalfPyramid(n);

    cout << "\nInverted Full Pyramid:\n";
    invertedFullPyramid(n);

    cout << "\nHollow Inverted Half Pyramid:\n";
    hollowInvertedHalfPyramid(n);

    cout << "\nHollow Full Pyramid:\n";
    hollowFullPyramid(n);

    return 0;
}
