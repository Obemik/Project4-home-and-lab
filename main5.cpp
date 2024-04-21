#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14;
    double L;
    cout << "Enter L: ";
    cin >> L;
    double R = L / (2.0 * pi);
    double S = pi * R * R;
    cout << "Your R: " << R << endl;
    cout << "Your S: " << S << endl;
    return 0;
}
