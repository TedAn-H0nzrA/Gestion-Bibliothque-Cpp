cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Bibliotheque CXX)

# Ajouter le répertoire d'inclusion
include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/app)

# Ajouter les fichiers sources
add_executable(Biblio src/main.cpp src/Bibliotheque.cpp src/Livre.cpp)


# Spécifier les options de compilation
set(CMAKE_CXX_STANDARD 11)