#include <string>
#include "Livre.hpp"
#include <vector>

class Bibliotheque{
    public:
        vector<Livre> allLivre;
        void ajouterLivre();
        void suppressionLivreIsbn(int& isbn);
        void rechercheLivreTitre(string& titre);
        void affichageSpecifique(int& isbn);
        void afficherLivresAll();
};