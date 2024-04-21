#include <iostream>
using namespace std;

int main() {
    double v, t, a;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter t: ";
    cin >> t;
    cout << "Enter a: ";
    cin >> a;
    double S = v * t + (a * t * t) / 2.0;
    cout << "Your S: " << S << endl;
    return 0;
}
