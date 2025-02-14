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
            if (!inFile) {

                cout << "\nNuk ka detyra te regjistruara!\n";

            } else {

                while (getline(inFile, detyrat))

                {

                    listaDetyrave.push_back(detyrat);

                    cout << i << ": " << detyrat << endl;

                    i++;

                }

                if (listaDetyrave.empty()) {

                    cout << "\nNuk ka detyra per t'u shfaqur!\n";

                }

            }

            inFile.close();

            sleep(1);

            break;

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

       case 3:  inFile.clear();  // Reset file flags
            inFile.seekg(0); // Shko në fillim të skedarit

            while (getline(inFile, detyrat))
            {
                listaDetyrave.push_back(detyrat);
                cout << i << ": " << detyrat << endl;
                i++;
            }
            inFile.close();

            if (listaDetyrave.empty()) {
                cout << "\nNuk ka detyra per te fshire!\n";
                sleep(1);
                break;
            }

            cout << "\nCilen detyre deshiron ta fshishe? ";
            cin >> n;

            if (cin.fail()) {
                cin.clear(); // Rregullo inputin nese futet gabim
                cin.ignore(1000, '\n');
                cout << "\nInput i pavlefshem!\n";
                sleep(1);
                break;
            }

            if (n > 0 && n <= listaDetyrave.size())
            {
                outFile.open("detyrat.txt"); // Fshin gjithçka dhe rishkruan
                for (int j = 0; j < listaDetyrave.size(); j++)
                {
                    if (j != n - 1) // Ruaj të gjitha përveç asaj që fshihet
                    {
                        outFile << listaDetyrave[j] << "\n";
                    }
                }
                outFile.close();
                cout << "\nDetyra u fshi me sukses!\n";
            }
            else
            {
                cout << "\nNumri i detyres eshte i pavlefshem!\n";
            }
            sleep(1);
            break;
        


        case 4: // Dalje nga programi
            cout << "\nDuke dale nga programi...\n";
            sleep(1);
            loop = false;
            break;
            
      default: // Default case for invalid input
            cout << "\nOpsion i pavlefshem! Ju lutem zgjidhni nje opsion te vlefshem.\n";
            sleep(1);
            break;
        }
    }


    return 0;
}



