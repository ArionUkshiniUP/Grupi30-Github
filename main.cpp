#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <unistd.h>
#include "menu.cpp"


using namespace std;


int main()
{
    bool loop = true;
    
    while (loop)
    {
        int opsioni = shfaqMenu();
        ifstream inFile("detyrat.txt");
        ofstream outFile;
        vector<string> listaDetyrave;
        string detyra;
        string detyrat;


        switch (opsioni)
        {
        case 1: // Shfaq detyrat


        case 2: // Shto detyre
            cout << "\nShto detyren: ";
            cin.ignore(); // Pas `cin` nevojitet `ignore()`
            getline(cin, detyra);


            outFile.open("detyrat.txt", ios::app); // Hap për shtim
            outFile << detyra << "\n";
            outFile.close();
            
            cout << "\nDetyra u shtua me sukses!\n";
            sleep(1);
            break;


        case 3: // Fshi detyre


        case 4: // Dalje nga programi
        }
    }


    return 0;
}



