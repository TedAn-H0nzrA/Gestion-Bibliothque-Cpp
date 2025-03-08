#include <string>
#include "Livre.hpp"
#include <vector>
using namespace std;

class Bibliotheque{
    public:
        vector<Livre> allLivre;
        void ajouterLivre(vector<Livre>& livre);
        void suppressionLivreIsbn(int& isbn);
        void rechercheLivreTitre(string& titre);
        void affichageSpecifique(int& isbn);
        void afficherLivresAll(vector<Livre> allLivre);
};