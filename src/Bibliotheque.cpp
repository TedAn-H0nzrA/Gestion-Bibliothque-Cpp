#include <algorithm>
#include "Bibliotheque.hpp"
using namespace std;

void Bibliotheque::afficherLivresAll(){
    
    if (!allLivre.empty()){
        cout << "Voici tous les livres!\n";
        for (auto &&i : allLivre)
        {
            auto titre = i.getTitre();
            auto auteur = i.getAuteur();
            auto isbn = i.getIsbn();
            auto annnePub = i.getAnnePub();

            cout << isbn << ". Titre: " << titre << ", Auteur: "  << auteur << ", Année de publication: " << annnePub << endl;
            cout << endl;
        }
    }else
    {
        cout << "Collection de livre vide!" << endl;
    }
    cout << endl;    

}

void Bibliotheque::affichageSpecifique(int& isbn){
    auto it = find_if(allLivre.begin(), allLivre.end(), [&isbn](const Livre& livre) {
        return livre.getIsbn() == isbn;
    });

    if (it != allLivre.end()) {
        it->affichage();  // Affiche les détails du livre
    } else {
        cout << "Aucun livre trouvé avec l'ISBN " << isbn << endl;
    }
    cout << endl;
}

void Bibliotheque::ajouterLivre(){
    // Ajout Livre par variable
    string titre, auteur, annePub;
    int isbn = 1;
    cin.clear(); cin.ignore();

    cout << "Ajout d'un livre!\n";
    cout << "Titre: "; getline(cin, titre);
    cout << "Auteur: "; getline(cin, auteur);
    cout << "Année de publication(JJ/MM/AA): "; cin >> annePub;

    if(!allLivre.empty()){
        isbn = allLivre.back().getIsbn() + 1;
    }

    Livre livre_ajouter(titre, auteur, isbn,annePub); 
    allLivre.push_back(livre_ajouter); 
    
    cout << "Livre " << titre << " ajouter avec succès!\n" << endl;    

};

void Bibliotheque::suppressionLivreIsbn(int& isbn){
    cout << "Suppression d'un livre!\n";
    afficherLivresAll();

    auto it = find_if(allLivre.begin(), allLivre.end(), [&isbn](const Livre& livre) {
        return livre.getIsbn() == isbn;
    });

    if(it != allLivre.end()){
        it->affichage();
        allLivre.erase(it);
        cout << "Suppression terminée!\n" << endl;
    }
    
}

void Bibliotheque::rechercheLivreTitre(string& titre){
    cout << "Recherche " << titre << " en cours ... \n";

    auto it = find_if(allLivre.begin(), allLivre.end(), [&titre](const Livre& livre) {
        return livre.getTitre() == titre;
    });

    if(it != allLivre.end()){
        cout << "Livre trouvé" << endl;
        it->affichage();
    }
    cout << endl;
}