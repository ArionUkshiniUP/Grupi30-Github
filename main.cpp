#include <iostream>
#include <fstream>
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
    }

    return 0;
}
