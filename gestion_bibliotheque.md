
# Exercice : Gestion d'une bibliothèque

## Contexte

Tu dois développer une petite application pour gérer une bibliothèque. La bibliothèque contient des livres, et tu dois être capable d'ajouter, de supprimer, de rechercher des livres et d'afficher les informations relatives à ces livres.

## Spécifications

1. Crée une classe `Livre` qui représente un livre. La classe doit avoir les attributs suivants :
   - `titre` : Le titre du livre.
   - `auteur` : L'auteur du livre.
   - `isbn` : Le numéro ISBN (identifiant unique du livre).
   - `anneePublication` : L'année de publication du livre.

2. Crée une classe `Bibliotheque` qui représente une collection de livres. La classe doit avoir les méthodes suivantes :
   - `ajouterLivre(Livre livre)` : Ajouter un livre à la bibliothèque.
   - `supprimerLivreParIsbn(std::string isbn)` : Supprimer un livre en utilisant son numéro ISBN.
   - `rechercherLivreParTitre(std::string titre)` : Rechercher un livre par son titre et afficher ses informations.
   - `afficherLivres()` : Afficher tous les livres de la bibliothèque.

3. Dans le programme principal (`main`), crée une instance de la classe `Bibliotheque` et effectue les opérations suivantes :
   - Ajouter quelques livres à la bibliothèque.
   - Rechercher un livre par son titre.
   - Supprimer un livre par son ISBN.
   - Afficher tous les livres restants dans la bibliothèque.

## Ce que tu dois faire

1. Créer les classes `Livre` et `Bibliotheque` en suivant les spécifications.
2. Tester l'application en ajoutant plusieurs livres, puis en effectuant des recherches et des suppressions.
3. Ajouter une fonctionnalité supplémentaire comme la possibilité de rechercher par auteur ou de trier les livres par année de publication si tu veux étendre l'exercice.

## Explication de l'exercice

- **Livre** : La classe représente un livre avec des attributs comme le titre, l'auteur, l'ISBN et l'année de publication. Elle a une méthode `afficher` qui permet d'afficher ses informations.
- **Bibliothèque** : La classe gère une collection de livres avec des méthodes pour ajouter des livres, rechercher par titre, supprimer par ISBN et afficher la liste des livres.
