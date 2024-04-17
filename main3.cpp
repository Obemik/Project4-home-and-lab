#include <iostream>
#include <windows.h> // Include this for SetConsoleTextAttribute

using namespace std;

int main() {
    char Luc = 201;
    char ruc = 187;
    char Lbc = 200;
    char rbc = 188; 
    char hs = 205; 
    char vs = 186;
    char vsr = 204; 

    cout << Luc << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << ruc << endl;
    cout << vs << "          Vremena goda           " << vs << endl;
    cout << vsr << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << ruc << endl;
    cout << vs << "  Zima " << vs << "  Vesna " << vs << "  Leto " << vs << "  Osen  " << vs << endl;
    cout << Lbc << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << rbc << endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    return 0;
}
