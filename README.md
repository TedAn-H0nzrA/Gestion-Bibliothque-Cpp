# Projet de Gestion de Bibliothèque

## Description

Ce projet est un système de gestion de bibliothèque en C++ qui permet de gérer une collection de livres. Il offre une interface en ligne de commande pour ajouter, supprimer, rechercher et afficher des livres.

## Fonctionnalités

- Affichage de tous les livres de la bibliothèque
- Ajout de nouveaux livres avec génération automatique d'ISBN
- Affichage des détails d'un livre spécifique via son ISBN
- Recherche de livres par titre
- Suppression de livres par ISBN

## Structure du Projet

Le projet est organisé en plusieurs fichiers:

- **main.cpp**: Point d'entrée du programme, gestion du menu et de l'interface utilisateur
- **Bibliotheque.hpp**: Déclaration de la classe Bibliotheque
- **Bibliotheque.cpp**: Implémentation des méthodes de la classe Bibliotheque
- **Livre.hpp**: Déclaration de la classe Livre
- **Livre.cpp**: Implémentation des méthodes de la classe Livre
- **CMakeLists.txt**: Pour la gestion et la compilation du projet

## Classes

### Livre

Représente un livre avec les attributs suivants:

- Titre
- Auteur
- ISBN (identifiant unique)
- Année de publication

### Bibliotheque

Gère une collection de livres avec les fonctionnalités suivantes:

- Stockage d'une liste de livres
- Ajout/suppression de livres
- Recherche et affichage de livres

## Compilation et Exécution

### Prérequis

- Compilateur C++ avec support pour C++11 ou supérieur (GCC, Clang, MSVC, etc.)

### Compilation

```bash
# Créer un dossier de compilation
mkdir build
cd build

# Générer les fichiers de compilation
cmake ..

# Compiler le projet
cmake --build .
```

### Exécution

```bash
# L'exécutable sera dans le dossier app
cd ../app
./Biblio
```

## Utilisation

1. Lancez le programme
2. Utilisez le menu pour accéder aux différentes fonctionnalités:
   - Option 1: Afficher tous les livres
   - Option 2: Ajouter un nouveau livre
   - Option 3: Afficher les détails d'un livre spécifique
   - Option 4: Rechercher un livre par titre
   - Option 5: Supprimer un livre
3. Pour quitter, tapez 'q' lorsque demandé

## Exemple d'utilisation

```bash
"Gestion Bibliotheque"

1. Afficher les Livres existants
2. Ajouter un Livre à la bibliothèque
3. Afficher un livre précis
4. Rechercher un livre
5. Supprimer un livre
Votre choix: 2

Ajout d'un livre!
Titre: Don Quichotte
Auteur: Miguel de Cervantes
Année de publication(JJ/MM/AA): 01/01/1605
Livre Don Quichotte ajouté avec succès!

Taper "q" pour quitter
Tapez n'importe quelle autre lettre pour continuer: c

1. Afficher les Livres existants
2. Ajouter un Livre à la bibliothèque
3. Afficher un livre précis
4. Rechercher un livre
5. Supprimer un livre
Votre choix: 1

Voici tous les livres!
1. Titre: Don Quichotte, Auteur: Miguel de Cervantes, Année de publication: 01/01/1605
```

## Améliorations Possibles

- Modification des inforamtions des livres
- Sauvegarde et chargement des données depuis un fichier
- Validation des entrées utilisateur plus robuste
- Recherche avancée (par auteur, année, etc.)
- Interface graphique
- Gestion des emprunts et des retours

## Remeciement

Un grande remerciement pour vos retour.
