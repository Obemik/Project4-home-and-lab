#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                Name       : ";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\"The war and the peace\"\n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "                Avtor      :   L.N. Tolstoj\n";
    cout << "                Izdatelstvo:  Piter\n";
    cout << "                Pages      : ";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "500\n";
    SetConsoleTextAttribute(hConsole, 7);
    cout << endl;
    return 0;
}
