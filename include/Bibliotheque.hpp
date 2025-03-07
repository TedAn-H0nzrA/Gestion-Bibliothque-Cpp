#include <string>
#include "Livre.hpp"

class Bibliotheque{
    public:
        void ajouterLivre(Livre livre);
        void suppressinLivreIsbn(int& isbn);
        void rechercheLivreTitre(string& titre);
        void affichageSpecifique(int& isbn);
        void afficherLivresAll();

};