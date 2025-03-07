#include <string>

class Livre{
    private:
        string titre;
        string auteur;
        int isbn;
        string annePublication;

    public:
        // Constructeur
        Livre(const string& t, const string& a, const int& i, const string& aP);

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