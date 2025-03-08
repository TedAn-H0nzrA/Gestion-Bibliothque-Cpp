#include <iomanip>
#include <vector>
#include "Bibliotheque.hpp"
using namespace std;

Bibliotheque MaBiblio;

void gestion_biblio(){
    cout << "1. Affichier les Livres existants\n"
    << "2. Ajouter un Livre au bibliothèque\n"
    << "3. Afficher un livre précis\n"
    << "4. Rechercher un livre\n"
    << "5. Supprimer un livre\n"
    << "Votre choix: ";
    
    int choix; cin >> choix;
    cout << endl;
    int isbn;
    string titre;
    
    switch (choix)
    {
        case 1:
        MaBiblio.afficherLivresAll();
        break;
        
        case 2:
        MaBiblio.ajouterLivre();
        break;
        
        case 3:
        cout << "Entrez l'identifiant du livre: ";
        cin >> isbn;
        MaBiblio.affichageSpecifique(isbn);
        cin.clear(); cin.ignore();
        break;
        
        case 4:
        cin.ignore();
        cout <<"Entrez le titre du livre: ";
        getline(cin, titre);
        MaBiblio.rechercheLivreTitre(titre);
        break;

    case 5:
        cout << "Entrez l'identifiant du livre à supprimer: ";
        cin >> isbn;
        MaBiblio.suppressionLivreIsbn(isbn);
        break;

    default:
        cout << "Entrer invalide!" << endl; 
        cin.ignore(); cin.clear();
        break;
    }
}

int main(int argc, char const *argv[])
{
    cout << quoted("Gestion Bibliotheque") << endl;
    cout << endl;

    bool run = true;
    while (run)
    {
        gestion_biblio();

        cout << "Taper " << quoted("q") << " pour quitter" << endl;
        cout << "Tapez n'importe quelle autre lettre pour continuer: ";
        string q; cin >> q;
        if (q == "q")
        {
            cout << "Bye Bye\n";
            run = false;
        }
        cout << endl;
        cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
    }
    

    return 0;
}
