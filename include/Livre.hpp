#include <iostream>
#include <string>
using namespace std;
class Livre{
    private:
        string titre;
        string auteur;
        int isbn;
        string annePublication;

    public:
        // Constructeur
        Livre(const string& t, const string& a, const int& i, const string& aP);

        void affichage() const {
            cout << isbn << ". Titre: " << titre << ", Auteur: " << auteur << ", Année de publication: " << annePublication << endl;
        }

        // Getters
        string getTitre() const;
        string getAuteur() const;
        int getIsbn() const;
        string getAnnePub() const;

        // Setters
        void setTitre(string& t);
        void setAuteur(string& a);
        void setIsbn(int& i);
        void setAnnePub(string& aP);
};