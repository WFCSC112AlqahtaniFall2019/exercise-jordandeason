#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    int tempVar;
    for (i = 0; i < NUM_ELEMENTS / 2; ++i) {
        tempVar = revVctr[i];
        revVctr[i] = revVctr[NUM_ELEMENTS - i - 1];// Swap
        revVctr[NUM_ELEMENTS - i - 1] = tempVar;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}