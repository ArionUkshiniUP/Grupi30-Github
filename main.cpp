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
        ifstream inFile("detyrat.txt"); // Hap skedarin për lexim
        ofstream outFile; // Hapet më vonë nëse është e nevojshme
    }
}
