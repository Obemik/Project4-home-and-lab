#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\"U lukomor'a dub zelenij,\n";
    cout << "Zlataya zep na dupe tom,\n";
    cout << "I dnem i nochju kot uchenij\n";
    cout << "vse hodit po cepi krugom\"\n";
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}
