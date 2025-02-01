#include <iostream>

using namespace std;

int shfaqMenu()
{
    int opsioni = 0;
    cout << "\n=== Menaxhimi i Detyrave ===\n";
    cout << "1. Shfaq Detyrat\n";
    cout << "2. Shto Detyre\n";
    cout << "3. Fshi Detyre\n";
    cout << "4. Dil\n";
    cout << "Zgjedh nje opsion: ";
    cin >> opsioni;

    return opsioni;
}