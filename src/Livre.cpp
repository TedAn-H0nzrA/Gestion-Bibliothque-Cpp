#include "Livre.hpp"
using namespace std;

Livre::Livre(const string& t, const string& a, const int& i, const string& aP):
            titre(t), auteur(a), isbn(i), annePublication(aP){}

// Getters
string Livre::getTitre() const {return titre;}
string Livre::getAuteur() const {return auteur;}
int Livre::getIsbn() const {return isbn;}
string Livre::getAnnePub() const {return annePublication;}


// Setters
void Livre::setTitre(string& t){
    titre = t;
}
void Livre::setAuteur(string& a){
    auteur = a;
}
void Livre::setIsbn(int& i){
    isbn = i;
}
void Livre::setAnnePub(string& aP){
    annePublication = aP;
}