#include <iostream>
#include <iomanip>
#include <string>
#include "Bibliotheque.hpp"
using namespace std;


int main(int argc, char const *argv[])
{
    cout << quoted("Gestion Bibliotheque") << endl;
    cout << endl;

    bool run = true;
    while (run)
    {
        cout << "Bienvenue, taper " << quoted("q") << " pour quitter";
        cout << "Tapez n'importe quelle autre lettre pour continuer ";
        string q; cin >> q;

        if (q == "q")
        {
            cout << "Bye Bye\n";
            run = false;
        }
        
    }
    

    return 0;
}
