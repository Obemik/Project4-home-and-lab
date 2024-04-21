#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3;
    cout << "Enter R1: ";
    cin >> R1;
    cout << "Enter R2: ";
    cin >> R2;
    cout << "Enter R3: ";
    cin >> R3;
    double R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
    cout << "Your R0: " << R0 << endl;
    return 0;
}
